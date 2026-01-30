#include "Mono_Security_PKCS7_EncryptedData.h"

IL2CPP::Il2CppClass* Mono_Security::Mono::Security::PKCS7_EncryptedData::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Mono_Security::Mono::Security::PKCS7::GetIl2CppClass(), "EncryptedData");
	return il2cppclass;
}
mscorlib::System::Type* Mono_Security::Mono::Security::PKCS7_EncryptedData::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Mono_Security::Mono::Security::PKCS7_EncryptedData::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Mono_Security::Mono::Security::PKCS7_EncryptedData::_ctor(Mono_Security::Mono::Security::ASN1* asn1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Security.ASN1" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)asn1;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Mono_Security::Mono::Security::PKCS7_ContentInfo* Mono_Security::Mono::Security::PKCS7_EncryptedData::get_EncryptionAlgorithm()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EncryptionAlgorithm");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Mono_Security::Mono::Security::PKCS7_ContentInfo*)returnValue;
}
IL2CPP::Array<uint8_t>* Mono_Security::Mono::Security::PKCS7_EncryptedData::get_EncryptedContent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EncryptedContent");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
