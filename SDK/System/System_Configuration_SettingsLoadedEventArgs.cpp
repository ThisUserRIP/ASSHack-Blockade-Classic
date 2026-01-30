#include "System_Configuration_SettingsLoadedEventArgs.h"

IL2CPP::Il2CppClass* System::System::Configuration::SettingsLoadedEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Configuration", "SettingsLoadedEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Configuration::SettingsLoadedEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Configuration::SettingsLoadedEventArgs::_ctor(System::Configuration::SettingsProvider* provider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Configuration.SettingsProvider" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)provider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Configuration::SettingsProvider* System::System::Configuration::SettingsLoadedEventArgs::get_Provider()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Provider");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Configuration::SettingsProvider*)returnValue;
}
