#include "System_Configuration_Configuration.h"

IL2CPP::Il2CppClass* System_Configuration::System::Configuration::Configuration::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Configuration.dll", "System.Configuration", "Configuration");
	return il2cppclass;
}
mscorlib::System::Type* System_Configuration::System::Configuration::Configuration::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
