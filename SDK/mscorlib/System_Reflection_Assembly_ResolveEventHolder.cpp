#include "System_Reflection_Assembly_ResolveEventHolder.h"

IL2CPP::Il2CppClass* mscorlib::System::Reflection::Assembly_ResolveEventHolder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Reflection::Assembly::GetIl2CppClass(), "ResolveEventHolder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Reflection::Assembly_ResolveEventHolder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Reflection::Assembly_ResolveEventHolder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
