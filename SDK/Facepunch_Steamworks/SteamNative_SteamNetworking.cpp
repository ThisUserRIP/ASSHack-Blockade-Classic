#include "SteamNative_SteamNetworking.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::SteamNetworking::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "SteamNetworking");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::SteamNetworking::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::SteamNative::SteamNetworking::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer)
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
void Facepunch_Steamworks::SteamNative::SteamNetworking::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool Facepunch_Steamworks::SteamNative::SteamNetworking::AcceptP2PSessionWithUser(Facepunch_Steamworks::SteamNative::CSteamID steamIDRemote)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AcceptP2PSessionWithUser", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDRemote;
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
bool Facepunch_Steamworks::SteamNative::SteamNetworking::CloseP2PSessionWithUser(Facepunch_Steamworks::SteamNative::CSteamID steamIDRemote)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CloseP2PSessionWithUser", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&steamIDRemote;
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
bool Facepunch_Steamworks::SteamNative::SteamNetworking::IsP2PPacketAvailable(uint32_t& pcubMsgSize, int32_t nChannel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsP2PPacketAvailable", std::vector<std::string> { "System.UInt32&", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pcubMsgSize;
	params[1] = (intptr_t)&nChannel;
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
bool Facepunch_Steamworks::SteamNative::SteamNetworking::ReadP2PPacket(intptr_t pubDest, uint32_t cubDest, uint32_t& pcubMsgSize, Facepunch_Steamworks::SteamNative::CSteamID& psteamIDRemote, int32_t nChannel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ReadP2PPacket", std::vector<std::string> { "System.IntPtr", "System.UInt32", "System.UInt32&", "SteamNative.CSteamID&", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&pubDest;
	params[1] = (intptr_t)&cubDest;
	params[2] = (intptr_t)&pcubMsgSize;
	params[3] = (intptr_t)&psteamIDRemote;
	params[4] = (intptr_t)&nChannel;
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
