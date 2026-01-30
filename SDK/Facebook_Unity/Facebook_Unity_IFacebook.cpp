#include "Facebook_Unity_IFacebook.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::IFacebook::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "IFacebook");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::IFacebook::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Facebook_Unity::Facebook::Unity::IFacebook::get_LoggedIn()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LoggedIn");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Facebook_Unity::Facebook::Unity::IFacebook::get_LimitEventUsage()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_LimitEventUsage");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Facebook_Unity::Facebook::Unity::IFacebook::set_LimitEventUsage(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_LimitEventUsage", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::IFacebook::get_SDKUserAgent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SDKUserAgent");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Facebook_Unity::Facebook::Unity::IFacebook::get_Initialized()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Initialized");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Facebook_Unity::Facebook::Unity::IFacebook::LogInWithPublishPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogInWithPublishPermissions", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)permissions;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::LogInWithReadPermissions(mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* permissions, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ILoginResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogInWithReadPermissions", std::vector<std::string> { "System.Collections.Generic.IEnumerable`1<System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ILoginResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)permissions;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::LogOut()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogOut");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::AppRequest(mscorlib::System::String* message, mscorlib::System::Nullable_1<Facebook_Unity::Facebook::Unity::OGActionType> actionType, mscorlib::System::String* objectId, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* to, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Object>* filters, mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::String>* excludeIds, mscorlib::System::Nullable_1<mscorlib::System::Int32> maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppRequestResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppRequest", std::vector<std::string> { "System.String", "System.Nullable`1<Facebook.Unity.OGActionType>", "System.String", "System.Collections.Generic.IEnumerable`1<System.String>", "System.Collections.Generic.IEnumerable`1<System.Object>", "System.Collections.Generic.IEnumerable`1<System.String>", "System.Nullable`1<System.Int32>", "System.String", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppRequestResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)message;
	params[1] = (intptr_t)&actionType;
	params[2] = (intptr_t)objectId;
	params[3] = (intptr_t)to;
	params[4] = (intptr_t)filters;
	params[5] = (intptr_t)excludeIds;
	params[6] = (intptr_t)&maxRecipients;
	params[7] = (intptr_t)data;
	params[8] = (intptr_t)title;
	params[9] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::ShareLink(System::System::Uri* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, System::System::Uri* photoURL, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShareLink", std::vector<std::string> { "System.Uri", "System.String", "System.String", "System.Uri", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)contentURL;
	params[1] = (intptr_t)contentTitle;
	params[2] = (intptr_t)contentDescription;
	params[3] = (intptr_t)photoURL;
	params[4] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::FeedShare(mscorlib::System::String* toId, System::System::Uri* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, System::System::Uri* picture, mscorlib::System::String* mediaSource, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IShareResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FeedShare", std::vector<std::string> { "System.String", "System.Uri", "System.String", "System.String", "System.String", "System.Uri", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IShareResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
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
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::API(mscorlib::System::String* query, Facebook_Unity::Facebook::Unity::HttpMethod method, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "API", std::vector<std::string> { "System.String", "Facebook.Unity.HttpMethod", "System.Collections.Generic.IDictionary`2<System.String,System.String>", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)query;
	params[1] = (intptr_t)&method;
	params[2] = (intptr_t)formData;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::API(mscorlib::System::String* query, Facebook_Unity::Facebook::Unity::HttpMethod method, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "API", std::vector<std::string> { "System.String", "Facebook.Unity.HttpMethod", "UnityEngine.WWWForm", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGraphResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)query;
	params[1] = (intptr_t)&method;
	params[2] = (intptr_t)formData;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::ActivateApp(mscorlib::System::String* appId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ActivateApp", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)appId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::GetAppLink(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAppLink", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::AppEventsLogEvent(mscorlib::System::String* logEvent, mscorlib::System::Nullable_1<mscorlib::System::Single> valueToSum, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppEventsLogEvent", std::vector<std::string> { "System.String", "System.Nullable`1<System.Single>", "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)logEvent;
	params[1] = (intptr_t)&valueToSum;
	params[2] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::IFacebook::AppEventsLogPurchase(float logPurchase, mscorlib::System::String* currency, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* parameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppEventsLogPurchase", std::vector<std::string> { "System.Single", "System.String", "System.Collections.Generic.Dictionary`2<System.String,System.Object>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&logPurchase;
	params[1] = (intptr_t)currency;
	params[2] = (intptr_t)parameters;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
