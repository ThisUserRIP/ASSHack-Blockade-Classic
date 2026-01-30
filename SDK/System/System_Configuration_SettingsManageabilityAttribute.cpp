#include "System_Configuration_SettingsManageabilityAttribute.h"

IL2CPP::Il2CppClass* System::System::Configuration::SettingsManageabilityAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Configuration", "SettingsManageabilityAttribute");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Configuration::SettingsManageabilityAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Configuration::SettingsManageabilityAttribute::_ctor(System::Configuration::SettingsManageability manageability)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Configuration.SettingsManageability" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&manageability;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Configuration::SettingsManageability System::System::Configuration::SettingsManageabilityAttribute::get_Manageability()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Manageability");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		System::Configuration::SettingsManageability ret;
		std::memset(&ret, 0, sizeof(System::Configuration::SettingsManageability));
		return ret;
	}
	return static_cast<System::Configuration::SettingsManageability>(*(System::Configuration::SettingsManageability*)il2cpp_object_unbox(returnValue));
}
