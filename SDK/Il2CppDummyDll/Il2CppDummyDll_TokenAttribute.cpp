#include "Il2CppDummyDll_TokenAttribute.h"

IL2CPP::Il2CppClass* Il2CppDummyDll::Il2CppDummyDll::TokenAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Il2CppDummyDll.dll", "Il2CppDummyDll", "TokenAttribute");
	return il2cppclass;
}
mscorlib::System::Type* Il2CppDummyDll::Il2CppDummyDll::TokenAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Il2CppDummyDll::Il2CppDummyDll::TokenAttribute::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
