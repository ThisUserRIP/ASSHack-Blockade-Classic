#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Ocsp_BasicOcspRespGenerator_ResponseObject.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator::GetIl2CppClass(), "ResponseObject");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certId, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, mscorlib::System::DateTime thisUpdate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateID", "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateStatus", "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509Extensions" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)certId;
	params[1] = (intptr_t)certStatus;
	params[2] = (intptr_t)&thisUpdate;
	params[3] = (intptr_t)extensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certId, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, mscorlib::System::DateTime thisUpdate, mscorlib::System::DateTime nextUpdate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateID", "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateStatus", "System.DateTime", "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509Extensions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)certId;
	params[1] = (intptr_t)certStatus;
	params[2] = (intptr_t)&thisUpdate;
	params[3] = (intptr_t)&nextUpdate;
	params[4] = (intptr_t)extensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certId, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateStatus* certStatus, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* thisUpdate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* nextUpdate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateID", "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateStatus", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerGeneralizedTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerGeneralizedTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509Extensions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)certId;
	params[1] = (intptr_t)certStatus;
	params[2] = (intptr_t)thisUpdate;
	params[3] = (intptr_t)nextUpdate;
	params[4] = (intptr_t)extensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::SingleResponse* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::BasicOcspRespGenerator_ResponseObject::ToResponse()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToResponse");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::SingleResponse*)returnValue;
}
