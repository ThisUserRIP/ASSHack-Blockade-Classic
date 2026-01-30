#include "Rewired_Data_ConfigVars_PlatformVars.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::ConfigVars_PlatformVars::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Data::ConfigVars::GetIl2CppClass(), "PlatformVars");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::ConfigVars_PlatformVars::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Data::ConfigVars_PlatformVars::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
