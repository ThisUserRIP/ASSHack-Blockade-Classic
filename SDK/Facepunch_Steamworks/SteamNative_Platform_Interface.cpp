#include "SteamNative_Platform_Interface.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::Platform_Interface::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Facepunch_Steamworks::SteamNative::Platform::GetIl2CppClass(), "Interface");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::Platform_Interface::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
bool Facepunch_Steamworks::SteamNative::Platform_Interface::get_IsValid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsValid");
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamApps_GetCurrentGameLanguage()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamApps_GetCurrentGameLanguage");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamApps_GetAvailableGameLanguages()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamApps_GetAvailableGameLanguages");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamApps_GetCurrentBetaName(mscorlib::System::Text::StringBuilder* pchName, int32_t cchNameBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamApps_GetCurrentBetaName", std::vector<std::string> { "System.Text.StringBuilder", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pchName;
	params[1] = (intptr_t)&cchNameBufferSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
uint32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamApps_GetAppInstallDir(uint32_t appID, mscorlib::System::Text::StringBuilder* pchFolder, uint32_t cchFolderBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamApps_GetAppInstallDir", std::vector<std::string> { "System.UInt32", "System.Text.StringBuilder", "System.UInt32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&appID;
	params[1] = (intptr_t)pchFolder;
	params[2] = (intptr_t)&cchFolderBufferSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::CSteamID Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamApps_GetAppOwner()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamApps_GetAppOwner");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::CSteamID ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::CSteamID));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::CSteamID>(*(Facepunch_Steamworks::SteamNative::CSteamID*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamApps_GetAppBuildId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamApps_GetAppBuildId");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamUser(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamUser", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamGameServer(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamGameServer", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamFriends(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamFriends", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamUtils(int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamUtils", std::vector<std::string> { "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hSteamPipe;
	params[1] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamMatchmaking(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamMatchmaking", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamMatchmakingServers(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamMatchmakingServers", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamUserStats(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamUserStats", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamGameServerStats(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamGameServerStats", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamApps(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamApps", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamNetworking(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamNetworking", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamRemoteStorage(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamRemoteStorage", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamScreenshots(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamScreenshots", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamHTTP(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamHTTP", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamUGC(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamUGC", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamAppList(int32_t hSteamUser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamAppList", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamClient_GetISteamInventory(int32_t hSteamuser, int32_t hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamClient_GetISteamInventory", std::vector<std::string> { "System.Int32", "System.Int32", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetPersonaName()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetPersonaName");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		intptr_t ret;
		std::memset(&ret, 0, sizeof(intptr_t));
		return ret;
	}
	return static_cast<intptr_t>(*(intptr_t*)il2cpp_object_unbox(returnValue));
}
int32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetFriendCount(int32_t iFriendFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetFriendCount", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&iFriendFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::CSteamID Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetFriendByIndex", std::vector<std::string> { "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&iFriend;
	params[1] = (intptr_t)&iFriendFlags;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::FriendRelationship Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetFriendRelationship(uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetFriendRelationship", std::vector<std::string> { "System.UInt64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::PersonaState Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetFriendPersonaState(uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetFriendPersonaState", std::vector<std::string> { "System.UInt64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetFriendPersonaName(uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetFriendPersonaName", std::vector<std::string> { "System.UInt64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetFriendGamePlayed(uint64_t steamIDFriend, Facepunch_Steamworks::SteamNative::FriendGameInfo_t& pFriendGameInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetFriendGamePlayed", std::vector<std::string> { "System.UInt64", "SteamNative.FriendGameInfo_t&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&steamIDFriend;
	params[1] = (intptr_t)&pFriendGameInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
int32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetSmallFriendAvatar(uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetSmallFriendAvatar", std::vector<std::string> { "System.UInt64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
int32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetMediumFriendAvatar(uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetMediumFriendAvatar", std::vector<std::string> { "System.UInt64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
int32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetLargeFriendAvatar(uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetLargeFriendAvatar", std::vector<std::string> { "System.UInt64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_RequestUserInformation(uint64_t steamIDUser, bool bRequireNameOnly)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_RequestUserInformation", std::vector<std::string> { "System.UInt64", "System.Boolean" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&steamIDUser;
	params[1] = (intptr_t)&bRequireNameOnly;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_RequestFriendRichPresence(uint64_t steamIDFriend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_RequestFriendRichPresence", std::vector<std::string> { "System.UInt64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDFriend;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamFriends_GetFriendMessage(uint64_t steamIDFriend, int32_t iMessageID, intptr_t pvData, int32_t cubData, Facepunch_Steamworks::SteamNative::ChatEntryType& peChatEntryType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamFriends_GetFriendMessage", std::vector<std::string> { "System.UInt64", "System.Int32", "System.IntPtr", "System.Int32", "SteamNative.ChatEntryType&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&steamIDFriend;
	params[1] = (intptr_t)&iMessageID;
	params[2] = (intptr_t)&pvData;
	params[3] = (intptr_t)&cubData;
	params[4] = (intptr_t)&peChatEntryType;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::Result Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_GetResultStatus(int32_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_GetResultStatus", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_GetResultItems(int32_t resultHandle, intptr_t pOutItemsArray, uint32_t& punOutItemsArraySize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_GetResultItems", std::vector<std::string> { "System.Int32", "System.IntPtr", "System.UInt32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&resultHandle;
	params[1] = (intptr_t)&pOutItemsArray;
	params[2] = (intptr_t)&punOutItemsArraySize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_GetResultItemProperty(int32_t resultHandle, uint32_t unItemIndex, mscorlib::System::String* pchPropertyName, mscorlib::System::Text::StringBuilder* pchValueBuffer, uint32_t& punValueBufferSizeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_GetResultItemProperty", std::vector<std::string> { "System.Int32", "System.UInt32", "System.String", "System.Text.StringBuilder", "System.UInt32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&resultHandle;
	params[1] = (intptr_t)&unItemIndex;
	params[2] = (intptr_t)pchPropertyName;
	params[3] = (intptr_t)pchValueBuffer;
	params[4] = (intptr_t)&punValueBufferSizeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
uint32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_GetResultTimestamp(int32_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_GetResultTimestamp", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_DestroyResult(int32_t resultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_DestroyResult", std::vector<std::string> { "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&resultHandle;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_GetAllItems(int32_t& pResultHandle)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_GetAllItems", std::vector<std::string> { "System.Int32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pResultHandle;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_SerializeResult(int32_t resultHandle, intptr_t pOutBuffer, uint32_t& punOutBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_SerializeResult", std::vector<std::string> { "System.Int32", "System.IntPtr", "System.UInt32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&resultHandle;
	params[1] = (intptr_t)&pOutBuffer;
	params[2] = (intptr_t)&punOutBufferSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_LoadItemDefinitions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_LoadItemDefinitions");
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_GetItemDefinitionIDs(intptr_t pItemDefIDs, uint32_t& punItemDefIDsArraySize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_GetItemDefinitionIDs", std::vector<std::string> { "System.IntPtr", "System.UInt32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pItemDefIDs;
	params[1] = (intptr_t)&punItemDefIDsArraySize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_GetItemDefinitionProperty(int32_t iDefinition, mscorlib::System::String* pchPropertyName, mscorlib::System::Text::StringBuilder* pchValueBuffer, uint32_t& punValueBufferSizeOut)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_GetItemDefinitionProperty", std::vector<std::string> { "System.Int32", "System.String", "System.Text.StringBuilder", "System.UInt32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&iDefinition;
	params[1] = (intptr_t)pchPropertyName;
	params[2] = (intptr_t)pchValueBuffer;
	params[3] = (intptr_t)&punValueBufferSizeOut;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::SteamAPICall_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_RequestPrices()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_RequestPrices");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::SteamAPICall_t ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::SteamAPICall_t));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::SteamAPICall_t>(*(Facepunch_Steamworks::SteamNative::SteamAPICall_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamInventory_GetItemPrice(int32_t iDefinition, uint64_t& pPrice)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamInventory_GetItemPrice", std::vector<std::string> { "System.Int32", "System.UInt64&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&iDefinition;
	params[1] = (intptr_t)&pPrice;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
int32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamMatchmaking_GetFavoriteGameCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamMatchmaking_GetFavoriteGameCount");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamMatchmaking_GetFavoriteGame(int32_t iGame, uint32_t& pnAppID, uint32_t& pnIP, uint16_t& pnConnPort, uint16_t& pnQueryPort, uint32_t& punFlags, uint32_t& pRTime32LastPlayedOnServer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamMatchmaking_GetFavoriteGame", std::vector<std::string> { "System.Int32", "System.UInt32&", "System.UInt32&", "System.UInt16&", "System.UInt16&", "System.UInt32&", "System.UInt32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&iGame;
	params[1] = (intptr_t)&pnAppID;
	params[2] = (intptr_t)&pnIP;
	params[3] = (intptr_t)&pnConnPort;
	params[4] = (intptr_t)&pnQueryPort;
	params[5] = (intptr_t)&punFlags;
	params[6] = (intptr_t)&pRTime32LastPlayedOnServer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamNetworking_IsP2PPacketAvailable(uint32_t& pcubMsgSize, int32_t nChannel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamNetworking_IsP2PPacketAvailable", std::vector<std::string> { "System.UInt32&", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pcubMsgSize;
	params[1] = (intptr_t)&nChannel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamNetworking_ReadP2PPacket(intptr_t pubDest, uint32_t cubDest, uint32_t& pcubMsgSize, uint64_t& psteamIDRemote, int32_t nChannel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamNetworking_ReadP2PPacket", std::vector<std::string> { "System.IntPtr", "System.UInt32", "System.UInt32&", "System.UInt64&", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&pubDest;
	params[1] = (intptr_t)&cubDest;
	params[2] = (intptr_t)&pcubMsgSize;
	params[3] = (intptr_t)&psteamIDRemote;
	params[4] = (intptr_t)&nChannel;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamNetworking_AcceptP2PSessionWithUser(uint64_t steamIDRemote)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamNetworking_AcceptP2PSessionWithUser", std::vector<std::string> { "System.UInt64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDRemote;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamNetworking_CloseP2PSessionWithUser(uint64_t steamIDRemote)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamNetworking_CloseP2PSessionWithUser", std::vector<std::string> { "System.UInt64" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDRemote;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::CSteamID Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUser_GetSteamID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUser_GetSteamID");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::CSteamID ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::CSteamID));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::CSteamID>(*(Facepunch_Steamworks::SteamNative::CSteamID*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::VoiceResult Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUser_GetAvailableVoice(uint32_t& pcbCompressed, uint32_t& pcbUncompressed_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUser_GetAvailableVoice", std::vector<std::string> { "System.UInt32&", "System.UInt32&", "System.UInt32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pcbCompressed;
	params[1] = (intptr_t)&pcbUncompressed_Deprecated;
	params[2] = (intptr_t)&nUncompressedVoiceDesiredSampleRate_Deprecated;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::VoiceResult Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUser_GetVoice(bool bWantCompressed, intptr_t pDestBuffer, uint32_t cbDestBufferSize, uint32_t& nBytesWritten, bool bWantUncompressed_Deprecated, intptr_t pUncompressedDestBuffer_Deprecated, uint32_t cbUncompressedDestBufferSize_Deprecated, uint32_t& nUncompressBytesWritten_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUser_GetVoice", std::vector<std::string> { "System.Boolean", "System.IntPtr", "System.UInt32", "System.UInt32&", "System.Boolean", "System.IntPtr", "System.UInt32", "System.UInt32&", "System.UInt32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&bWantCompressed;
	params[1] = (intptr_t)&pDestBuffer;
	params[2] = (intptr_t)&cbDestBufferSize;
	params[3] = (intptr_t)&nBytesWritten;
	params[4] = (intptr_t)&bWantUncompressed_Deprecated;
	params[5] = (intptr_t)&pUncompressedDestBuffer_Deprecated;
	params[6] = (intptr_t)&cbUncompressedDestBufferSize_Deprecated;
	params[7] = (intptr_t)&nUncompressBytesWritten_Deprecated;
	params[8] = (intptr_t)&nUncompressedVoiceDesiredSampleRate_Deprecated;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
uint32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUser_GetVoiceOptimalSampleRate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUser_GetVoiceOptimalSampleRate");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::HAuthTicket Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUser_GetAuthSessionTicket(intptr_t pTicket, int32_t cbMaxTicket, uint32_t& pcbTicket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUser_GetAuthSessionTicket", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.UInt32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pTicket;
	params[1] = (intptr_t)&cbMaxTicket;
	params[2] = (intptr_t)&pcbTicket;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUser_CancelAuthTicket(uint32_t hAuthTicket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUser_CancelAuthTicket", std::vector<std::string> { "System.UInt32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hAuthTicket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUserStats_RequestCurrentStats()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUserStats_RequestCurrentStats");
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUserStats_GetAchievementAndUnlockTime(mscorlib::System::String* pchName, bool& pbAchieved, uint32_t& punUnlockTime)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUserStats_GetAchievementAndUnlockTime", std::vector<std::string> { "System.String", "System.Boolean&", "System.UInt32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)pchName;
	params[1] = (intptr_t)&pbAchieved;
	params[2] = (intptr_t)&punUnlockTime;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
int32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUserStats_GetAchievementIcon(mscorlib::System::String* pchName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUserStats_GetAchievementIcon", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)pchName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUserStats_GetAchievementDisplayAttribute(mscorlib::System::String* pchName, mscorlib::System::String* pchKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUserStats_GetAchievementDisplayAttribute", std::vector<std::string> { "System.String", "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)pchName;
	params[1] = (intptr_t)pchKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
uint32_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUserStats_GetNumAchievements()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUserStats_GetNumAchievements");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUserStats_GetAchievementName(uint32_t iAchievement)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUserStats_GetAchievementName", std::vector<std::string> { "System.UInt32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&iAchievement;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUtils_GetImageSize(int32_t iImage, uint32_t& pnWidth, uint32_t& pnHeight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUtils_GetImageSize", std::vector<std::string> { "System.Int32", "System.UInt32&", "System.UInt32&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&iImage;
	params[1] = (intptr_t)&pnWidth;
	params[2] = (intptr_t)&pnHeight;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUtils_GetImageRGBA(int32_t iImage, intptr_t pubDest, int32_t nDestBufferSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUtils_GetImageRGBA", std::vector<std::string> { "System.Int32", "System.IntPtr", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&iImage;
	params[1] = (intptr_t)&pubDest;
	params[2] = (intptr_t)&nDestBufferSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUtils_IsAPICallCompleted(uint64_t hSteamAPICall, bool& pbFailed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUtils_IsAPICallCompleted", std::vector<std::string> { "System.UInt64", "System.Boolean&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hSteamAPICall;
	params[1] = (intptr_t)&pbFailed;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::ISteamUtils_GetAPICallResult(uint64_t hSteamAPICall, intptr_t pCallback, int32_t cubCallback, int32_t iCallbackExpected, bool& pbFailed)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ISteamUtils_GetAPICallResult", std::vector<std::string> { "System.UInt64", "System.IntPtr", "System.Int32", "System.Int32", "System.Boolean&" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&hSteamAPICall;
	params[1] = (intptr_t)&pCallback;
	params[2] = (intptr_t)&cubCallback;
	params[3] = (intptr_t)&iCallbackExpected;
	params[4] = (intptr_t)&pbFailed;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
bool Facepunch_Steamworks::SteamNative::Platform_Interface::SteamApi_SteamAPI_Init()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamApi_SteamAPI_Init");
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
void Facepunch_Steamworks::SteamNative::Platform_Interface::SteamApi_SteamAPI_RunCallbacks()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamApi_SteamAPI_RunCallbacks");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::Platform_Interface::SteamApi_SteamAPI_RegisterCallback(intptr_t pCallback, int32_t callback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamApi_SteamAPI_RegisterCallback", std::vector<std::string> { "System.IntPtr", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pCallback;
	params[1] = (intptr_t)&callback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::Platform_Interface::SteamApi_SteamAPI_UnregisterCallback(intptr_t pCallback)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamApi_SteamAPI_UnregisterCallback", std::vector<std::string> { "System.IntPtr" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pCallback;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::Platform_Interface::SteamApi_SteamAPI_Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamApi_SteamAPI_Shutdown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::Platform_Interface::SteamApi_SteamGameServer_Shutdown()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamApi_SteamGameServer_Shutdown");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Facepunch_Steamworks::SteamNative::HSteamUser Facepunch_Steamworks::SteamNative::Platform_Interface::SteamApi_SteamAPI_GetHSteamUser()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamApi_SteamAPI_GetHSteamUser");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::HSteamUser ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::HSteamUser));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::HSteamUser>(*(Facepunch_Steamworks::SteamNative::HSteamUser*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::HSteamPipe Facepunch_Steamworks::SteamNative::Platform_Interface::SteamApi_SteamAPI_GetHSteamPipe()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamApi_SteamAPI_GetHSteamPipe");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Facepunch_Steamworks::SteamNative::HSteamPipe ret;
		std::memset(&ret, 0, sizeof(Facepunch_Steamworks::SteamNative::HSteamPipe));
		return ret;
	}
	return static_cast<Facepunch_Steamworks::SteamNative::HSteamPipe>(*(Facepunch_Steamworks::SteamNative::HSteamPipe*)il2cpp_object_unbox(returnValue));
}
intptr_t Facepunch_Steamworks::SteamNative::Platform_Interface::SteamApi_SteamInternal_CreateInterface(mscorlib::System::String* version)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SteamApi_SteamInternal_CreateInterface", std::vector<std::string> { "System.String" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)version;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
