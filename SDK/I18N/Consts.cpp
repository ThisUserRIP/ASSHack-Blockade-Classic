#include "Consts.h"

IL2CPP::Il2CppClass* I18N::Consts::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("I18N.dll", "", "Consts");
	return il2cppclass;
}
mscorlib::System::Type* I18N::Consts::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
