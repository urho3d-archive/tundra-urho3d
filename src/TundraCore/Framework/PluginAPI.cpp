// For conditions of distribution and use, see copyright notice in LICENSE

#include "StableHeaders.h"
#include "Win.h"
#include "PluginAPI.h"
#include "Console/ConsoleAPI.h"
#include "Framework.h"
#include "LoggingFunctions.h"

#include <Urho3D/IO/File.h>
#include <Urho3D/IO/FileSystem.h>
#include <Urho3D/Core/ProcessUtils.h>
#include <Urho3D/Resource/XMLFile.h>

#ifndef WIN32
#include <dlfcn.h>
#endif

using namespace Urho3D;

namespace Tundra
{

/// @todo Move to SystemInfo?
static String GetErrorString(int error)
{
#ifdef WIN32
    void *lpMsgBuf = 0;

    HRESULT hresult = HRESULT_FROM_WIN32(error);
    if (FormatMessageW(FORMAT_MESSAGE_ALLOCATE_BUFFER | FORMAT_MESSAGE_FROM_SYSTEM | FORMAT_MESSAGE_IGNORE_INSERTS,
        0, hresult, 0 /*Default language*/, (LPTSTR)&lpMsgBuf, 0, 0) == 0)
    {
        return ""; /**< @todo return error message describing the failure of this function and/or LogError() print?*/
    }

    // Copy message to C++ -style string, since the data need to be freed before return.
    String ret;
    ret += String(WString((wchar_t*)lpMsgBuf));
    ret += "(";
    ret += error;
    ret += ")";
    LocalFree(lpMsgBuf);
    return ret;
#else
    return String(strerror(error)) + "(" + String(error) + ")";
#endif
}

/// Signature for Tundra plugins
typedef void (*TundraPluginMainSignature)(Framework *owner);

PluginAPI::PluginAPI(Framework *framework) :
    Object(framework->GetContext()),
    owner(framework)
{
}

void PluginAPI::LoadPlugin(const String &filename)
{
#ifdef WIN32
  #ifdef _DEBUG
    const String pluginSuffix = "_d.dll";
  #else
    const String pluginSuffix = ".dll";
  #endif
#elif defined(__APPLE__)
    const String pluginSuffix = ".dylib";
#else
    const String pluginSuffix = ".so";
#endif

    String path;
#ifdef ANDROID
    /// \todo Should not hardcode the package name, but transmit it from Java to native code
    // Note that using just dlopen() with no path name will not succeed
    path = "/data/data/" + owner->PackageName() + "/lib/lib" + filename.Trimmed() + pluginSuffix;
#else
    path = GetNativePath(owner->InstallationDirectory() + "Plugins/" + filename.Trimmed() + pluginSuffix);
#endif

    FileSystem* fs = GetSubsystem<FileSystem>();
    if (!fs->FileExists(path))
    {
        LogWarning("Cannot load plugin \"" + path + "\" as the file does not exist.");
        return;
    }

    LogInfo("  " + filename);
    //owner->App()->SetSplashMessage("Loading plugin " + filename);

#ifdef WIN32
    HMODULE module = LoadLibraryW(WString(path).CString());
    if (module == NULL)
    {
        DWORD errorCode = GetLastError();
        LogError("Failed to load plugin from \"" + path + "\": " + GetErrorString(errorCode) + " (Missing dependencies?)");
        return;
    }
    TundraPluginMainSignature mainEntryPoint = (TundraPluginMainSignature)GetProcAddress(module, "TundraPluginMain");
    if (mainEntryPoint == NULL)
    {
        DWORD errorCode = GetLastError();
        LogError("Failed to find plugin startup function 'TundraPluginMain' from plugin file \"" + path + "\": " + GetErrorString(errorCode));
        return;
    }
#else
    const char *dlerrstr;
    dlerror();
    void *module = dlopen(path.CString(), RTLD_GLOBAL|RTLD_LAZY);
    if ((dlerrstr=dlerror()) != 0)
    {
        LogError("Failed to load plugin from file \"" + path + "\": Error " + String(dlerrstr) + "!");
        return;
    }

    dlerror();
    TundraPluginMainSignature mainEntryPoint = (TundraPluginMainSignature)dlsym(module, "TundraPluginMain");
    if ((dlerrstr=dlerror()) != 0)
    {
        LogError("Failed to find plugin startup function 'TundraPluginMain' from plugin file \"" + path + "\": Error " + String(dlerrstr) + "!");
        return;
    }
#endif
    Plugin p = { module, filename, path };
    plugins.Push(p);
    mainEntryPoint(owner);
}

void PluginAPI::UnloadPlugins()
{
    foreach(const Plugin &plugin, plugins)
    {
#ifdef WIN32
        FreeLibrary((HMODULE)plugin.handle);
#else
        dlclose(plugin.handle);
#endif
    }
    plugins.Clear();
}

void PluginAPI::ListPlugins() const
{
    LogInfo("Loaded Plugins");
    foreach(const Plugin &plugin, plugins)
        LogInfo("  " + plugin.name);
}

Vector<String> PluginAPI::ConfigurationFiles() const
{
    Vector<String> configs;
    Vector<String> cmdLineParams = owner->CommandLineParameters("--config");
    if (cmdLineParams.Size() > 0)
    {
        foreach(const String &config, cmdLineParams)
            configs.Push(owner->LookupRelativePath(config));
    }
    return configs;
}

void PluginAPI::LoadPluginsFromXML(String pluginConfigurationFile)
{
    bool showDeprecationWarning = true;
    pluginConfigurationFile = owner->LookupRelativePath(pluginConfigurationFile);

    Urho3D::XMLFile doc(GetContext());
    File file(GetContext(), pluginConfigurationFile, FILE_READ);
    if (!doc.Load(file))
    {
        LogError("PluginAPI::LoadPluginsFromXML: Failed to open file \"" + pluginConfigurationFile + "\"!");
        return;
    }
    file.Close();

    XMLElement root = doc.GetRoot();
    XMLElement e = root.GetChild("plugin");
    while(e)
    {
        if (e.HasAttribute("path"))
        {
            String pluginPath = e.GetAttribute("path");
            LoadPlugin(pluginPath);
            if (showDeprecationWarning)
            {
                LogWarning("PluginAPI::LoadPluginsFromXML: In file " + pluginConfigurationFile + ", using XML tag <plugin path=\"PluginNameHere\"/> will be deprecated. Consider replacing it with --plugin command line argument instead");
                showDeprecationWarning = false;
            }
        }
        e = e.GetNext("plugin");
    }
}

void PluginAPI::LoadPluginsFromCommandLine()
{
    if (!owner->HasCommandLineParameter("--plugin"))
        return;

    LogInfo("");
    LogInfo("Loading");

    Vector<String> plugins = owner->CommandLineParameters("--plugin");
    foreach(String plugin, plugins)
    {
        plugin = plugin.Trimmed();
        if (!plugin.Contains(";"))
            LoadPlugin(plugin);
        else
        {
            Vector<String> entries = plugin.Split(';');
            foreach(const String& entry, entries)
                LoadPlugin(entry);
        }
    }
}

}
