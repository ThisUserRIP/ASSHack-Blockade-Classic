#include "System_Security_Cryptography_X509Certificates_PublicKey.h"

IL2CPP::Il2CppClass* System::System::Security::Cryptography::X509Certificates::PublicKey::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("System.dll", "System.Security.Cryptography.X509Certificates", "PublicKey");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Security::Cryptography::X509Certificates::PublicKey::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Security::Cryptography::X509Certificates::PublicKey::_ctor(Mono_Security::Mono::Security::X509::X509Certificate* certificate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Mono.Security.X509.X509Certificate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)certificate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
System::System::Security::Cryptography::AsnEncodedData* System::System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedKeyValue()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EncodedKeyValue");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Security::Cryptography::AsnEncodedData*)returnValue;
}
System::System::Security::Cryptography::AsnEncodedData* System::System::Security::Cryptography::X509Certificates::PublicKey::get_EncodedParameters()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EncodedParameters");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Security::Cryptography::AsnEncodedData*)returnValue;
}
mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* System::System::Security::Cryptography::X509Certificates::PublicKey::get_Key()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Key");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::AsymmetricAlgorithm*)returnValue;
}
System::System::Security::Cryptography::Oid* System::System::Security::Cryptography::X509Certificates::PublicKey::get_Oid()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Oid");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (System::Security::Cryptography::Oid*)returnValue;
}
IL2CPP::Array<uint8_t>* System::System::Security::Cryptography::X509Certificates::PublicKey::GetUnsignedBigInteger(IL2CPP::Array<uint8_t>* integer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUnsignedBigInteger", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)integer;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::Security::Cryptography::DSA* System::System::Security::Cryptography::X509Certificates::PublicKey::DecodeDSA(IL2CPP::Array<uint8_t>* rawPublicKey, IL2CPP::Array<uint8_t>* rawParameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodeDSA", std::vector<std::string> { "System.Byte[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rawPublicKey;
	params[1] = (intptr_t)rawParameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::DSA*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* System::System::Security::Cryptography::X509Certificates::PublicKey::DecodeRSA(IL2CPP::Array<uint8_t>* rawPublicKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodeRSA", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rawPublicKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
void System::System::Security::Cryptography::X509Certificates::PublicKey::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
