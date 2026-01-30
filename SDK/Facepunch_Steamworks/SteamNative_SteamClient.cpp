#include "SteamNative_SteamClient.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::SteamClient::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "SteamClient");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::SteamClient::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::SteamNative::SteamClient::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer)
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
void Facepunch_Steamworks::SteamNative::SteamClient::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Facepunch_Steamworks::SteamNative::SteamAppList* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamAppList(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamAppList", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamAppList*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamApps* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamApps(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamApps", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamApps*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamFriends* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamFriends(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamFriends", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamFriends*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamGameServer* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamGameServer(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamGameServer", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamGameServer*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamGameServerStats* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamGameServerStats(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamGameServerStats", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamGameServerStats*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamHTTP* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamHTTP(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamHTTP", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamHTTP*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamInventory* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamInventory(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamInventory", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamInventory*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamMatchmaking* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamMatchmaking(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamMatchmaking", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamMatchmaking*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamMatchmakingServers* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamMatchmakingServers(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamMatchmakingServers", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamMatchmakingServers*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamNetworking* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamNetworking(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamNetworking", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamNetworking*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamRemoteStorage* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamRemoteStorage(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamRemoteStorage", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamRemoteStorage*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamScreenshots* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamScreenshots(Facepunch_Steamworks::SteamNative::HSteamUser hSteamuser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamScreenshots", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamuser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamScreenshots*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamUGC* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamUGC(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamUGC", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamUGC*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamUser* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamUser(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamUser", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamUser*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamUserStats* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamUserStats(Facepunch_Steamworks::SteamNative::HSteamUser hSteamUser, Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamUserStats", std::vector<std::string> { "SteamNative.HSteamUser", "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&hSteamUser;
	params[1] = (intptr_t)&hSteamPipe;
	params[2] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamUserStats*)returnValue;
}
Facepunch_Steamworks::SteamNative::SteamUtils* Facepunch_Steamworks::SteamNative::SteamClient::GetISteamUtils(Facepunch_Steamworks::SteamNative::HSteamPipe hSteamPipe, mscorlib::System::String* pchVersion)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetISteamUtils", std::vector<std::string> { "SteamNative.HSteamPipe", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&hSteamPipe;
	params[1] = (intptr_t)pchVersion;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Facepunch_Steamworks::SteamNative::SteamUtils*)returnValue;
}
