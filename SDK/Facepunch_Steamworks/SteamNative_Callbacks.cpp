#include "SteamNative_Callbacks.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::SteamNative::Callbacks::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "SteamNative", "Callbacks");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::SteamNative::Callbacks::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::SteamNative::Callbacks::RegisterCallbacks(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterCallbacks", std::vector<std::string> { "Facepunch.Steamworks.BaseSteamworks" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)steamworks;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
