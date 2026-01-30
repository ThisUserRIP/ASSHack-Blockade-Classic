#include "_Module_.h"

IL2CPP::Il2CppClass* DDebug::_Module_::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("DDebug.dll", "", "<Module>");
	return il2cppclass;
}
mscorlib::System::Type* DDebug::_Module_::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
