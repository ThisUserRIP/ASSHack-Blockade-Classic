#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Security_DotNetUtilities.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Security", "DotNetUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509CertificateStructure* x509Struct)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToX509Certificate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509CertificateStructure" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x509Struct;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}
mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToX509Certificate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* x509Cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToX509Certificate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x509Cert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::FromX509Certificate(mscorlib::System::Security::Cryptography::X509Certificates::X509Certificate* x509Cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FromX509Certificate", std::vector<std::string> { "System.Security.Cryptography.X509Certificates.X509Certificate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)x509Cert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair(mscorlib::System::Security::Cryptography::DSA* dsa)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDsaKeyPair", std::vector<std::string> { "System.Security.Cryptography.DSA" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dsa;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetDsaKeyPair(mscorlib::System::Security::Cryptography::DSAParameters dp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDsaKeyPair", std::vector<std::string> { "System.Security.Cryptography.DSAParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey(mscorlib::System::Security::Cryptography::DSA* dsa)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDsaPublicKey", std::vector<std::string> { "System.Security.Cryptography.DSA" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dsa;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetDsaPublicKey(mscorlib::System::Security::Cryptography::DSAParameters dp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDsaPublicKey", std::vector<std::string> { "System.Security.Cryptography.DSAParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&dp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::DsaPublicKeyParameters*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair(mscorlib::System::Security::Cryptography::RSA* rsa)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRsaKeyPair", std::vector<std::string> { "System.Security.Cryptography.RSA" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rsa;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetRsaKeyPair(mscorlib::System::Security::Cryptography::RSAParameters rp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRsaKeyPair", std::vector<std::string> { "System.Security.Cryptography.RSAParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey(mscorlib::System::Security::Cryptography::RSA* rsa)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRsaPublicKey", std::vector<std::string> { "System.Security.Cryptography.RSA" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rsa;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetRsaPublicKey(mscorlib::System::Security::Cryptography::RSAParameters rp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetRsaPublicKey", std::vector<std::string> { "System.Security.Cryptography.RSAParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::GetKeyPair(mscorlib::System::Security::Cryptography::AsymmetricAlgorithm* privateKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeyPair", std::vector<std::string> { "System.Security.Cryptography.AsymmetricAlgorithm" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)privateKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRSA", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rsaKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey, mscorlib::System::Security::Cryptography::CspParameters* csp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRSA", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters", "System.Security.Cryptography.CspParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)rsaKey;
	params[1] = (intptr_t)csp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRSA", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)privKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey, mscorlib::System::Security::Cryptography::CspParameters* csp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRSA", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters", "System.Security.Cryptography.CspParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)privKey;
	params[1] = (intptr_t)csp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRSA", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Pkcs.RsaPrivateKeyStructure" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)privKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToRSA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey, mscorlib::System::Security::Cryptography::CspParameters* csp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRSA", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Pkcs.RsaPrivateKeyStructure", "System.Security.Cryptography.CspParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)privKey;
	params[1] = (intptr_t)csp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
mscorlib::System::Security::Cryptography::RSAParameters Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters* rsaKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRSAParameters", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)rsaKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::RSAParameters ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::RSAParameters));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::RSAParameters>(*(mscorlib::System::Security::Cryptography::RSAParameters*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Security::Cryptography::RSAParameters Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters* privKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRSAParameters", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.Parameters.RsaPrivateCrtKeyParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)privKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::RSAParameters ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::RSAParameters));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::RSAParameters>(*(mscorlib::System::Security::Cryptography::RSAParameters*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Security::Cryptography::RSAParameters Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ToRSAParameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Pkcs::RsaPrivateKeyStructure* privKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRSAParameters", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Pkcs.RsaPrivateKeyStructure" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)privKey;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Security::Cryptography::RSAParameters ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Security::Cryptography::RSAParameters));
		return ret;
	}
	return static_cast<mscorlib::System::Security::Cryptography::RSAParameters>(*(mscorlib::System::Security::Cryptography::RSAParameters*)il2cpp_object_unbox(returnValue));
}
IL2CPP::Array<uint8_t>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::ConvertRSAParametersField(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* n, int32_t size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertRSAParametersField", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Math.BigInteger", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)n;
	params[1] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider(mscorlib::System::Security::Cryptography::RSAParameters rp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRSAProvider", std::vector<std::string> { "System.Security.Cryptography.RSAParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&rp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
mscorlib::System::Security::Cryptography::RSA* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::DotNetUtilities::CreateRSAProvider(mscorlib::System::Security::Cryptography::RSAParameters rp, mscorlib::System::Security::Cryptography::CspParameters* csp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateRSAProvider", std::vector<std::string> { "System.Security.Cryptography.RSAParameters", "System.Security.Cryptography.CspParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&rp;
	params[1] = (intptr_t)csp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Security::Cryptography::RSA*)returnValue;
}
