#include "SteamNative_Platform_Win64_Native.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::Platform_Win64_Native::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facepunch_Steamworks::SteamNative::Platform_Win64::GetIl2CppClass(), "Native");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::Platform_Win64_Native::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamUser(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamUser", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamGameServer(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamGameServer", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamFriends(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamFriends", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamUtils(intptr_t ISteamClient, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamUtils", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamMatchmaking(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamMatchmaking", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamMatchmakingServers(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamMatchmakingServers", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamUserStats(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamUserStats", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamGameServerStats(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamGameServerStats", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamuser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamApps(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamApps", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamNetworking(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamNetworking", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamRemoteStorage(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamRemoteStorage", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamuser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamScreenshots(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamScreenshots", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamuser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamHTTP(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamHTTP", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamuser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamUGC(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamUGC", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamAppList(intptr_t ISteamClient, int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamAppList", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamUser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamClient_GetISteamInventory(intptr_t ISteamClient, int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamClient_GetISteamInventory", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamClient;
	params[1] = (intptr_t)&hSteamuser;
	params[2] = (intptr_t)&hSteamPipe;
	params[3] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::CSteamID Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUser_GetSteamID(intptr_t ISteamUser)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUser_GetSteamID", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamUser;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::CSteamID ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::CSteamID));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::CSteamID>(*(Facepunch_Steamworks::SteamNative::CSteamID*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::VoiceResult Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUser_GetAvailableVoice(intptr_t ISteamUser, uint32_t& pcbCompressed, uint32_t& pcbUncompressed_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUser_GetAvailableVoice", std::vector<std::string> { "System.IntPtr", "System.UInt32&", "System.UInt32&", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamUser;
	params[1] = (intptr_t)&pcbCompressed;
	params[2] = (intptr_t)&pcbUncompressed_Deprecated;
	params[3] = (intptr_t)&nUncompressedVoiceDesiredSampleRate_Deprecated;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::VoiceResult ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::VoiceResult));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::VoiceResult>(*(Facepunch_Steamworks::SteamNative::VoiceResult*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::VoiceResult Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUser_GetVoice(intptr_t ISteamUser, bool bWantCompressed, intptr_t pDestBuffer, uint32_t cbDestBufferSize, uint32_t& nBytesWritten, bool bWantUncompressed_Deprecated, intptr_t pUncompressedDestBuffer_Deprecated, uint32_t cbUncompressedDestBufferSize_Deprecated, uint32_t& nUncompressBytesWritten_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUser_GetVoice", std::vector<std::string> { "System.IntPtr", "System.Boolean", "System.IntPtr", "System.UInt32", "System.UInt32&", "System.Boolean", "System.IntPtr", "System.UInt32", "System.UInt32&", "System.UInt32" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&ISteamUser;
	params[1] = (intptr_t)&bWantCompressed;
	params[2] = (intptr_t)&pDestBuffer;
	params[3] = (intptr_t)&cbDestBufferSize;
	params[4] = (intptr_t)&nBytesWritten;
	params[5] = (intptr_t)&bWantUncompressed_Deprecated;
	params[6] = (intptr_t)&pUncompressedDestBuffer_Deprecated;
	params[7] = (intptr_t)&cbUncompressedDestBufferSize_Deprecated;
	params[8] = (intptr_t)&nUncompressBytesWritten_Deprecated;
	params[9] = (intptr_t)&nUncompressedVoiceDesiredSampleRate_Deprecated;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::VoiceResult ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::VoiceResult));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::VoiceResult>(*(Facepunch_Steamworks::SteamNative::VoiceResult*)il2cpp_object_unbox(returnValue));
}
uint32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUser_GetVoiceOptimalSampleRate(intptr_t ISteamUser)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUser_GetVoiceOptimalSampleRate", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamUser;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::HAuthTicket Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUser_GetAuthSessionTicket(intptr_t ISteamUser, intptr_t pTicket, int32_t cbMaxTicket, uint32_t& pcbTicket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUser_GetAuthSessionTicket", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Int32", "System.UInt32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamUser;
	params[1] = (intptr_t)&pTicket;
	params[2] = (intptr_t)&cbMaxTicket;
	params[3] = (intptr_t)&pcbTicket;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::HAuthTicket ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::HAuthTicket));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::HAuthTicket>(*(Facepunch_Steamworks::SteamNative::HAuthTicket*)il2cpp_object_unbox(returnValue));
}
void Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUser_CancelAuthTicket(intptr_t ISteamUser, uint32_t hAuthTicket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUser_CancelAuthTicket", std::vector<std::string> { "System.IntPtr", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamUser;
	params[1] = (intptr_t)&hAuthTicket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetPersonaName(intptr_t ISteamFriends)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetPersonaName", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamFriends;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetFriendCount(intptr_t ISteamFriends, int32_t iFriendFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetFriendCount", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&iFriendFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::CSteamID Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetFriendByIndex(intptr_t ISteamFriends, int32_t iFriend, int32_t iFriendFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetFriendByIndex", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&iFriend;
	params[2] = (intptr_t)&iFriendFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::CSteamID ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::CSteamID));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::CSteamID>(*(Facepunch_Steamworks::SteamNative::CSteamID*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::FriendRelationship Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetFriendRelationship(intptr_t ISteamFriends, uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetFriendRelationship", std::vector<std::string> { "System.IntPtr", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::FriendRelationship ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::FriendRelationship));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::FriendRelationship>(*(Facepunch_Steamworks::SteamNative::FriendRelationship*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::PersonaState Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetFriendPersonaState(intptr_t ISteamFriends, uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetFriendPersonaState", std::vector<std::string> { "System.IntPtr", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::PersonaState ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::PersonaState));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::PersonaState>(*(Facepunch_Steamworks::SteamNative::PersonaState*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetFriendPersonaName(intptr_t ISteamFriends, uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetFriendPersonaName", std::vector<std::string> { "System.IntPtr", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetFriendGamePlayed(intptr_t ISteamFriends, uint64_t steamIDFriend, Facepunch_Steamworks::SteamNative::FriendGameInfo_t& pFriendGameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetFriendGamePlayed", std::vector<std::string> { "System.IntPtr", "System.UInt64", "SteamNative.FriendGameInfo_t&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDFriend;
	params[2] = (intptr_t)&pFriendGameInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetSmallFriendAvatar(intptr_t ISteamFriends, uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetSmallFriendAvatar", std::vector<std::string> { "System.IntPtr", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetMediumFriendAvatar(intptr_t ISteamFriends, uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetMediumFriendAvatar", std::vector<std::string> { "System.IntPtr", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetLargeFriendAvatar(intptr_t ISteamFriends, uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetLargeFriendAvatar", std::vector<std::string> { "System.IntPtr", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_RequestUserInformation(intptr_t ISteamFriends, uint64_t steamIDUser, bool bRequireNameOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_RequestUserInformation", std::vector<std::string> { "System.IntPtr", "System.UInt64", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDUser;
	params[2] = (intptr_t)&bRequireNameOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_RequestFriendRichPresence(intptr_t ISteamFriends, uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_RequestFriendRichPresence", std::vector<std::string> { "System.IntPtr", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamFriends_GetFriendMessage(intptr_t ISteamFriends, uint64_t steamIDFriend, int32_t iMessageID, intptr_t pvData, int32_t cubData, Facepunch_Steamworks::SteamNative::ChatEntryType& peChatEntryType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamFriends_GetFriendMessage", std::vector<std::string> { "System.IntPtr", "System.UInt64", "System.Int32", "System.IntPtr", "System.Int32", "SteamNative.ChatEntryType&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&ISteamFriends;
	params[1] = (intptr_t)&steamIDFriend;
	params[2] = (intptr_t)&iMessageID;
	params[3] = (intptr_t)&pvData;
	params[4] = (intptr_t)&cubData;
	params[5] = (intptr_t)&peChatEntryType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUtils_GetImageSize(intptr_t ISteamUtils, int32_t iImage, uint32_t& pnWidth, uint32_t& pnHeight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUtils_GetImageSize", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.UInt32&", "System.UInt32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamUtils;
	params[1] = (intptr_t)&iImage;
	params[2] = (intptr_t)&pnWidth;
	params[3] = (intptr_t)&pnHeight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUtils_GetImageRGBA(intptr_t ISteamUtils, int32_t iImage, intptr_t pubDest, int32_t nDestBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUtils_GetImageRGBA", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamUtils;
	params[1] = (intptr_t)&iImage;
	params[2] = (intptr_t)&pubDest;
	params[3] = (intptr_t)&nDestBufferSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUtils_IsAPICallCompleted(intptr_t ISteamUtils, uint64_t hSteamAPICall, bool& pbFailed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUtils_IsAPICallCompleted", std::vector<std::string> { "System.IntPtr", "System.UInt64", "System.Boolean&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamUtils;
	params[1] = (intptr_t)&hSteamAPICall;
	params[2] = (intptr_t)&pbFailed;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUtils_GetAPICallResult(intptr_t ISteamUtils, uint64_t hSteamAPICall, intptr_t pCallback, int32_t cubCallback, int32_t iCallbackExpected, bool& pbFailed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUtils_GetAPICallResult", std::vector<std::string> { "System.IntPtr", "System.UInt64", "System.IntPtr", "System.Int32", "System.Int32", "System.Boolean&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&ISteamUtils;
	params[1] = (intptr_t)&hSteamAPICall;
	params[2] = (intptr_t)&pCallback;
	params[3] = (intptr_t)&cubCallback;
	params[4] = (intptr_t)&iCallbackExpected;
	params[5] = (intptr_t)&pbFailed;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamMatchmaking_GetFavoriteGameCount(intptr_t ISteamMatchmaking)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamMatchmaking_GetFavoriteGameCount", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamMatchmaking;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamMatchmaking_GetFavoriteGame(intptr_t ISteamMatchmaking, int32_t iGame, uint32_t& pnAppID, uint32_t& pnIP, uint16_t& pnConnPort, uint16_t& pnQueryPort, uint32_t& punFlags, uint32_t& pRTime32LastPlayedOnServer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamMatchmaking_GetFavoriteGame", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.UInt32&", "System.UInt32&", "System.UInt16&", "System.UInt16&", "System.UInt32&", "System.UInt32&" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&ISteamMatchmaking;
	params[1] = (intptr_t)&iGame;
	params[2] = (intptr_t)&pnAppID;
	params[3] = (intptr_t)&pnIP;
	params[4] = (intptr_t)&pnConnPort;
	params[5] = (intptr_t)&pnQueryPort;
	params[6] = (intptr_t)&punFlags;
	params[7] = (intptr_t)&pRTime32LastPlayedOnServer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUserStats_RequestCurrentStats(intptr_t ISteamUserStats)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUserStats_RequestCurrentStats", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamUserStats;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime(intptr_t ISteamUserStats, mscorlib::System::String* pchName, bool& pbAchieved, uint32_t& punUnlockTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUserStats_GetAchievementAndUnlockTime", std::vector<std::string> { "System.IntPtr", "System.String", "System.Boolean&", "System.UInt32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamUserStats;
	params[1] = (intptr_t)pchName;
	params[2] = (intptr_t)&pbAchieved;
	params[3] = (intptr_t)&punUnlockTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUserStats_GetAchievementIcon(intptr_t ISteamUserStats, mscorlib::System::String* pchName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUserStats_GetAchievementIcon", std::vector<std::string> { "System.IntPtr", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamUserStats;
	params[1] = (intptr_t)pchName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute(intptr_t ISteamUserStats, mscorlib::System::String* pchName, mscorlib::System::String* pchKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUserStats_GetAchievementDisplayAttribute", std::vector<std::string> { "System.IntPtr", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamUserStats;
	params[1] = (intptr_t)pchName;
	params[2] = (intptr_t)pchKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
uint32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUserStats_GetNumAchievements(intptr_t ISteamUserStats)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUserStats_GetNumAchievements", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamUserStats;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamUserStats_GetAchievementName(intptr_t ISteamUserStats, uint32_t iAchievement)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamUserStats_GetAchievementName", std::vector<std::string> { "System.IntPtr", "System.UInt32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamUserStats;
	params[1] = (intptr_t)&iAchievement;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamApps_GetCurrentGameLanguage(intptr_t ISteamApps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamApps_GetCurrentGameLanguage", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamApps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamApps_GetAvailableGameLanguages(intptr_t ISteamApps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamApps_GetAvailableGameLanguages", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamApps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamApps_GetCurrentBetaName(intptr_t ISteamApps, mscorlib::System::Text::StringBuilder* pchName, int32_t cchNameBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamApps_GetCurrentBetaName", std::vector<std::string> { "System.IntPtr", "System.Text.StringBuilder", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamApps;
	params[1] = (intptr_t)pchName;
	params[2] = (intptr_t)&cchNameBufferSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
uint32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamApps_GetAppInstallDir(intptr_t ISteamApps, uint32_t appID, mscorlib::System::Text::StringBuilder* pchFolder, uint32_t cchFolderBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamApps_GetAppInstallDir", std::vector<std::string> { "System.IntPtr", "System.UInt32", "System.Text.StringBuilder", "System.UInt32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamApps;
	params[1] = (intptr_t)&appID;
	params[2] = (intptr_t)pchFolder;
	params[3] = (intptr_t)&cchFolderBufferSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::CSteamID Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamApps_GetAppOwner(intptr_t ISteamApps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamApps_GetAppOwner", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamApps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::CSteamID ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::CSteamID));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::CSteamID>(*(Facepunch_Steamworks::SteamNative::CSteamID*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamApps_GetAppBuildId(intptr_t ISteamApps)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamApps_GetAppBuildId", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamApps;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamNetworking_IsP2PPacketAvailable(intptr_t ISteamNetworking, uint32_t& pcubMsgSize, int32_t nChannel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamNetworking_IsP2PPacketAvailable", std::vector<std::string> { "System.IntPtr", "System.UInt32&", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamNetworking;
	params[1] = (intptr_t)&pcubMsgSize;
	params[2] = (intptr_t)&nChannel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamNetworking_ReadP2PPacket(intptr_t ISteamNetworking, intptr_t pubDest, uint32_t cubDest, uint32_t& pcubMsgSize, uint64_t& psteamIDRemote, int32_t nChannel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamNetworking_ReadP2PPacket", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.UInt32", "System.UInt32&", "System.UInt64&", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&ISteamNetworking;
	params[1] = (intptr_t)&pubDest;
	params[2] = (intptr_t)&cubDest;
	params[3] = (intptr_t)&pcubMsgSize;
	params[4] = (intptr_t)&psteamIDRemote;
	params[5] = (intptr_t)&nChannel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser(intptr_t ISteamNetworking, uint64_t steamIDRemote)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamNetworking_AcceptP2PSessionWithUser", std::vector<std::string> { "System.IntPtr", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamNetworking;
	params[1] = (intptr_t)&steamIDRemote;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamNetworking_CloseP2PSessionWithUser(intptr_t ISteamNetworking, uint64_t steamIDRemote)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamNetworking_CloseP2PSessionWithUser", std::vector<std::string> { "System.IntPtr", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamNetworking;
	params[1] = (intptr_t)&steamIDRemote;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::Result Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_GetResultStatus(intptr_t ISteamInventory, int32_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_GetResultStatus", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::Result ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::Result));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::Result>(*(Facepunch_Steamworks::SteamNative::Result*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_GetResultItems(intptr_t ISteamInventory, int32_t resultHandle, intptr_t pOutItemsArray, uint32_t& punOutItemsArraySize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_GetResultItems", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.IntPtr", "System.UInt32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&resultHandle;
	params[2] = (intptr_t)&pOutItemsArray;
	params[3] = (intptr_t)&punOutItemsArraySize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_GetResultItemProperty(intptr_t ISteamInventory, int32_t resultHandle, uint32_t unItemIndex, mscorlib::System::String* pchPropertyName, mscorlib::System::Text::StringBuilder* pchValueBuffer, uint32_t& punValueBufferSizeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_GetResultItemProperty", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.UInt32", "System.String", "System.Text.StringBuilder", "System.UInt32&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&resultHandle;
	params[2] = (intptr_t)&unItemIndex;
	params[3] = (intptr_t)pchPropertyName;
	params[4] = (intptr_t)pchValueBuffer;
	params[5] = (intptr_t)&punValueBufferSizeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
uint32_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_GetResultTimestamp(intptr_t ISteamInventory, int32_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_GetResultTimestamp", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
void Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_DestroyResult(intptr_t ISteamInventory, int32_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_DestroyResult", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_GetAllItems(intptr_t ISteamInventory, int32_t& pResultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_GetAllItems", std::vector<std::string> { "System.IntPtr", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&pResultHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_SerializeResult(intptr_t ISteamInventory, int32_t resultHandle, intptr_t pOutBuffer, uint32_t& punOutBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_SerializeResult", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.IntPtr", "System.UInt32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&resultHandle;
	params[2] = (intptr_t)&pOutBuffer;
	params[3] = (intptr_t)&punOutBufferSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_LoadItemDefinitions(intptr_t ISteamInventory)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_LoadItemDefinitions", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamInventory;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_GetItemDefinitionIDs(intptr_t ISteamInventory, intptr_t pItemDefIDs, uint32_t& punItemDefIDsArraySize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_GetItemDefinitionIDs", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.UInt32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&pItemDefIDs;
	params[2] = (intptr_t)&punItemDefIDsArraySize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_GetItemDefinitionProperty(intptr_t ISteamInventory, int32_t iDefinition, mscorlib::System::String* pchPropertyName, mscorlib::System::Text::StringBuilder* pchValueBuffer, uint32_t& punValueBufferSizeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_GetItemDefinitionProperty", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.String", "System.Text.StringBuilder", "System.UInt32&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&iDefinition;
	params[2] = (intptr_t)pchPropertyName;
	params[3] = (intptr_t)pchValueBuffer;
	params[4] = (intptr_t)&punValueBufferSizeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::SteamAPICall_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_RequestPrices(intptr_t ISteamInventory)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_RequestPrices", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ISteamInventory;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::SteamAPICall_t ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::SteamAPICall_t));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::SteamAPICall_t>(*(Facepunch_Steamworks::SteamNative::SteamAPICall_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_ISteamInventory_GetItemPrice(intptr_t ISteamInventory, int32_t iDefinition, uint64_t& pPrice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_ISteamInventory_GetItemPrice", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.UInt64&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&ISteamInventory;
	params[1] = (intptr_t)&iDefinition;
	params[2] = (intptr_t)&pPrice;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_Init");
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
void Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_RunCallbacks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_RunCallbacks");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_RegisterCallback(intptr_t pCallback, int32_t callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_RegisterCallback", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pCallback;
	params[1] = (intptr_t)&callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_UnregisterCallback(intptr_t pCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_UnregisterCallback", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_Shutdown");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamGameServer_Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamGameServer_Shutdown");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Facepunch_Steamworks::SteamNative::HSteamUser Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_GetHSteamUser()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_GetHSteamUser");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::HSteamUser ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::HSteamUser));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::HSteamUser>(*(Facepunch_Steamworks::SteamNative::HSteamUser*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::HSteamPipe Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamAPI_GetHSteamPipe()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamAPI_GetHSteamPipe");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::HSteamPipe ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::HSteamPipe));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::HSteamPipe>(*(Facepunch_Steamworks::SteamNative::HSteamPipe*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Win64_Native::SteamInternal_CreateInterface(mscorlib::System::String* version)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamInternal_CreateInterface", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)version;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
