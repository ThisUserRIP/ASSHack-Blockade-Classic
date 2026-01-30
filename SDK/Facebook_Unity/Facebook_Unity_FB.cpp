#include "Facebook_Unity_FB.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::FB::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "FB");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::FB::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::FB::get_AppId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_AppId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FB::set_AppId(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_AppId", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::FB::get_ClientToken()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ClientToken");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FB::set_ClientToken(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ClientToken", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::FB::get_GraphApiVersion()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GraphApiVersion");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FB::set_GraphApiVersion(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_GraphApiVersion", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facebook_Unity::Facebook::Unity::FB::get_IsLoggedIn()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsLoggedIn");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Facebook_Unity::Facebook::Unity::FB::get_IsInitialized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsInitialized");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Facebook_Unity::Facebook::Unity::FB::get_LimitAppEventUsage()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LimitAppEventUsage");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Facebook_Unity::Facebook::Unity::FB::set_LimitAppEventUsage(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LimitAppEventUsage", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Facebook_Unity::Facebook::Unity::IFacebook* Facebook_Unity::Facebook::Unity::FB::get_FacebookImpl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FacebookImpl");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::IFacebook*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FB::set_FacebookImpl(Facebook_Unity::Facebook::Unity::IFacebook* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_FacebookImpl", std::vector<std::string> { "Facebook.Unity.IFacebook" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::FB::get_FacebookDomain()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_FacebookDomain");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FB::set_FacebookDomain(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_FacebookDomain", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Facebook_Unity::Facebook::Unity::FB_OnDLLLoaded* Facebook_Unity::Facebook::Unity::FB::get_OnDLLLoadedDelegate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_OnDLLLoadedDelegate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::FB_OnDLLLoaded*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FB::set_OnDLLLoadedDelegate(Facebook_Unity::Facebook::Unity::FB_OnDLLLoaded* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_OnDLLLoadedDelegate", std::vector<std::string> { "Facebook.Unity.FB/OnDLLLoaded" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::Init(Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete, Facebook_Unity::Facebook::Unity::HideUnityDelegate* onHideUnity, mscorlib::System::String* authResponse)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "Facebook.Unity.InitDelegate", "Facebook.Unity.HideUnityDelegate", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)onInitComplete;
	params[1] = (intptr_t)onHideUnity;
	params[2] = (intptr_t)authResponse;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::Init(mscorlib::System::String* appId, mscorlib::System::String* clientToken, bool cookie, bool logging, bool status, bool xfbml, bool frictionlessRequests, mscorlib::System::String* authResponse, mscorlib::System::String* javascriptSDKLocale, Facebook_Unity::Facebook::Unity::HideUnityDelegate* onHideUnity, Facebook_Unity::Facebook::Unity::InitDelegate* onInitComplete)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.String", "System.String", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.Boolean", "System.String", "System.String", "Facebook.Unity.HideUnityDelegate", "Facebook.Unity.InitDelegate" });
	intptr_t* params = new intptr_t[11];
	params[0] = (intptr_t)appId;
	params[1] = (intptr_t)clientToken;
	params[2] = (intptr_t)&cookie;
	params[3] = (intptr_t)&logging;
	params[4] = (intptr_t)&status;
	params[5] = (intptr_t)&xfbml;
	params[6] = (intptr_t)&frictionlessRequests;
	params[7] = (intptr_t)authResponse;
	params[8] = (intptr_t)javascriptSDKLocale;
	params[9] = (intptr_t)onHideUnity;
	params[10] = (intptr_t)onInitComplete;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::LogInWithPublishPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogInWithPublishPermissions", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)permissions;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::LogInWithReadPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogInWithReadPermissions", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)permissions;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::LogOut()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogOut");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::AppRequest(mscorlib::System::String* message, Facebook_Unity::Facebook::Unity::OGActionType actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppRequest", std::vector<std::string> { "System.String", "Facebook.Unity.OGActionType", "System.String", "System.Collections.Generic.IEnumerable`1<System.String>", "System.String", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)&actionType;
	params[2] = (intptr_t)objectId;
	params[3] = (intptr_t)to;
	params[4] = (intptr_t)data;
	params[5] = (intptr_t)title;
	params[6] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::AppRequest(mscorlib::System::String* message, Facebook_Unity::Facebook::Unity::OGActionType actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppRequest", std::vector<std::string> { "System.String", "Facebook.Unity.OGActionType", "System.String", "System.Collections.Generic.IEnumerable`1<System.Object>", "System.Collections.Generic.IEnumerable`1<System.String>", "System.Nullable`1<System.Int32>", "System.String", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)&actionType;
	params[2] = (intptr_t)objectId;
	params[3] = (intptr_t)filters;
	params[4] = (intptr_t)excludeIds;
	params[5] = (intptr_t)&maxRecipients;
	params[6] = (intptr_t)data;
	params[7] = (intptr_t)title;
	params[8] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::AppRequest(mscorlib::System::String* message, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppRequest", std::vector<std::string> { "System.String", "System.Collections.Generic.IEnumerable`1<System.String>", "System.Collections.Generic.IEnumerable`1<System.Object>", "System.Collections.Generic.IEnumerable`1<System.String>", "System.Nullable`1<System.Int32>", "System.String", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)to;
	params[2] = (intptr_t)filters;
	params[3] = (intptr_t)excludeIds;
	params[4] = (intptr_t)&maxRecipients;
	params[5] = (intptr_t)data;
	params[6] = (intptr_t)title;
	params[7] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::ShareLink(System::System::Uri* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, System::System::Uri* photoURL, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShareLink", std::vector<std::string> { "System.Uri", "System.String", "System.String", "System.Uri", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)contentURL;
	params[1] = (intptr_t)contentTitle;
	params[2] = (intptr_t)contentDescription;
	params[3] = (intptr_t)photoURL;
	params[4] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::FeedShare(mscorlib::System::String* toId, System::System::Uri* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, System::System::Uri* picture, mscorlib::System::String* mediaSource, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FeedShare", std::vector<std::string> { "System.String", "System.Uri", "System.String", "System.String", "System.String", "System.Uri", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)toId;
	params[1] = (intptr_t)link;
	params[2] = (intptr_t)linkName;
	params[3] = (intptr_t)linkCaption;
	params[4] = (intptr_t)linkDescription;
	params[5] = (intptr_t)picture;
	params[6] = (intptr_t)mediaSource;
	params[7] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::API(mscorlib::System::String* query, Facebook_Unity::Facebook::Unity::HttpMethod method, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "API", std::vector<std::string> { "System.String", "Facebook.Unity.HttpMethod", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>", "System.Collections.Generic.IDictionary`2<System.String,System.String>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)query;
	params[1] = (intptr_t)&method;
	params[2] = (intptr_t)callback;
	params[3] = (intptr_t)formData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::API(mscorlib::System::String* query, Facebook_Unity::Facebook::Unity::HttpMethod method, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* formData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "API", std::vector<std::string> { "System.String", "Facebook.Unity.HttpMethod", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>", "UnityEngine.WWWForm" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)query;
	params[1] = (intptr_t)&method;
	params[2] = (intptr_t)callback;
	params[3] = (intptr_t)formData;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::ActivateApp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivateApp");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::GetAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAppLink", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::ClearAppLink()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearAppLink");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::LogAppEvent(mscorlib::System::String* logEvent, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogAppEvent", std::vector<std::string> { "System.String", "System.Nullable`1<System.Single>", "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)logEvent;
	params[1] = (intptr_t)&valueToSum;
	params[2] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::LogPurchase(mscorlib::System::Decimal logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogPurchase", std::vector<std::string> { "System.Decimal", "System.String", "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&logPurchase;
	params[1] = (intptr_t)currency;
	params[2] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::LogPurchase(float logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogPurchase", std::vector<std::string> { "System.Single", "System.String", "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&logPurchase;
	params[1] = (intptr_t)currency;
	params[2] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::LogVersion()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogVersion");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
