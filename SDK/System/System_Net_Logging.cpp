#include "System_Net_Logging.h"

IL2CPP::Il2CppClass* System::System::Net::Logging::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "Logging");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::Logging::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
