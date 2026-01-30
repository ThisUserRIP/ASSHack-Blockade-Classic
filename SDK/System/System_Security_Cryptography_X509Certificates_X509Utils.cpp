#include "System_Security_Cryptography_X509Certificates_X509Utils.h"

IL2CPP::Il2CppClass* System::System::Security::Cryptography::X509Certificates::X509Utils::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Security.Cryptography.X509Certificates", "X509Utils");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Security::Cryptography::X509Certificates::X509Utils::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::String* System::System::Security::Cryptography::X509Certificates::X509Utils::FindOidInfo(uint32_t keyType, mscorlib::System::String* keyValue, System::Security::Cryptography::OidGroup oidGroup)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindOidInfo", std::vector<std::string> { "System.UInt32", "System.String", "System.Security.Cryptography.OidGroup" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&keyType;
	params[1] = (intptr_t)keyValue;
	params[2] = (intptr_t)&oidGroup;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* System::System::Security::Cryptography::X509Certificates::X509Utils::FindOidInfoWithFallback(uint32_t key, mscorlib::System::String* value, System::Security::Cryptography::OidGroup group)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindOidInfoWithFallback", std::vector<std::string> { "System.UInt32", "System.String", "System.Security.Cryptography.OidGroup" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&key;
	params[1] = (intptr_t)value;
	params[2] = (intptr_t)&group;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
