#include "Facepunch_Steamworks_Config.h"

IL2CPP::Il2CppClass* Facepunch_Steamworks::Facepunch::Steamworks::Config::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Facepunch.Steamworks.dll", "Facepunch.Steamworks", "Config");
	return il2cppclass;
}
mscorlib::System::Type* Facepunch_Steamworks::Facepunch::Steamworks::Config::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Facepunch_Steamworks::Facepunch::Steamworks::Config::ForUnity(mscorlib::System::String* platform)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForUnity", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)platform;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Facepunch_Steamworks::Facepunch::Steamworks::Config::get_UseThisCall()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_UseThisCall");
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
void Facepunch_Steamworks::Facepunch::Steamworks::Config::set_UseThisCall(bool value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_UseThisCall", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Config::ForcePlatform(Facepunch_Steamworks::Facepunch::Steamworks::OperatingSystem os, Facepunch_Steamworks::Facepunch::Steamworks::Architecture arch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ForcePlatform", std::vector<std::string> { "Facepunch.Steamworks.OperatingSystem", "Facepunch.Steamworks.Architecture" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&os;
	params[1] = (intptr_t)&arch;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Facepunch_Steamworks::Facepunch::Steamworks::Config::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
