#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Pkix_Rfc3281CertPathUtilities.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix", "Rfc3281CertPathUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert7(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* holderCertPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAttrCert7", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.IX509AttributeCertificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)attrCert;
	params[1] = (intptr_t)certPath;
	params[2] = (intptr_t)holderCertPath;
	params[3] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* issuerCert, mscorlib::System::DateTime validDate, mscorlib::System::Collections::IList* certPathCerts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCrls", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.IX509AttributeCertificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.DateTime", "System.Collections.IList" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)attrCert;
	params[1] = (intptr_t)paramsPKIX;
	params[2] = (intptr_t)issuerCert;
	params[3] = (intptr_t)&validDate;
	params[4] = (intptr_t)certPathCerts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::AdditionalChecks(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AdditionalChecks", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.IX509AttributeCertificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attrCert;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert5(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAttrCert5", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.IX509AttributeCertificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attrCert;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert4(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAttrCert4", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)acIssuerCert;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert3(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* acIssuerCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAttrCert3", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)acIssuerCert;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert2(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAttrCert2", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::ProcessAttrCert1(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessAttrCert1", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.IX509AttributeCertificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)attrCert;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::CheckCrl(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attrCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, mscorlib::System::DateTime validDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* issuerCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* certStatus, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, mscorlib::System::Collections::IList* certPathCerts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCrl", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.DistributionPoint", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.IX509AttributeCertificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.CertStatus", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.ReasonsMask", "System.Collections.IList" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)dp;
	params[1] = (intptr_t)attrCert;
	params[2] = (intptr_t)paramsPKIX;
	params[3] = (intptr_t)&validDate;
	params[4] = (intptr_t)issuerCert;
	params[5] = (intptr_t)certStatus;
	params[6] = (intptr_t)reasonMask;
	params[7] = (intptr_t)certPathCerts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3281CertPathUtilities::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
