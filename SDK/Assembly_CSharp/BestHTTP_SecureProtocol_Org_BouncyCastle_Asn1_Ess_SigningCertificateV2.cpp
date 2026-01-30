#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Ess_SigningCertificateV2.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Ess", "SigningCertificateV2");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetInstance(mscorlib::System::Object* o)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetInstance", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)o;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Sequence" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)seq;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::EssCertIDv2* cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Ess.EssCertIDv2" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor(IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>* certs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Ess.EssCertIDv2[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)certs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::_ctor(IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>* certs, IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::PolicyInformation*>* policies)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Ess.EssCertIDv2[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.PolicyInformation[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certs;
	params[1] = (intptr_t)policies;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetCerts()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCerts");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::EssCertIDv2*>*)returnValue;
}
IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::PolicyInformation*>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::GetPolicies()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetPolicies");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::PolicyInformation*>*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Ess::SigningCertificateV2::ToAsn1Object()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToAsn1Object");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*)returnValue;
}
