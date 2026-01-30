#include "SteamNative_CSteamID.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::CSteamID::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "CSteamID");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::CSteamID::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Facepunch_Steamworks::SteamNative::CSteamID Facepunch_Steamworks::SteamNative::CSteamID::op_Implicit(uint64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "System.UInt64" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
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
uint64_t Facepunch_Steamworks::SteamNative::CSteamID::op_Implicit(Facepunch_Steamworks::SteamNative::CSteamID value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "op_Implicit", std::vector<std::string> { "SteamNative.CSteamID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint64_t ret;
		std::memset(&ret, 0, sizeof(uint64_t));
		return ret;
	}
	return static_cast<uint64_t>(*(uint64_t*)il2cpp_object_unbox(returnValue));
}
