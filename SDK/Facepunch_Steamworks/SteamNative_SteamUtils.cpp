#include "SteamNative_SteamUtils.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::SteamUtils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "SteamUtils");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::SteamUtils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::SteamNative::SteamUtils::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Facepunch.Steamworks.BaseSteamworks", "System.IntPtr" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)steamworks;
	params[1] = (intptr_t)&pointer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::SteamUtils::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Facepunch_Steamworks::SteamNative::SteamUtils::GetAPICallResult(Facepunch_Steamworks::SteamNative::SteamAPICall_t hSteamAPICall, intptr_t pCallback, int32_t cubCallback, int32_t iCallbackExpected, bool& pbFailed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAPICallResult", std::vector<std::string> { "SteamNative.SteamAPICall_t", "System.IntPtr", "System.Int32", "System.Int32", "System.Boolean&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hSteamAPICall;
	params[1] = (intptr_t)&pCallback;
	params[2] = (intptr_t)&cubCallback;
	params[3] = (intptr_t)&iCallbackExpected;
	params[4] = (intptr_t)&pbFailed;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::SteamUtils::GetImageRGBA(int32_t iImage, intptr_t pubDest, int32_t nDestBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetImageRGBA", std::vector<std::string> { "System.Int32", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&iImage;
	params[1] = (intptr_t)&pubDest;
	params[2] = (intptr_t)&nDestBufferSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::SteamUtils::GetImageSize(int32_t iImage, uint32_t& pnWidth, uint32_t& pnHeight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetImageSize", std::vector<std::string> { "System.Int32", "System.UInt32&", "System.UInt32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&iImage;
	params[1] = (intptr_t)&pnWidth;
	params[2] = (intptr_t)&pnHeight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::SteamUtils::IsAPICallCompleted(Facepunch_Steamworks::SteamNative::SteamAPICall_t hSteamAPICall, bool& pbFailed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAPICallCompleted", std::vector<std::string> { "SteamNative.SteamAPICall_t", "System.Boolean&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hSteamAPICall;
	params[1] = (intptr_t)&pbFailed;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
