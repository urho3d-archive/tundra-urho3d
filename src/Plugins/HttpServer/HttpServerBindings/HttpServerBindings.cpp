// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "HttpServer.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif



using namespace Tundra;
using namespace std;

namespace JSBindings
{



static const char* HttpServer_ID = "HttpServer";

const char* SignalWrapper_HttpServer_ServerStarted_ID = "SignalWrapper_HttpServer_ServerStarted";

class SignalWrapper_HttpServer_ServerStarted
{
public:
    SignalWrapper_HttpServer_ServerStarted(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_HttpServer_ServerStarted : public SignalReceiver
{
public:
    void OnSignal()
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_HttpServer_ServerStarted_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_HttpServer_ServerStarted>(ctx, SignalWrapper_HttpServer_ServerStarted_ID);
    return 0;
}

static duk_ret_t SignalWrapper_HttpServer_ServerStarted_Connect(duk_context* ctx)
{
    SignalWrapper_HttpServer_ServerStarted* wrapper = GetThisValueObject<SignalWrapper_HttpServer_ServerStarted>(ctx, SignalWrapper_HttpServer_ServerStarted_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_HttpServer_ServerStarted* receiver = new SignalReceiver_HttpServer_ServerStarted();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_HttpServer_ServerStarted::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_HttpServer_ServerStarted_Disconnect(duk_context* ctx)
{
    SignalWrapper_HttpServer_ServerStarted* wrapper = GetThisValueObject<SignalWrapper_HttpServer_ServerStarted>(ctx, SignalWrapper_HttpServer_ServerStarted_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_HttpServer_ServerStarted_Emit(duk_context* ctx)
{
    SignalWrapper_HttpServer_ServerStarted* wrapper = GetThisValueObject<SignalWrapper_HttpServer_ServerStarted>(ctx, SignalWrapper_HttpServer_ServerStarted_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t HttpServer_Get_ServerStarted(duk_context* ctx)
{
    HttpServer* thisObj = GetThisWeakObject<HttpServer>(ctx);
    SignalWrapper_HttpServer_ServerStarted* wrapper = new SignalWrapper_HttpServer_ServerStarted(thisObj, &thisObj->ServerStarted);
    PushValueObject(ctx, wrapper, SignalWrapper_HttpServer_ServerStarted_ID, SignalWrapper_HttpServer_ServerStarted_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStarted_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStarted_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStarted_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStarted_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStarted_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_HttpServer_ServerStopped_ID = "SignalWrapper_HttpServer_ServerStopped";

class SignalWrapper_HttpServer_ServerStopped
{
public:
    SignalWrapper_HttpServer_ServerStopped(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_HttpServer_ServerStopped : public SignalReceiver
{
public:
    void OnSignal()
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_HttpServer_ServerStopped_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_HttpServer_ServerStopped>(ctx, SignalWrapper_HttpServer_ServerStopped_ID);
    return 0;
}

static duk_ret_t SignalWrapper_HttpServer_ServerStopped_Connect(duk_context* ctx)
{
    SignalWrapper_HttpServer_ServerStopped* wrapper = GetThisValueObject<SignalWrapper_HttpServer_ServerStopped>(ctx, SignalWrapper_HttpServer_ServerStopped_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_HttpServer_ServerStopped* receiver = new SignalReceiver_HttpServer_ServerStopped();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_HttpServer_ServerStopped::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_HttpServer_ServerStopped_Disconnect(duk_context* ctx)
{
    SignalWrapper_HttpServer_ServerStopped* wrapper = GetThisValueObject<SignalWrapper_HttpServer_ServerStopped>(ctx, SignalWrapper_HttpServer_ServerStopped_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_HttpServer_ServerStopped_Emit(duk_context* ctx)
{
    SignalWrapper_HttpServer_ServerStopped* wrapper = GetThisValueObject<SignalWrapper_HttpServer_ServerStopped>(ctx, SignalWrapper_HttpServer_ServerStopped_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t HttpServer_Get_ServerStopped(duk_context* ctx)
{
    HttpServer* thisObj = GetThisWeakObject<HttpServer>(ctx);
    SignalWrapper_HttpServer_ServerStopped* wrapper = new SignalWrapper_HttpServer_ServerStopped(thisObj, &thisObj->ServerStopped);
    PushValueObject(ctx, wrapper, SignalWrapper_HttpServer_ServerStopped_ID, SignalWrapper_HttpServer_ServerStopped_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStopped_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStopped_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStopped_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStopped_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_ServerStopped_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_HttpServer_HttpRequestReceived_ID = "SignalWrapper_HttpServer_HttpRequestReceived";

class SignalWrapper_HttpServer_HttpRequestReceived
{
public:
    SignalWrapper_HttpServer_HttpRequestReceived(Object* owner, Signal1< HttpRequest * >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal1< HttpRequest * >* signal_;
};

class SignalReceiver_HttpServer_HttpRequestReceived : public SignalReceiver
{
public:
    void OnSignal(HttpRequest * param0)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        PushWeakObject(ctx, param0);
        duk_put_prop_index(ctx, -2, 0);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_HttpServer_HttpRequestReceived_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_HttpServer_HttpRequestReceived>(ctx, SignalWrapper_HttpServer_HttpRequestReceived_ID);
    return 0;
}

static duk_ret_t SignalWrapper_HttpServer_HttpRequestReceived_Connect(duk_context* ctx)
{
    SignalWrapper_HttpServer_HttpRequestReceived* wrapper = GetThisValueObject<SignalWrapper_HttpServer_HttpRequestReceived>(ctx, SignalWrapper_HttpServer_HttpRequestReceived_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_HttpServer_HttpRequestReceived* receiver = new SignalReceiver_HttpServer_HttpRequestReceived();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_HttpServer_HttpRequestReceived::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_HttpServer_HttpRequestReceived_Disconnect(duk_context* ctx)
{
    SignalWrapper_HttpServer_HttpRequestReceived* wrapper = GetThisValueObject<SignalWrapper_HttpServer_HttpRequestReceived>(ctx, SignalWrapper_HttpServer_HttpRequestReceived_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_HttpServer_HttpRequestReceived_Emit(duk_context* ctx)
{
    SignalWrapper_HttpServer_HttpRequestReceived* wrapper = GetThisValueObject<SignalWrapper_HttpServer_HttpRequestReceived>(ctx, SignalWrapper_HttpServer_HttpRequestReceived_ID);
    if (!wrapper->owner_) return 0;
    HttpRequest* param0 = GetWeakObject<HttpRequest>(ctx, 0);
    wrapper->signal_->Emit(param0);
    return 0;
}

static duk_ret_t HttpServer_Get_HttpRequestReceived(duk_context* ctx)
{
    HttpServer* thisObj = GetThisWeakObject<HttpServer>(ctx);
    SignalWrapper_HttpServer_HttpRequestReceived* wrapper = new SignalWrapper_HttpServer_HttpRequestReceived(thisObj, &thisObj->HttpRequestReceived);
    PushValueObject(ctx, wrapper, SignalWrapper_HttpServer_HttpRequestReceived_ID, SignalWrapper_HttpServer_HttpRequestReceived_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_HttpServer_HttpRequestReceived_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_HttpRequestReceived_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_HttpRequestReceived_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_HttpRequestReceived_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_HttpServer_HttpRequestReceived_Emit, 1);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

static duk_ret_t HttpServer_Load(duk_context* ctx)
{
    HttpServer* thisObj = GetThisWeakObject<HttpServer>(ctx);
    thisObj->Load();
    return 0;
}

static duk_ret_t HttpServer_Initialize(duk_context* ctx)
{
    HttpServer* thisObj = GetThisWeakObject<HttpServer>(ctx);
    thisObj->Initialize();
    return 0;
}

static duk_ret_t HttpServer_Uninitialize(duk_context* ctx)
{
    HttpServer* thisObj = GetThisWeakObject<HttpServer>(ctx);
    thisObj->Uninitialize();
    return 0;
}

static duk_ret_t HttpServer_Update_float(duk_context* ctx)
{
    HttpServer* thisObj = GetThisWeakObject<HttpServer>(ctx);
    float frametime = (float)duk_require_number(ctx, 0);
    thisObj->Update(frametime);
    return 0;
}

static const duk_function_list_entry HttpServer_Functions[] = {
    {"Load", HttpServer_Load, 0}
    ,{"Initialize", HttpServer_Initialize, 0}
    ,{"Uninitialize", HttpServer_Uninitialize, 0}
    ,{"Update", HttpServer_Update_float, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_HttpServer(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, HttpServer_Functions);
    DefineProperty(ctx, "ServerStarted", HttpServer_Get_ServerStarted, nullptr);
    DefineProperty(ctx, "ServerStopped", HttpServer_Get_ServerStopped, nullptr);
    DefineProperty(ctx, "HttpRequestReceived", HttpServer_Get_HttpRequestReceived, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, HttpServer_ID);
}

}
