#include "System_Threading_LazyInitializer.h"

IL2CPP::Il2CppClass* mscorlib::System::Threading::LazyInitializer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Threading", "LazyInitializer");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Threading::LazyInitializer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
