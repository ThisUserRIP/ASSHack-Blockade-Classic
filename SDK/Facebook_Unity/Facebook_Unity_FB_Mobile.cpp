#include "Facebook_Unity_FB_Mobile.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::FB_Mobile::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facebook_Unity::Facebook::Unity::FB::GetIl2CppClass(), "Mobile");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::FB_Mobile::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facebook_Unity::Facebook::Unity::FB_Mobile::set_ShareDialogMode(Facebook_Unity::Facebook::Unity::ShareDialogMode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ShareDialogMode", std::vector<std::string> { "Facebook.Unity.ShareDialogMode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Facebook_Unity::Facebook::Unity::Mobile::IMobileFacebook* Facebook_Unity::Facebook::Unity::FB_Mobile::get_MobileFacebookImpl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MobileFacebookImpl");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Facebook_Unity::Facebook::Unity::Mobile::IMobileFacebook*)returnValue;
}
void Facebook_Unity::Facebook::Unity::FB_Mobile::FetchDeferredAppLinkData(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAppLinkResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FetchDeferredAppLinkData", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAppLinkResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facebook_Unity::Facebook::Unity::FB_Mobile::RefreshCurrentAccessToken(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IAccessTokenRefreshResult>* callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RefreshCurrentAccessToken", std::vector<std::string> { "Facebook.Unity.FacebookDelegate`1<Facebook.Unity.IAccessTokenRefreshResult>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facebook_Unity::Facebook::Unity::FB_Mobile::IsImplicitPurchaseLoggingEnabled()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsImplicitPurchaseLoggingEnabled");
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
