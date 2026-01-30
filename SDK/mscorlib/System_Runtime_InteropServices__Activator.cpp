#include "System_Runtime_InteropServices__Activator.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::InteropServices::_Activator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.InteropServices", "_Activator");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::InteropServices::_Activator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
