#include "System_Reflection_Emit_ParameterBuilder.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::Emit::ParameterBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Reflection.Emit", "ParameterBuilder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::Emit::ParameterBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
