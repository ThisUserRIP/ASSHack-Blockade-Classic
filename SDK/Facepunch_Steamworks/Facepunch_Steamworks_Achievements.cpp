#include "Facepunch_Steamworks_Achievements.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Achievements::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "Facepunch.Steamworks", "Achievements");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Achievements::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Achievement*>* Facepunch_Steamworks::Facepunch::Steamworks::Achievements::get_All()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_All");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Achievement*>*)returnValue;
}
void Facepunch_Steamworks::Facepunch::Steamworks::Achievements::set_All(IL2CPP::Array<Facepunch_Steamworks::Facepunch::Steamworks::Achievement*>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_All", std::vector<std::string> { "Facepunch.Steamworks.Achievement[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Achievements::_ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Facepunch.Steamworks.Client" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)c;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Achievements::Refresh()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Refresh");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Achievements::OnUnlocked(Facepunch_Steamworks::Facepunch::Steamworks::Achievement* a)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnUnlocked", std::vector<std::string> { "Facepunch.Steamworks.Achievement" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)a;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Achievements::Dispose()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Dispose");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Achievements::UserStatsReceived(Facepunch_Steamworks::SteamNative::UserStatsReceived_t stats)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UserStatsReceived", std::vector<std::string> { "SteamNative.UserStatsReceived_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stats;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Achievements::UserStatsStored(Facepunch_Steamworks::SteamNative::UserStatsStored_t stats)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UserStatsStored", std::vector<std::string> { "SteamNative.UserStatsStored_t" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&stats;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
