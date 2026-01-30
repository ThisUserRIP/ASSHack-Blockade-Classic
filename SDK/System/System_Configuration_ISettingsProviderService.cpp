#include "System_Configuration_ISettingsProviderService.h"

IL2CPP::Il2CppClass* System::System::Configuration::ISettingsProviderService::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Configuration", "ISettingsProviderService");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Configuration::ISettingsProviderService::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Configuration::SettingsProvider* System::System::Configuration::ISettingsProviderService::GetSettingsProvider(System::Configuration::SettingsProperty* property)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSettingsProvider", std::vector<std::string> { "System.Configuration.SettingsProperty" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)property;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Configuration::SettingsProvider*)returnValue;
}
