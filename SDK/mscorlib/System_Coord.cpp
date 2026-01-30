#include "System_Coord.h"

IL2CPP::Il2CppClass* mscorlib::System::Coord::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System", "Coord");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Coord::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
