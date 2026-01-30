#include "Facebook_Unity_FBGamingServices.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::FBGamingServices::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "FBGamingServices");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::FBGamingServices::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::OpenFriendFinderDialog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGamingServicesFriendFinderResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OpenFriendFinderDialog", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IGamingServicesFriendFinderResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::UploadImageToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* imageUri, bool shouldLaunchMediaDialog, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadImageToMediaLibrary", std::vector<std::string> { "System.String", "System.Uri", "System.Boolean", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IMediaUploadResult>" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)caption;
	params[1] = (intptr_t)imageUri;
	params[2] = (intptr_t)&shouldLaunchMediaDialog;
	params[3] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::UploadVideoToMediaLibrary(mscorlib::System::String* caption, System::System::Uri* videoUri, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IMediaUploadResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadVideoToMediaLibrary", std::vector<std::string> { "System.String", "System.Uri", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IMediaUploadResult>" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)caption;
	params[1] = (intptr_t)videoUri;
	params[2] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::OnIAPReady(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IIAPReadyResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnIAPReady", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IIAPReadyResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::GetCatalog(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::ICatalogResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCatalog", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.ICatalogResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::GetPurchases(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPurchasesResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPurchases", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPurchasesResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::Purchase(mscorlib::System::String* productID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPurchaseResult>* callback, mscorlib::System::String* developerPayload)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Purchase", std::vector<std::string> { "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPurchaseResult>", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)productID;
	params[1] = (intptr_t)callback;
	params[2] = (intptr_t)developerPayload;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::ConsumePurchase(mscorlib::System::String* purchaseToken, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IConsumePurchaseResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConsumePurchase", std::vector<std::string> { "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IConsumePurchaseResult>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)purchaseToken;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::InitCloudGame(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInitCloudGameResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InitCloudGame", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IInitCloudGameResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::ScheduleAppToUserNotification(mscorlib::System::String* title, mscorlib::System::String* body, System::System::Uri* media, int32_t timeInterval, mscorlib::System::String* payload, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IScheduleAppToUserNotificationResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ScheduleAppToUserNotification", std::vector<std::string> { "System.String", "System.String", "System.Uri", "System.Int32", "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IScheduleAppToUserNotificationResult>" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)title;
	params[1] = (intptr_t)body;
	params[2] = (intptr_t)media;
	params[3] = (intptr_t)&timeInterval;
	params[4] = (intptr_t)payload;
	params[5] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::LoadInterstitialAd(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInterstitialAdResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadInterstitialAd", std::vector<std::string> { "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IInterstitialAdResult>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)placementID;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::ShowInterstitialAd(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IInterstitialAdResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShowInterstitialAd", std::vector<std::string> { "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IInterstitialAdResult>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)placementID;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::LoadRewardedVideo(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IRewardedVideoResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadRewardedVideo", std::vector<std::string> { "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IRewardedVideoResult>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)placementID;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::ShowRewardedVideo(mscorlib::System::String* placementID, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IRewardedVideoResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShowRewardedVideo", std::vector<std::string> { "System.String", "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IRewardedVideoResult>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)placementID;
	params[1] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::GetPayload(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IPayloadResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPayload", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IPayloadResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Facebook_Unity::Facebook::Unity::Mobile::IMobileFacebook* Facebook_Unity::Facebook::Unity::FBGamingServices::get_MobileFacebookImpl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MobileFacebookImpl");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::Mobile::IMobileFacebook*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FBGamingServices::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
