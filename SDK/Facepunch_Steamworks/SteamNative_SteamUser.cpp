#include "SteamNative_SteamUser.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::SteamUser::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "SteamUser");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::SteamUser::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::SteamNative::SteamUser::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer)
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
bool Facepunch_Steamworks::SteamNative::SteamUser::get_IsValid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsValid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Facepunch_Steamworks::SteamNative::SteamUser::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::SteamNative::SteamUser::CancelAuthTicket(Facepunch_Steamworks::SteamNative::HAuthTicket hAuthTicket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CancelAuthTicket", std::vector<std::string> { "SteamNative.HAuthTicket" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&hAuthTicket;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Facepunch_Steamworks::SteamNative::HAuthTicket Facepunch_Steamworks::SteamNative::SteamUser::GetAuthSessionTicket(intptr_t pTicket, int32_t cbMaxTicket, uint32_t& pcbTicket)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAuthSessionTicket", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.UInt32&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pTicket;
	params[1] = (intptr_t)&cbMaxTicket;
	params[2] = (intptr_t)&pcbTicket;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
Facepunch_Steamworks::SteamNative::VoiceResult Facepunch_Steamworks::SteamNative::SteamUser::GetAvailableVoice(uint32_t& pcbCompressed, uint32_t& pcbUncompressed_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAvailableVoice", std::vector<std::string> { "System.UInt32&", "System.UInt32&", "System.UInt32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pcbCompressed;
	params[1] = (intptr_t)&pcbUncompressed_Deprecated;
	params[2] = (intptr_t)&nUncompressedVoiceDesiredSampleRate_Deprecated;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
uint64_t Facepunch_Steamworks::SteamNative::SteamUser::GetSteamID()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSteamID");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
Facepunch_Steamworks::SteamNative::VoiceResult Facepunch_Steamworks::SteamNative::SteamUser::GetVoice(bool bWantCompressed, intptr_t pDestBuffer, uint32_t cbDestBufferSize, uint32_t& nBytesWritten, bool bWantUncompressed_Deprecated, intptr_t pUncompressedDestBuffer_Deprecated, uint32_t cbUncompressedDestBufferSize_Deprecated, uint32_t& nUncompressBytesWritten_Deprecated, uint32_t nUncompressedVoiceDesiredSampleRate_Deprecated)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVoice", std::vector<std::string> { "System.Boolean", "System.IntPtr", "System.UInt32", "System.UInt32&", "System.Boolean", "System.IntPtr", "System.UInt32", "System.UInt32&", "System.UInt32" });
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
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
uint32_t Facepunch_Steamworks::SteamNative::SteamUser::GetVoiceOptimalSampleRate()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVoiceOptimalSampleRate");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
