#include "System_Threading_Mutex.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::Mutex::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading", "Mutex");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::Mutex::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
