// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "Camera.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif

#include "Entity.h"


using namespace Tundra;
using namespace std;

namespace JSBindings
{

static const char* Ray_ID = "Ray";
static const char* Point_ID = "Point";
static const char* float4x4_ID = "float4x4";

static duk_ret_t Ray_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<Ray>(ctx, Ray_ID);
    return 0;
}

static duk_ret_t float4x4_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<float4x4>(ctx, float4x4_ID);
    return 0;
}


static const char* Camera_ID = "Camera";

const char* SignalWrapper_Camera_ComponentNameChanged_ID = "SignalWrapper_Camera_ComponentNameChanged";

class SignalWrapper_Camera_ComponentNameChanged
{
public:
    SignalWrapper_Camera_ComponentNameChanged(Object* owner, Signal2< const String &, const String & >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal2< const String &, const String & >* signal_;
};

class SignalReceiver_Camera_ComponentNameChanged : public SignalReceiver
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

static duk_ret_t SignalWrapper_Camera_ComponentNameChanged_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Camera_ComponentNameChanged>(ctx, SignalWrapper_Camera_ComponentNameChanged_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Camera_ComponentNameChanged_Connect(duk_context* ctx)
{
    SignalWrapper_Camera_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Camera_ComponentNameChanged>(ctx, SignalWrapper_Camera_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Camera_ComponentNameChanged* receiver = new SignalReceiver_Camera_ComponentNameChanged();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Camera_ComponentNameChanged::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Camera_ComponentNameChanged_Disconnect(duk_context* ctx)
{
    SignalWrapper_Camera_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Camera_ComponentNameChanged>(ctx, SignalWrapper_Camera_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Camera_ComponentNameChanged_Emit(duk_context* ctx)
{
    SignalWrapper_Camera_ComponentNameChanged* wrapper = GetThisValueObject<SignalWrapper_Camera_ComponentNameChanged>(ctx, SignalWrapper_Camera_ComponentNameChanged_ID);
    if (!wrapper->owner_) return 0;
    String param0 = duk_require_string(ctx, 0);
    String param1 = duk_require_string(ctx, 1);
    wrapper->signal_->Emit(param0, param1);
    return 0;
}

static duk_ret_t Camera_Get_ComponentNameChanged(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    SignalWrapper_Camera_ComponentNameChanged* wrapper = new SignalWrapper_Camera_ComponentNameChanged(thisObj, &thisObj->ComponentNameChanged);
    PushValueObject(ctx, wrapper, SignalWrapper_Camera_ComponentNameChanged_ID, SignalWrapper_Camera_ComponentNameChanged_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Camera_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ComponentNameChanged_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ComponentNameChanged_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ComponentNameChanged_Emit, 2);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Camera_ParentEntitySet_ID = "SignalWrapper_Camera_ParentEntitySet";

class SignalWrapper_Camera_ParentEntitySet
{
public:
    SignalWrapper_Camera_ParentEntitySet(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Camera_ParentEntitySet : public SignalReceiver
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

static duk_ret_t SignalWrapper_Camera_ParentEntitySet_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Camera_ParentEntitySet>(ctx, SignalWrapper_Camera_ParentEntitySet_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Camera_ParentEntitySet_Connect(duk_context* ctx)
{
    SignalWrapper_Camera_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Camera_ParentEntitySet>(ctx, SignalWrapper_Camera_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Camera_ParentEntitySet* receiver = new SignalReceiver_Camera_ParentEntitySet();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Camera_ParentEntitySet::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Camera_ParentEntitySet_Disconnect(duk_context* ctx)
{
    SignalWrapper_Camera_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Camera_ParentEntitySet>(ctx, SignalWrapper_Camera_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Camera_ParentEntitySet_Emit(duk_context* ctx)
{
    SignalWrapper_Camera_ParentEntitySet* wrapper = GetThisValueObject<SignalWrapper_Camera_ParentEntitySet>(ctx, SignalWrapper_Camera_ParentEntitySet_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Camera_Get_ParentEntitySet(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    SignalWrapper_Camera_ParentEntitySet* wrapper = new SignalWrapper_Camera_ParentEntitySet(thisObj, &thisObj->ParentEntitySet);
    PushValueObject(ctx, wrapper, SignalWrapper_Camera_ParentEntitySet_ID, SignalWrapper_Camera_ParentEntitySet_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntitySet_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntitySet_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntitySet_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

const char* SignalWrapper_Camera_ParentEntityAboutToBeDetached_ID = "SignalWrapper_Camera_ParentEntityAboutToBeDetached";

class SignalWrapper_Camera_ParentEntityAboutToBeDetached
{
public:
    SignalWrapper_Camera_ParentEntityAboutToBeDetached(Object* owner, Signal0< void >* signal) :
        owner_(owner),
        signal_(signal)
    {
    }

    WeakPtr<Object> owner_;
    Signal0< void >* signal_;
};

class SignalReceiver_Camera_ParentEntityAboutToBeDetached : public SignalReceiver
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

static duk_ret_t SignalWrapper_Camera_ParentEntityAboutToBeDetached_Finalizer(duk_context* ctx)
{
    FinalizeValueObject<SignalWrapper_Camera_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Camera_ParentEntityAboutToBeDetached_ID);
    return 0;
}

static duk_ret_t SignalWrapper_Camera_ParentEntityAboutToBeDetached_Connect(duk_context* ctx)
{
    SignalWrapper_Camera_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Camera_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Camera_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    HashMap<void*, SharedPtr<SignalReceiver> >& signalReceivers = JavaScriptInstance::InstanceFromContext(ctx)->SignalReceivers();
    if (signalReceivers.Find(wrapper->signal_) == signalReceivers.End())
    {
        SignalReceiver_Camera_ParentEntityAboutToBeDetached* receiver = new SignalReceiver_Camera_ParentEntityAboutToBeDetached();
        receiver->ctx_ = ctx;
        receiver->key_ = wrapper->signal_;
        wrapper->signal_->Connect(receiver, &SignalReceiver_Camera_ParentEntityAboutToBeDetached::OnSignal);
        signalReceivers[wrapper->signal_] = receiver;
    }
    CallConnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Camera_ParentEntityAboutToBeDetached_Disconnect(duk_context* ctx)
{
    SignalWrapper_Camera_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Camera_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Camera_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    CallDisconnectSignal(ctx, wrapper->signal_);
    return 0;
}

static duk_ret_t SignalWrapper_Camera_ParentEntityAboutToBeDetached_Emit(duk_context* ctx)
{
    SignalWrapper_Camera_ParentEntityAboutToBeDetached* wrapper = GetThisValueObject<SignalWrapper_Camera_ParentEntityAboutToBeDetached>(ctx, SignalWrapper_Camera_ParentEntityAboutToBeDetached_ID);
    if (!wrapper->owner_) return 0;
    wrapper->signal_->Emit();
    return 0;
}

static duk_ret_t Camera_Get_ParentEntityAboutToBeDetached(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    SignalWrapper_Camera_ParentEntityAboutToBeDetached* wrapper = new SignalWrapper_Camera_ParentEntityAboutToBeDetached(thisObj, &thisObj->ParentEntityAboutToBeDetached);
    PushValueObject(ctx, wrapper, SignalWrapper_Camera_ParentEntityAboutToBeDetached_ID, SignalWrapper_Camera_ParentEntityAboutToBeDetached_Finalizer, false);
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Connect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntityAboutToBeDetached_Connect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "connect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "Disconnect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntityAboutToBeDetached_Disconnect, DUK_VARARGS);
    duk_put_prop_string(ctx, -2, "disconnect");
    duk_push_c_function(ctx, SignalWrapper_Camera_ParentEntityAboutToBeDetached_Emit, 0);
    duk_put_prop_string(ctx, -2, "Emit");
    return 1;
}

static duk_ret_t Camera_SetActive(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    thisObj->SetActive();
    return 0;
}

static duk_ret_t Camera_IsActive(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool ret = thisObj->IsActive();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Camera_AspectRatio(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    float ret = thisObj->AspectRatio();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Camera_SetAspectRatio_float(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    float ratio = (float)duk_require_number(ctx, 0);
    thisObj->SetAspectRatio(ratio);
    return 0;
}

static duk_ret_t Camera_IsEntityVisible_Entity(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    bool ret = thisObj->IsEntityVisible(entity);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Camera_VisibleEntities(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    EntityVector ret = thisObj->VisibleEntities();
    PushWeakObjectVector(ctx, ret);
    return 1;
}

static duk_ret_t Camera_ViewportPointToRay_float_float(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    float x = (float)duk_require_number(ctx, 0);
    float y = (float)duk_require_number(ctx, 1);
    Ray ret = thisObj->ViewportPointToRay(x, y);
    PushValueObjectCopy<Ray>(ctx, ret, Ray_ID, Ray_Finalizer);
    return 1;
}

static duk_ret_t Camera_ScreenPointToRay_uint_uint(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    uint x = (uint)duk_require_number(ctx, 0);
    uint y = (uint)duk_require_number(ctx, 1);
    Ray ret = thisObj->ScreenPointToRay(x, y);
    PushValueObjectCopy<Ray>(ctx, ret, Ray_ID, Ray_Finalizer);
    return 1;
}

static duk_ret_t Camera_ScreenPointToRay_Point(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    Point& point = *GetCheckedValueObject<Point>(ctx, 0, Point_ID);
    Ray ret = thisObj->ScreenPointToRay(point);
    PushValueObjectCopy<Ray>(ctx, ret, Ray_ID, Ray_Finalizer);
    return 1;
}

static duk_ret_t Camera_ViewMatrix(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    float4x4 ret = thisObj->ViewMatrix();
    PushValueObjectCopy<float4x4>(ctx, ret, float4x4_ID, float4x4_Finalizer);
    return 1;
}

static duk_ret_t Camera_ProjectionMatrix(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    float4x4 ret = thisObj->ProjectionMatrix();
    PushValueObjectCopy<float4x4>(ctx, ret, float4x4_ID, float4x4_Finalizer);
    return 1;
}

static duk_ret_t Camera_TypeName(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    const String & ret = thisObj->TypeName();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t Camera_TypeId(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    u32 ret = thisObj->TypeId();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Camera_Name(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    const String & ret = thisObj->Name();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t Camera_SetName_String(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    String name = duk_require_string(ctx, 0);
    thisObj->SetName(name);
    return 0;
}

static duk_ret_t Camera_SetParentEntity_Entity(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    Entity* entity = GetWeakObject<Entity>(ctx, 0);
    thisObj->SetParentEntity(entity);
    return 0;
}

static duk_ret_t Camera_SetReplicated_bool(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetReplicated(enable);
    return 0;
}

static duk_ret_t Camera_SetAttribute_String_Variant_AttributeChange__Type(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    String id = duk_require_string(ctx, 0);
    Variant value = GetVariant(ctx, 1);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 2);
    thisObj->SetAttribute(id, value, change);
    return 0;
}

static duk_ret_t Camera_GetAttribute_String(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    String id = duk_require_string(ctx, 0);
    Variant ret = thisObj->GetAttribute(id);
    PushVariant(ctx, ret);
    return 1;
}

static duk_ret_t Camera_IsReplicated(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool ret = thisObj->IsReplicated();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Camera_IsLocal(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool ret = thisObj->IsLocal();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Camera_IsUnacked(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool ret = thisObj->IsUnacked();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Camera_SetUpdateMode_AttributeChange__Type(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    AttributeChange::Type defaultmode = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->SetUpdateMode(defaultmode);
    return 0;
}

static duk_ret_t Camera_UpdateMode(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    AttributeChange::Type ret = thisObj->UpdateMode();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Camera_Id(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    component_id_t ret = thisObj->Id();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Camera_SupportsDynamicAttributes(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool ret = thisObj->SupportsDynamicAttributes();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Camera_NumAttributes(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    int ret = thisObj->NumAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Camera_NumStaticAttributes(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    int ret = thisObj->NumStaticAttributes();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t Camera_EmitAttributeChanged_String_AttributeChange__Type(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    String attributeName = duk_require_string(ctx, 0);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 1);
    thisObj->EmitAttributeChanged(attributeName, change);
    return 0;
}

static duk_ret_t Camera_ComponentChanged_AttributeChange__Type(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    AttributeChange::Type change = (AttributeChange::Type)(int)duk_require_number(ctx, 0);
    thisObj->ComponentChanged(change);
    return 0;
}

static duk_ret_t Camera_ParentEntity(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    Entity * ret = thisObj->ParentEntity();
    PushWeakObject(ctx, ret);
    return 1;
}

static duk_ret_t Camera_SetTemporary_bool(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool enable = duk_require_boolean(ctx, 0);
    thisObj->SetTemporary(enable);
    return 0;
}

static duk_ret_t Camera_IsTemporary(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool ret = thisObj->IsTemporary();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Camera_ViewEnabled(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool ret = thisObj->ViewEnabled();
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Camera_AttributeNames(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    StringVector ret = thisObj->AttributeNames();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Camera_AttributeIds(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    StringVector ret = thisObj->AttributeIds();
    PushStringVector(ctx, ret);
    return 1;
}

static duk_ret_t Camera_ShouldBeSerialized_bool_bool(duk_context* ctx)
{
    Camera* thisObj = GetThisWeakObject<Camera>(ctx);
    bool serializeTemporary = duk_require_boolean(ctx, 0);
    bool serializeLocal = duk_require_boolean(ctx, 1);
    bool ret = thisObj->ShouldBeSerialized(serializeTemporary, serializeLocal);
    duk_push_boolean(ctx, ret);
    return 1;
}

static duk_ret_t Camera_ScreenPointToRay_Selector(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    if (numArgs == 2 && duk_is_number(ctx, 0) && duk_is_number(ctx, 1))
        return Camera_ScreenPointToRay_uint_uint(ctx);
    if (numArgs == 1 && GetValueObject<Point>(ctx, 0, Point_ID))
        return Camera_ScreenPointToRay_Point(ctx);
    duk_error(ctx, DUK_ERR_ERROR, "Could not select function overload");
}

static duk_ret_t Camera_EnsureTypeNameWithoutPrefix_Static_String(duk_context* ctx)
{
    String tn = duk_require_string(ctx, 0);
    String ret = Camera::EnsureTypeNameWithoutPrefix(tn);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static const duk_function_list_entry Camera_Functions[] = {
    {"SetActive", Camera_SetActive, 0}
    ,{"IsActive", Camera_IsActive, 0}
    ,{"AspectRatio", Camera_AspectRatio, 0}
    ,{"SetAspectRatio", Camera_SetAspectRatio_float, 1}
    ,{"IsEntityVisible", Camera_IsEntityVisible_Entity, 1}
    ,{"VisibleEntities", Camera_VisibleEntities, 0}
    ,{"ViewportPointToRay", Camera_ViewportPointToRay_float_float, 2}
    ,{"ScreenPointToRay", Camera_ScreenPointToRay_Selector, DUK_VARARGS}
    ,{"ViewMatrix", Camera_ViewMatrix, 0}
    ,{"ProjectionMatrix", Camera_ProjectionMatrix, 0}
    ,{"TypeName", Camera_TypeName, 0}
    ,{"TypeId", Camera_TypeId, 0}
    ,{"Name", Camera_Name, 0}
    ,{"SetName", Camera_SetName_String, 1}
    ,{"SetParentEntity", Camera_SetParentEntity_Entity, 1}
    ,{"SetReplicated", Camera_SetReplicated_bool, 1}
    ,{"SetAttribute", Camera_SetAttribute_String_Variant_AttributeChange__Type, 3}
    ,{"GetAttribute", Camera_GetAttribute_String, 1}
    ,{"IsReplicated", Camera_IsReplicated, 0}
    ,{"IsLocal", Camera_IsLocal, 0}
    ,{"IsUnacked", Camera_IsUnacked, 0}
    ,{"SetUpdateMode", Camera_SetUpdateMode_AttributeChange__Type, 1}
    ,{"UpdateMode", Camera_UpdateMode, 0}
    ,{"Id", Camera_Id, 0}
    ,{"SupportsDynamicAttributes", Camera_SupportsDynamicAttributes, 0}
    ,{"NumAttributes", Camera_NumAttributes, 0}
    ,{"NumStaticAttributes", Camera_NumStaticAttributes, 0}
    ,{"EmitAttributeChanged", Camera_EmitAttributeChanged_String_AttributeChange__Type, 2}
    ,{"ComponentChanged", Camera_ComponentChanged_AttributeChange__Type, 1}
    ,{"ParentEntity", Camera_ParentEntity, 0}
    ,{"SetTemporary", Camera_SetTemporary_bool, 1}
    ,{"IsTemporary", Camera_IsTemporary, 0}
    ,{"ViewEnabled", Camera_ViewEnabled, 0}
    ,{"AttributeNames", Camera_AttributeNames, 0}
    ,{"AttributeIds", Camera_AttributeIds, 0}
    ,{"ShouldBeSerialized", Camera_ShouldBeSerialized_bool_bool, 2}
    ,{nullptr, nullptr, 0}
};

static const duk_function_list_entry Camera_StaticFunctions[] = {
    {"EnsureTypeNameWithoutPrefix", Camera_EnsureTypeNameWithoutPrefix_Static_String, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_Camera(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, Camera_StaticFunctions);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, Camera_Functions);
    DefineProperty(ctx, "ComponentNameChanged", Camera_Get_ComponentNameChanged, nullptr);
    DefineProperty(ctx, "ParentEntitySet", Camera_Get_ParentEntitySet, nullptr);
    DefineProperty(ctx, "ParentEntityAboutToBeDetached", Camera_Get_ParentEntityAboutToBeDetached, nullptr);
    DefineProperty(ctx, "typeName", Camera_TypeName, nullptr);
    DefineProperty(ctx, "typeId", Camera_TypeId, nullptr);
    DefineProperty(ctx, "name", Camera_Name, Camera_SetName_String);
    DefineProperty(ctx, "replicated", Camera_IsReplicated, Camera_SetReplicated_bool);
    DefineProperty(ctx, "local", Camera_IsLocal, nullptr);
    DefineProperty(ctx, "unacked", Camera_IsUnacked, nullptr);
    DefineProperty(ctx, "updateMode", Camera_UpdateMode, Camera_SetUpdateMode_AttributeChange__Type);
    DefineProperty(ctx, "id", Camera_Id, nullptr);
    DefineProperty(ctx, "temporary", Camera_IsTemporary, Camera_SetTemporary_bool);
    DefineProperty(ctx, "viewEnabled", Camera_ViewEnabled, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, Camera_ID);
}

}
