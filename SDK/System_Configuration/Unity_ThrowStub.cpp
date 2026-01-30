#include "Unity_ThrowStub.h"

IL2CPP::Il2CppClass* System_Configuration::Unity::ThrowStub::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.Configuration.dll", "Unity", "ThrowStub");
	return il2cppclass;
}
mscorlib::System::Type* System_Configuration::Unity::ThrowStub::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System_Configuration::Unity::ThrowStub::ThrowNotSupportedException()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ThrowNotSupportedException");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
