#include "System_Reflection_Emit_AssemblyBuilder.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::Emit::AssemblyBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection.Emit", "AssemblyBuilder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::Emit::AssemblyBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
