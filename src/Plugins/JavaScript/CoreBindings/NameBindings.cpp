// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "Scene/Name.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Scene/Entity.h"
#include "Framework/Framework.h"
#include "Scene/Scene.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{



static const char* Name_ID = "Name";

const char* SignalWrapper_Name_ComponentNameChanged_ID = "SignalWrapper_Name_ComponentNameChanged";

class SignalWrapper_Name_ComponentNameChanged
{
public:
    SignalWrapper_Name_ComponentNameChanged(Object* owner, Signal2< const String &, const String & >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal2< const String &, const String & >* signal_;
};

class SignalReceiver_Name_ComponentNameChanged : public SignalReceiver
{
public:
    void OnSignal(const String & param0, const String & param1)
    {
        duk_context* ctx = ctx_;
        duk_push_global_object(ctx);
        duk_get_prop_string(ctx, -1, "_OnSignal");
        duk_remove(ctx, -2);
        duk_push_number(ctx, (size_t)key_);
        duk_push_array(ctx);
        duk_push_string(ctx, param0.CString());
        duk_put_prop_index(ctx, -2, 0);
        duk_push_string(ctx, param1.CString());
        duk_put_prop_index(ctx, -2, 1);
        bool success = duk_pcall(ctx, 2) == 0;
        if (!success) LogError("[JavaScript] OnSignal: " + GetErrorString(ctx));
        duk_pop(ctx);
    }
};

static duk_ret_t SignalWrapper_Name_ComponentNameChanged_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Name_ComponentNameChanged>(ctx, SignalWrapper_Name_ComponentNameChanged_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Name_ComponentNameChanged_Connect(duk_context* ctx)
{
    SignalWrapper_Name_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Name_ComponentNameChanged>(ctx, SignalWrapper_Name_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Name_ComponentNameChanged* receiver = new SignalReceiver_Name_ComponentNameChanged();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Name_ComponentNameChanged::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Name_ComponentNameChanged_Disconnect(duk_context* ctx)
{
    SignalWrapper_Name_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Name_ComponentNameChanged>(ctx, SignalWrapper_Name_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Name_ComponentNameChanged_Emit(duk_context* ctx)
{
    SignalWrapper_Name_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Name_ComponentNameChanged>(ctx, SignalWrapper_Name_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    String param0 = duk_require_string(ctx, 0);
    String param1 = duk_require_string(ctx, 1);
    wrapper->signal_->Emit(param0, param1);
    return 0;
}

static duk_ret_t Name_Get_ComponentNameChanged(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    SignalWrapper_Name_ComponentNameChanged* wrapper = new SignalWrapper_Name_ComponentNameChanged(thisObj, &thisObj->ComponentNameChanged);
    PushValueObject(ctx, wrapper, SignalWrapper_Name_ComponentNameChanged_ID, SignalWrapper_Name_ComponentNameChanged_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Name_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Name_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Name_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Name_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Name_ComponentNameChanged_Emit, 2);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Name_ParentEntitySet_ID = "SignalWrapper_Name_ParentEntitySet";

class SignalWrapper_Name_ParentEntitySet
{
public:
    SignalWrapper_Name_ParentEntitySet(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Name_ParentEntitySet : public SignalReceiver
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

static duk_ret_t SignalWrapper_Name_ParentEntitySet_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Name_ParentEntitySet>(ctx, SignalWrapper_Name_ParentEntitySet_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Name_ParentEntitySet_Connect(duk_context* ctx)
{
    SignalWrapper_Name_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Name_ParentEntitySet>(ctx, SignalWrapper_Name_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Name_ParentEntitySet* receiver = new SignalReceiver_Name_ParentEntitySet();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Name_ParentEntitySet::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Name_ParentEntitySet_Disconnect(duk_context* ctx)
{
    SignalWrapper_Name_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Name_ParentEntitySet>(ctx, SignalWrapper_Name_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Name_ParentEntitySet_Emit(duk_context* ctx)
{
    SignalWrapper_Name_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Name_ParentEntitySet>(ctx, SignalWrapper_Name_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Name_Get_ParentEntitySet(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    SignalWrapper_Name_ParentEntitySet* wrapper = new SignalWrapper_Name_ParentEntitySet(thisObj, &thisObj->ParentEntitySet);
    PushValueObject(ctx, wrapper, SignalWrapper_Name_ParentEntitySet_ID, SignalWrapper_Name_ParentEntitySet_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntitySet_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Name_ParentEntityAboutToBeDetached_ID = "SignalWrapper_Name_ParentEntityAboutToBeDetached";

class SignalWrapper_Name_ParentEntityAboutToBeDetached
{
public:
    SignalWrapper_Name_ParentEntityAboutToBeDetached(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Name_ParentEntityAboutToBeDetached : public SignalReceiver
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

static duk_ret_t SignalWrapper_Name_ParentEntityAboutToBeDetached_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Name_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Name_ParentEntityAboutToBeDetached_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Name_ParentEntityAboutToBeDetached_Connect(duk_context* ctx)
{
    SignalWrapper_Name_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Name_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Name_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Name_ParentEntityAboutToBeDetached* receiver = new SignalReceiver_Name_ParentEntityAboutToBeDetached();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Name_ParentEntityAboutToBeDetached::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Name_ParentEntityAboutToBeDetached_Disconnect(duk_context* ctx)
{
    SignalWrapper_Name_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Name_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Name_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Name_ParentEntityAboutToBeDetached_Emit(duk_context* ctx)
{
    SignalWrapper_Name_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Name_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Name_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Name_Get_ParentEntityAboutToBeDetached(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    SignalWrapper_Name_ParentEntityAboutToBeDetached* wrapper = new SignalWrapper_Name_ParentEntityAboutToBeDetached(thisObj, &thisObj->ParentEntityAboutToBeDetached);
    PushValueObject(ctx, wrapper, SignalWrapper_Name_ParentEntityAboutToBeDetached_ID, SignalWrapper_Name_ParentEntityAboutToBeDetached_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Name_ParentEntityAboutToBeDetached_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

static duk_ret_t Name_TypeName(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    const String & ret = thisObj->TypeName();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t Name_TypeId(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    u32 ret = thisObj->TypeId();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Name_SetName_String(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    String name = duk_require_string(ctx, 0);
    thisObj->SetName(name);
    return 0;
}

static duk_ret_t Name_SetParentEntity_Entity(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    thisObj->SetParentEntity(entity);
    return 0;
}

static duk_ret_t Name_SetReplicated_bool(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetReplicated(enable);
    return 0;
}

static duk_ret_t Name_SetAttribute_String_Variant_AttributeChange__Type(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    String id = duk_require_string(ctx, 0);
    Variant value = GetVariant(ctx, 1);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 2);
    thisObj->SetAttribute(id, value, change);
    return 0;
}

static duk_ret_t Name_GetAttribute_String(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    String id = duk_require_string(ctx, 0);
    Variant ret = thisObj->GetAttribute(id);
    PushVariant(ctx, ret);
    return 1;
}

static duk_ret_t Name_GetFramework(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    Framework * ret = thisObj->GetFramework();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t Name_IsReplicated(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    bool ret = thisObj->IsReplicated();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Name_IsLocal(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    bool ret = thisObj->IsLocal();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Name_IsUnacked(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    bool ret = thisObj->IsUnacked();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Name_SetUpdateMode_AttributeChange__Type(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    AttributeChange::Type defaultmode = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->SetUpdateMode(defaultmode);
    return 0;
}

static duk_ret_t Name_UpdateMode(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    AttributeChange::Type ret = thisObj->UpdateMode();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Name_Id(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    component_id_t ret = thisObj->Id();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Name_SupportsDynamicAttributes(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    bool ret = thisObj->SupportsDynamicAttributes();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Name_NumAttributes(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    int ret = thisObj->NumAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Name_NumStaticAttributes(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    int ret = thisObj->NumStaticAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Name_EmitAttributeChanged_String_AttributeChange__Type(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    String attributeName = duk_require_string(ctx, 0);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 1);
    thisObj->EmitAttributeChanged(attributeName, change);
    return 0;
}

static duk_ret_t Name_ComponentChanged_AttributeChange__Type(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->ComponentChanged(change);
    return 0;
}

static duk_ret_t Name_ParentEntity(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    Entity * ret = thisObj->ParentEntity();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t Name_ParentScene(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    Scene * ret = thisObj->ParentScene();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t Name_SetTemporary_bool(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetTemporary(enable);
    return 0;
}

static duk_ret_t Name_IsTemporary(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    bool ret = thisObj->IsTemporary();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Name_ViewEnabled(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    bool ret = thisObj->ViewEnabled();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Name_AttributeNames(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    StringVector ret = thisObj->AttributeNames();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Name_AttributeIds(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    StringVector ret = thisObj->AttributeIds();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Name_ShouldBeSerialized_bool_bool(duk_context* ctx)
{
    Name* thisObj = GetThisWeakObject<Name>(ctx);
    bool serializeTemporary = duk_require_boolean(ctx, 0);
    bool serializeLocal = duk_require_boolean(ctx, 1);
    bool ret = thisObj->ShouldBeSerialized(serializeTemporary, serializeLocal);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Name_EnsureTypeNameWithoutPrefix_Static_String(duk_context* ctx)
{
    String tn = duk_require_string(ctx, 0);
    String ret = Name::EnsureTypeNameWithoutPrefix(tn);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static const duk_function_list_entry Name_Functions[] = {
    {"TypeName", Name_TypeName, 0}
    ,{"TypeId", Name_TypeId, 0}
    ,{"SetName", Name_SetName_String, 1}
    ,{"SetParentEntity", Name_SetParentEntity_Entity, 1}
    ,{"SetReplicated", Name_SetReplicated_bool, 1}
    ,{"SetAttribute", Name_SetAttribute_String_Variant_AttributeChange__Type, 3}
    ,{"GetAttribute", Name_GetAttribute_String, 1}
    ,{"GetFramework", Name_GetFramework, 0}
    ,{"IsReplicated", Name_IsReplicated, 0}
    ,{"IsLocal", Name_IsLocal, 0}
    ,{"IsUnacked", Name_IsUnacked, 0}
    ,{"SetUpdateMode", Name_SetUpdateMode_AttributeChange__Type, 1}
    ,{"UpdateMode", Name_UpdateMode, 0}
    ,{"Id", Name_Id, 0}
    ,{"SupportsDynamicAttributes", Name_SupportsDynamicAttributes, 0}
    ,{"NumAttributes", Name_NumAttributes, 0}
    ,{"NumStaticAttributes", Name_NumStaticAttributes, 0}
    ,{"EmitAttributeChanged", Name_EmitAttributeChanged_String_AttributeChange__Type, 2}
    ,{"ComponentChanged", Name_ComponentChanged_AttributeChange__Type, 1}
    ,{"ParentEntity", Name_ParentEntity, 0}
    ,{"ParentScene", Name_ParentScene, 0}
    ,{"SetTemporary", Name_SetTemporary_bool, 1}
    ,{"IsTemporary", Name_IsTemporary, 0}
    ,{"ViewEnabled", Name_ViewEnabled, 0}
    ,{"AttributeNames", Name_AttributeNames, 0}
    ,{"AttributeIds", Name_AttributeIds, 0}
    ,{"ShouldBeSerialized", Name_ShouldBeSerialized_bool_bool, 2}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry Name_StaticFunctions[] = {
    {"EnsureTypeNameWithoutPrefix", Name_EnsureTypeNameWithoutPrefix_Static_String, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_Name(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, Name_StaticFunctions);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, Name_Functions);
    DefineProperty(ctx, "ComponentNameChanged", Name_Get_ComponentNameChanged, nullptr);
    DefineProperty(ctx, "ParentEntitySet", Name_Get_ParentEntitySet, nullptr);
    DefineProperty(ctx, "ParentEntityAboutToBeDetached", Name_Get_ParentEntityAboutToBeDetached, nullptr);
    DefineProperty(ctx, "typeName", Name_TypeName, nullptr);
    DefineProperty(ctx, "typeId", Name_TypeId, nullptr);
    DefineProperty(ctx, "replicated", Name_IsReplicated, Name_SetReplicated_bool);
    DefineProperty(ctx, "local", Name_IsLocal, nullptr);
    DefineProperty(ctx, "unacked", Name_IsUnacked, nullptr);
    DefineProperty(ctx, "updateMode", Name_UpdateMode, Name_SetUpdateMode_AttributeChange__Type);
    DefineProperty(ctx, "id", Name_Id, nullptr);
    DefineProperty(ctx, "temporary", Name_IsTemporary, Name_SetTemporary_bool);
    DefineProperty(ctx, "viewEnabled", Name_ViewEnabled, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, Name_ID);
}

}
