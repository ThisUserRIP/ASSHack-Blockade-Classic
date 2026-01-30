#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Ocsp_OcspReqGenerator_RequestObject.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::OcspReqGenerator::GetIl2CppClass(), "RequestObject");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::CertificateID* certId, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Extensions* extensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Ocsp.CertificateID", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509Extensions" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certId;
	params[1] = (intptr_t)extensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::Request* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Ocsp::OcspReqGenerator_RequestObject::ToRequest()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToRequest");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ocsp::Request*)returnValue;
}
