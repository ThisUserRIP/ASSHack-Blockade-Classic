#include "System_Security_Cryptography_CAPI.h"

IL2CPP::Il2CppClass* System::System::Security::Cryptography::CAPI::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Security.Cryptography", "CAPI");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Security::Cryptography::CAPI::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::System::Security::Cryptography::CAPI::CryptFindOIDInfoNameFromKey(mscorlib::System::String* key, System::Security::Cryptography::OidGroup oidGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CryptFindOIDInfoNameFromKey", std::vector<std::string> { "System.String", "System.Security.Cryptography.OidGroup" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)key;
	params[1] = (intptr_t)&oidGroup;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::Security::Cryptography::CAPI::CryptFindOIDInfoKeyFromName(mscorlib::System::String* name, System::Security::Cryptography::OidGroup oidGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CryptFindOIDInfoKeyFromName", std::vector<std::string> { "System.String", "System.Security.Cryptography.OidGroup" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&oidGroup;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
