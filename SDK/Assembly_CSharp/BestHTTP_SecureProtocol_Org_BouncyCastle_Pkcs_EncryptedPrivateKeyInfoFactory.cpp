#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Pkcs_EncryptedPrivateKeyInfoFactory.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkcs", "EncryptedPrivateKeyInfoFactory");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithm, IL2CPP::Array<wchar_t>* passPhrase, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEncryptedPrivateKeyInfo", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier", "System.Char[]", "System.Byte[]", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
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
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(mscorlib::System::String* algorithm, IL2CPP::Array<wchar_t>* passPhrase, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEncryptedPrivateKeyInfo", std::vector<std::string> { "System.String", "System.Char[]", "System.Byte[]", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
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
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs::EncryptedPrivateKeyInfoFactory::CreateEncryptedPrivateKeyInfo(mscorlib::System::String* algorithm, IL2CPP::Array<wchar_t>* passPhrase, IL2CPP::Array<uint8_t>* salt, int32_t iterationCount, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::PrivateKeyInfo* keyInfo)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateEncryptedPrivateKeyInfo", std::vector<std::string> { "System.String", "System.Char[]", "System.Byte[]", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Pkcs.PrivateKeyInfo" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)algorithm;
	params[1] = (intptr_t)passPhrase;
	params[2] = (intptr_t)salt;
	params[3] = (intptr_t)&iterationCount;
	params[4] = (intptr_t)keyInfo;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::EncryptedPrivateKeyInfo*)returnValue;
}
