#include "SteamNative_SteamMatchmaking.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::SteamMatchmaking::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "SteamMatchmaking");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::SteamMatchmaking::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::SteamNative::SteamMatchmaking::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer)
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
void Facepunch_Steamworks::SteamNative::SteamMatchmaking::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Facepunch_Steamworks::SteamNative::SteamMatchmaking::GetFavoriteGame(int32_t iGame, Facepunch_Steamworks::SteamNative::AppId_t& pnAppID, uint32_t& pnIP, uint16_t& pnConnPort, uint16_t& pnQueryPort, uint32_t& punFlags, uint32_t& pRTime32LastPlayedOnServer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFavoriteGame", std::vector<std::string> { "System.Int32", "SteamNative.AppId_t&", "System.UInt32&", "System.UInt16&", "System.UInt16&", "System.UInt32&", "System.UInt32&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&iGame;
	params[1] = (intptr_t)&pnAppID;
	params[2] = (intptr_t)&pnIP;
	params[3] = (intptr_t)&pnConnPort;
	params[4] = (intptr_t)&pnQueryPort;
	params[5] = (intptr_t)&punFlags;
	params[6] = (intptr_t)&pRTime32LastPlayedOnServer;
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
int32_t Facepunch_Steamworks::SteamNative::SteamMatchmaking::GetFavoriteGameCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFavoriteGameCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
