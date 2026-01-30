#include "Facebook_Unity_Constants.h"

IL2CPP::Il2CppClass* Facebook_Unity::Facebook::Unity::Constants::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facebook.Unity.dll", "Facebook.Unity", "Constants");
	return il2cppclass;
}
mscorlib::System::Type* Facebook_Unity::Facebook::Unity::Constants::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Uri* Facebook_Unity::Facebook::Unity::Constants::get_GraphUrl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GraphUrl");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::System::Uri*)returnValue;
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::Constants::get_GraphApiUserAgent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_GraphApiUserAgent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Facebook_Unity::Facebook::Unity::Constants::get_IsMobile()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsMobile");
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
bool Facebook_Unity::Facebook::Unity::Constants::get_IsEditor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsEditor");
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
bool Facebook_Unity::Facebook::Unity::Constants::get_IsWeb()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsWeb");
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
bool Facebook_Unity::Facebook::Unity::Constants::get_IsGameroom()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsGameroom");
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
mscorlib::System::String* Facebook_Unity::Facebook::Unity::Constants::get_UnitySDKUserAgentSuffixLegacy()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UnitySDKUserAgentSuffixLegacy");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* Facebook_Unity::Facebook::Unity::Constants::get_UnitySDKUserAgent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UnitySDKUserAgent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
bool Facebook_Unity::Facebook::Unity::Constants::get_DebugMode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DebugMode");
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
Facebook_Unity::Facebook::Unity::FacebookUnityPlatform Facebook_Unity::Facebook::Unity::Constants::get_CurrentPlatform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CurrentPlatform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facebook_Unity::Facebook::Unity::FacebookUnityPlatform ret;
		std::memset(&ret, 0, sizeof(Facebook_Unity::Facebook::Unity::FacebookUnityPlatform));
		return ret;
	}
	return static_cast<Facebook_Unity::Facebook::Unity::FacebookUnityPlatform>(*(Facebook_Unity::Facebook::Unity::FacebookUnityPlatform*)il2cpp_object_unbox(returnValue));
}
Facebook_Unity::Facebook::Unity::FacebookUnityPlatform Facebook_Unity::Facebook::Unity::Constants::GetCurrentPlatform()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCurrentPlatform");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facebook_Unity::Facebook::Unity::FacebookUnityPlatform ret;
		std::memset(&ret, 0, sizeof(Facebook_Unity::Facebook::Unity::FacebookUnityPlatform));
		return ret;
	}
	return static_cast<Facebook_Unity::Facebook::Unity::FacebookUnityPlatform>(*(Facebook_Unity::Facebook::Unity::FacebookUnityPlatform*)il2cpp_object_unbox(returnValue));
}
