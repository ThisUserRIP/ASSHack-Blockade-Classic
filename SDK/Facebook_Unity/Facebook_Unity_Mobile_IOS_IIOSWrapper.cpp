#include "Facebook_Unity_Mobile_IOS_IIOSWrapper.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity.Mobile.IOS", "IIOSWrapper");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::Init(mscorlib::System::String* appId, bool frictionlessRequests, mscorlib::System::String* urlSuffix, mscorlib::System::String* unityUserAgentSuffix)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Init", std::vector<std::string> { "System.String", "System.Boolean", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)appId;
	params[1] = (intptr_t)&frictionlessRequests;
	params[2] = (intptr_t)urlSuffix;
	params[3] = (intptr_t)unityUserAgentSuffix;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::LogInWithReadPermissions(int32_t requestId, mscorlib::System::String* scope)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogInWithReadPermissions", std::vector<std::string> { "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&requestId;
	params[1] = (intptr_t)scope;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::LogInWithPublishPermissions(int32_t requestId, mscorlib::System::String* scope)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogInWithPublishPermissions", std::vector<std::string> { "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&requestId;
	params[1] = (intptr_t)scope;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::LogOut()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogOut");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::SetShareDialogMode(int32_t mode)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetShareDialogMode", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&mode;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::ShareLink(int32_t requestId, mscorlib::System::String* contentURL, mscorlib::System::String* contentTitle, mscorlib::System::String* contentDescription, mscorlib::System::String* photoURL)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShareLink", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&requestId;
	params[1] = (intptr_t)contentURL;
	params[2] = (intptr_t)contentTitle;
	params[3] = (intptr_t)contentDescription;
	params[4] = (intptr_t)photoURL;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::FeedShare(int32_t requestId, mscorlib::System::String* toId, mscorlib::System::String* link, mscorlib::System::String* linkName, mscorlib::System::String* linkCaption, mscorlib::System::String* linkDescription, mscorlib::System::String* picture, mscorlib::System::String* mediaSource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FeedShare", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&requestId;
	params[1] = (intptr_t)toId;
	params[2] = (intptr_t)link;
	params[3] = (intptr_t)linkName;
	params[4] = (intptr_t)linkCaption;
	params[5] = (intptr_t)linkDescription;
	params[6] = (intptr_t)picture;
	params[7] = (intptr_t)mediaSource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::AppRequest(int32_t requestId, mscorlib::System::String* message, mscorlib::System::String* actionType, mscorlib::System::String* objectId, IL2CPP::Array<mscorlib::System::String*>* to, int32_t toLength, mscorlib::System::String* filters, IL2CPP::Array<mscorlib::System::String*>* excludeIds, int32_t excludeIdsLength, bool hasMaxRecipients, int32_t maxRecipients, mscorlib::System::String* data, mscorlib::System::String* title)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AppRequest", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.String", "System.String[]", "System.Int32", "System.String", "System.String[]", "System.Int32", "System.Boolean", "System.Int32", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[13];
	params[0] = (intptr_t)&requestId;
	params[1] = (intptr_t)message;
	params[2] = (intptr_t)actionType;
	params[3] = (intptr_t)objectId;
	params[4] = (intptr_t)to;
	params[5] = (intptr_t)&toLength;
	params[6] = (intptr_t)filters;
	params[7] = (intptr_t)excludeIds;
	params[8] = (intptr_t)&excludeIdsLength;
	params[9] = (intptr_t)&hasMaxRecipients;
	params[10] = (intptr_t)&maxRecipients;
	params[11] = (intptr_t)data;
	params[12] = (intptr_t)title;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::FBAppEventsActivateApp()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FBAppEventsActivateApp");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::LogAppEvent(mscorlib::System::String* logEvent, double valueToSum, int32_t numParams, IL2CPP::Array<mscorlib::System::String*>* paramKeys, IL2CPP::Array<mscorlib::System::String*>* paramVals)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogAppEvent", std::vector<std::string> { "System.String", "System.Double", "System.Int32", "System.String[]", "System.String[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)logEvent;
	params[1] = (intptr_t)&valueToSum;
	params[2] = (intptr_t)&numParams;
	params[3] = (intptr_t)paramKeys;
	params[4] = (intptr_t)paramVals;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::LogPurchaseAppEvent(double logPurchase, mscorlib::System::String* currency, int32_t numParams, IL2CPP::Array<mscorlib::System::String*>* paramKeys, IL2CPP::Array<mscorlib::System::String*>* paramVals)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LogPurchaseAppEvent", std::vector<std::string> { "System.Double", "System.String", "System.Int32", "System.String[]", "System.String[]" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&logPurchase;
	params[1] = (intptr_t)currency;
	params[2] = (intptr_t)&numParams;
	params[3] = (intptr_t)paramKeys;
	params[4] = (intptr_t)paramVals;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::FBAppEventsSetLimitEventUsage(bool limitEventUsage)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FBAppEventsSetLimitEventUsage", std::vector<std::string> { "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&limitEventUsage;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::GetAppLink(int32_t requestId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAppLink", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&requestId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::RefreshCurrentAccessToken(int32_t requestId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RefreshCurrentAccessToken", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&requestId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::FBSdkVersion()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FBSdkVersion");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::FBGetUserID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FBGetUserID");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::OpenFriendFinderDialog(int32_t requestId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OpenFriendFinderDialog", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&requestId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::UploadImageToMediaLibrary(int32_t requestId, mscorlib::System::String* caption, mscorlib::System::String* mediaUri, bool shouldLaunchMediaDialog)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadImageToMediaLibrary", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&requestId;
	params[1] = (intptr_t)caption;
	params[2] = (intptr_t)mediaUri;
	params[3] = (intptr_t)&shouldLaunchMediaDialog;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::UploadVideoToMediaLibrary(int32_t requestId, mscorlib::System::String* caption, mscorlib::System::String* videoUri)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadVideoToMediaLibrary", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&requestId;
	params[1] = (intptr_t)caption;
	params[2] = (intptr_t)videoUri;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::Mobile::IOS::IIOSWrapper::FetchDeferredAppLink(int32_t requestId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FetchDeferredAppLink", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&requestId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
