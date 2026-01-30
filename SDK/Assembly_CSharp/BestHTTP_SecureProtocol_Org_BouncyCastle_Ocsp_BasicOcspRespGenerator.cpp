#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Ocsp_BasicOcspRespGenerator.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp", "BasicOcspRespGenerator");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::RespID* responderID)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.RespID" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)responderID;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* publicKey)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)publicKey;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddResponse", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateID", "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateStatus" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certID;
	params[1] = (intptr_t)certStatus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddResponse", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateID", "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateStatus", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509Extensions" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certID;
	params[1] = (intptr_t)certStatus;
	params[2] = (intptr_t)singleExtensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, mscorlib::System::DateTime nextUpdate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddResponse", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateID", "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateStatus", "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509Extensions" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)certID;
	params[1] = (intptr_t)certStatus;
	params[2] = (intptr_t)&nextUpdate;
	params[3] = (intptr_t)singleExtensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::AddResponse(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, mscorlib::System::DateTime thisUpdate, mscorlib::System::DateTime nextUpdate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* singleExtensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddResponse", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateID", "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateStatus", "System.DateTime", "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509Extensions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)certID;
	params[1] = (intptr_t)certStatus;
	params[2] = (intptr_t)&thisUpdate;
	params[3] = (intptr_t)&nextUpdate;
	params[4] = (intptr_t)singleExtensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::SetResponseExtensions(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* responseExtensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetResponseExtensions", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509Extensions" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)responseExtensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::GenerateResponse(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculator, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*>* chain, mscorlib::System::DateTime producedAt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GenerateResponse", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ISignatureFactory", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate[]", "System.DateTime" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)signatureCalculator;
	params[1] = (intptr_t)chain;
	params[2] = (intptr_t)&producedAt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate(mscorlib::System::String* signingAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*>* chain, mscorlib::System::DateTime thisUpdate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate[]", "System.DateTime" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)signingAlgorithm;
	params[1] = (intptr_t)privateKey;
	params[2] = (intptr_t)chain;
	params[3] = (intptr_t)&thisUpdate;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate(mscorlib::System::String* signingAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*>* chain, mscorlib::System::DateTime producedAt, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate[]", "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Security.SecureRandom" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)signingAlgorithm;
	params[1] = (intptr_t)privateKey;
	params[2] = (intptr_t)chain;
	params[3] = (intptr_t)&producedAt;
	params[4] = (intptr_t)random;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::Generate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISignatureFactory* signatureCalculatorFactory, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate*>* chain, mscorlib::System::DateTime producedAt)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Generate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.ISignatureFactory", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate[]", "System.DateTime" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)signatureCalculatorFactory;
	params[1] = (intptr_t)chain;
	params[2] = (intptr_t)&producedAt;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspResp*)returnValue;
}
mscorlib::System::Collections::IEnumerable* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::get_SignatureAlgNames()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_SignatureAlgNames");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::IEnumerable*)returnValue;
}
