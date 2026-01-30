#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Security_PrivateKeyFactory.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Security", "PrivateKeyFactory");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::CreateKey(IL2CPP::Array<uint8_t>* privateKeyInfoData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateKey", std::vector<std::string> { "System.Byte[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)privateKeyInfoData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::CreateKey(mscorlib::System::IO::Stream* inStr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateKey", std::vector<std::string> { "System.IO.Stream" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)inStr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::CreateKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateKey", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)keyInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::GetRawKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo, int32_t expectedSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRawKey", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)keyInfo;
	params[1] = (intptr_t)&expectedSize;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::DecryptKey(IL2CPP::Array<wchar_t>* passPhrase, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* encInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecryptKey", std::vector<std::string> { "System.Char[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Pkcs.EncryptedPrivateKeyInfo" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)passPhrase;
	params[1] = (intptr_t)encInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::DecryptKey(IL2CPP::Array<wchar_t>* passPhrase, IL2CPP::Array<uint8_t>* encryptedPrivateKeyInfoData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecryptKey", std::vector<std::string> { "System.Char[]", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)passPhrase;
	params[1] = (intptr_t)encryptedPrivateKeyInfoData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::DecryptKey(IL2CPP::Array<wchar_t>* passPhrase, mscorlib::System::IO::Stream* encryptedPrivateKeyInfoStream)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecryptKey", std::vector<std::string> { "System.Char[]", "System.IO.Stream" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)passPhrase;
	params[1] = (intptr_t)encryptedPrivateKeyInfoStream;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::DecryptKey(IL2CPP::Array<wchar_t>* passPhrase, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* asn1Object)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DecryptKey", std::vector<std::string> { "System.Char[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Object" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)passPhrase;
	params[1] = (intptr_t)asn1Object;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::EncryptKey(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, IL2CPP::Array<wchar_t>* passPhrase, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncryptKey", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier", "System.Char[]", "System.Byte[]", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)algorithm;
	params[1] = (intptr_t)passPhrase;
	params[2] = (intptr_t)salt;
	params[3] = (intptr_t)&iterationCount;
	params[4] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::PrivateKeyFactory::EncryptKey(mscorlib::System::String* algorithm, IL2CPP::Array<wchar_t>* passPhrase, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EncryptKey", std::vector<std::string> { "System.String", "System.Char[]", "System.Byte[]", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)algorithm;
	params[1] = (intptr_t)passPhrase;
	params[2] = (intptr_t)salt;
	params[3] = (intptr_t)&iterationCount;
	params[4] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
