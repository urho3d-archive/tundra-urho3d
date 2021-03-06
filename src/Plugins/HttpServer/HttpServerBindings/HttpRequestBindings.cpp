// For conditions of distribution and use, see copyright notice in LICENSE
// This file has been autogenerated with BindingsGenerator

#include "StableHeaders.h"
#include "CoreTypes.h"
#include "JavaScriptInstance.h"
#include "LoggingFunctions.h"
#include "HttpRequest.h"

#ifdef _MSC_VER
#pragma warning(disable: 4800)
#endif



using namespace Tundra;
using namespace std;

namespace JSBindings
{



static const char* HttpRequest_ID = "HttpRequest";

static duk_ret_t HttpRequest_Path(duk_context* ctx)
{
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    String ret = thisObj->Path();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t HttpRequest_Host(duk_context* ctx)
{
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    String ret = thisObj->Host();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t HttpRequest_Port(duk_context* ctx)
{
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    unsigned short ret = thisObj->Port();
    duk_push_number(ctx, ret);
    return 1;
}

static duk_ret_t HttpRequest_Method(duk_context* ctx)
{
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    String ret = thisObj->Method();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t HttpRequest_RequestHeader_String(duk_context* ctx)
{
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    String header = duk_require_string(ctx, 0);
    String ret = thisObj->RequestHeader(header);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t HttpRequest_ResponseHeader_String(duk_context* ctx)
{
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    String header = duk_require_string(ctx, 0);
    String ret = thisObj->ResponseHeader(header);
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t HttpRequest_Body(duk_context* ctx)
{
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    String ret = thisObj->Body();
    duk_push_string(ctx, ret.CString());
    return 1;
}

static duk_ret_t HttpRequest_SetResponseHeader_String_String(duk_context* ctx)
{
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    String header = duk_require_string(ctx, 0);
    String content = duk_require_string(ctx, 1);
    thisObj->SetResponseHeader(header, content);
    return 0;
}

static duk_ret_t HttpRequest_SetBody_String_String(duk_context* ctx)
{
    int numArgs = duk_get_top(ctx);
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    String body = duk_require_string(ctx, 0);
    String contentType = numArgs > 1 ? duk_require_string(ctx, 1) : String();
    thisObj->SetBody(body, contentType);
    return 0;
}

static duk_ret_t HttpRequest_SetStatusCode_int(duk_context* ctx)
{
    HttpRequest* thisObj = GetThisWeakObject<HttpRequest>(ctx);
    int code = (int)duk_require_number(ctx, 0);
    thisObj->SetStatusCode(code);
    return 0;
}

static const duk_function_list_entry HttpRequest_Functions[] = {
    {"Path", HttpRequest_Path, 0}
    ,{"Host", HttpRequest_Host, 0}
    ,{"Port", HttpRequest_Port, 0}
    ,{"Method", HttpRequest_Method, 0}
    ,{"RequestHeader", HttpRequest_RequestHeader_String, 1}
    ,{"ResponseHeader", HttpRequest_ResponseHeader_String, 1}
    ,{"Body", HttpRequest_Body, 0}
    ,{"SetResponseHeader", HttpRequest_SetResponseHeader_String_String, 2}
    ,{"SetBody", HttpRequest_SetBody_String_String, DUK_VARARGS}
    ,{"SetStatusCode", HttpRequest_SetStatusCode_int, 1}
    ,{nullptr, nullptr, 0}
};

void Expose_HttpRequest(duk_context* ctx)
{
    duk_push_object(ctx);
    duk_push_object(ctx);
    duk_put_function_list(ctx, -1, HttpRequest_Functions);
    DefineProperty(ctx, "path", HttpRequest_Path, nullptr);
    DefineProperty(ctx, "host", HttpRequest_Host, nullptr);
    DefineProperty(ctx, "port", HttpRequest_Port, nullptr);
    DefineProperty(ctx, "method", HttpRequest_Method, nullptr);
    DefineProperty(ctx, "body", HttpRequest_Body, nullptr);
    duk_put_prop_string(ctx, -2, "prototype");
    duk_put_global_string(ctx, HttpRequest_ID);
}

}
