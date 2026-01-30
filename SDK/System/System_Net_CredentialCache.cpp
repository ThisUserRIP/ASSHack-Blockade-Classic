#include "System_Net_CredentialCache.h"

IL2CPP::Il2CppClass* System::System::Net::CredentialCache::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Net", "CredentialCache");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::CredentialCache::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
System::System::Net::ICredentials* System::System::Net::CredentialCache::get_DefaultCredentials()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DefaultCredentials");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Net::ICredentials*)returnValue;
}
