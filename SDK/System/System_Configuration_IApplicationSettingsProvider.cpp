#include "System_Configuration_IApplicationSettingsProvider.h"

IL2CPP::Il2CppClass* System::System::Configuration::IApplicationSettingsProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Configuration", "IApplicationSettingsProvider");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Configuration::IApplicationSettingsProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Configuration::SettingsPropertyValue* System::System::Configuration::IApplicationSettingsProvider::GetPreviousVersion(System::Configuration::SettingsContext* context, System::Configuration::SettingsProperty* property)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPreviousVersion", std::vector<std::string> { "System.Configuration.SettingsContext", "System.Configuration.SettingsProperty" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)context;
	params[1] = (intptr_t)property;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (System::Configuration::SettingsPropertyValue*)returnValue;
}
void System::System::Configuration::IApplicationSettingsProvider::Reset(System::Configuration::SettingsContext* context)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Reset", std::vector<std::string> { "System.Configuration.SettingsContext" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)context;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Configuration::IApplicationSettingsProvider::Upgrade(System::Configuration::SettingsContext* context, System::Configuration::SettingsPropertyCollection* properties)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Upgrade", std::vector<std::string> { "System.Configuration.SettingsContext", "System.Configuration.SettingsPropertyCollection" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)context;
	params[1] = (intptr_t)properties;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
