#include "Mono_Security_Cryptography_PKCS8_PrivateKeyInfo.h"

IL2CPP::Il2CppClass* mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::Mono::Security::Cryptography::PKCS8::GetIl2CppClass(), "PrivateKeyInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::_ctor(IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::get_PrivateKey()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_PrivateKey");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
void mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Decode(IL2CPP::Array<uint8_t>* data)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Decode", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)data;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::RemoveLeadingZero(IL2CPP::Array<uint8_t>* bigInt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveLeadingZero", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)bigInt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::Normalize(IL2CPP::Array<uint8_t>* bigInt, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Normalize", std::vector<std::string> { "System.Byte[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)bigInt;
	params[1] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeRSA(IL2CPP::Array<uint8_t>* keypair)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodeRSA", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)keypair;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
mscorlib::System::Security::Cryptography::DSA* mscorlib::Mono::Security::Cryptography::PKCS8_PrivateKeyInfo::DecodeDSA(IL2CPP::Array<uint8_t>* privateKey, mscorlib::System::Security::Cryptography::DSAParameters dsaParameters)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecodeDSA", std::vector<std::string> { "System.Byte[]", "System.Security.Cryptography.DSAParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)privateKey;
	params[1] = (intptr_t)&dsaParameters;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::DSA*)returnValue;
}
