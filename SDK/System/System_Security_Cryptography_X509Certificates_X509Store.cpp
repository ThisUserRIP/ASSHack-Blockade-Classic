#include "System_Security_Cryptography_X509Certificates_X509Store.h"

IL2CPP::Il2CppClass* System::System::Security::Cryptography::X509Certificates::X509Store::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509Store");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Security::Cryptography::X509Certificates::X509Store::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Security::Cryptography::X509Certificates::X509Store::Close()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Close");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
