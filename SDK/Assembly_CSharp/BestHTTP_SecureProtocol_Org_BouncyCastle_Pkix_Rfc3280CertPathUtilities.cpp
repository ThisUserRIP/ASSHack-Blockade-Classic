#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Pkix_Rfc3280CertPathUtilities.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix", "Rfc3280CertPathUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB2(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, mscorlib::System::Object* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlB2", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.DistributionPoint", "System.Object", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dp;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)crl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertBC(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCertBC", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixNameConstraintValidator" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)nameConstraintValidator;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertA", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertD(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, int32_t inhibitAnyPolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCertD", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode", "System.Collections.IList[]", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)acceptablePolicies;
	params[3] = (intptr_t)validPolicyTree;
	params[4] = (intptr_t)policyNodes;
	params[5] = (intptr_t)&inhibitAnyPolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlB1(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, mscorlib::System::Object* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlB1", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.DistributionPoint", "System.Object", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)dp;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)crl;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlD(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlD", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.DistributionPoint" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)crl;
	params[1] = (intptr_t)dp;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlF(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl, mscorlib::System::Object* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, mscorlib::System::Collections::IList* certPathCerts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlF", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl", "System.Object", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "System.Collections.IList" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)crl;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)defaultCRLSignCert;
	params[3] = (intptr_t)defaultCRLSignKey;
	params[4] = (intptr_t)paramsPKIX;
	params[5] = (intptr_t)certPathCerts;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlG(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* keys)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlG", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)crl;
	params[1] = (intptr_t)keys;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlH(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* deltaCrls, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlH", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)deltaCrls;
	params[1] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrl(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::DateTime validDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* defaultCRLSignCert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* defaultCRLSignKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* certStatus, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::ReasonsMask* reasonMask, mscorlib::System::Collections::IList* certPathCerts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCrl", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.DistributionPoint", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.CertStatus", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.ReasonsMask", "System.Collections.IList" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)dp;
	params[1] = (intptr_t)paramsPKIX;
	params[2] = (intptr_t)cert;
	params[3] = (intptr_t)&validDate;
	params[4] = (intptr_t)defaultCRLSignCert;
	params[5] = (intptr_t)defaultCRLSignKey;
	params[6] = (intptr_t)certStatus;
	params[7] = (intptr_t)reasonMask;
	params[8] = (intptr_t)certPathCerts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::CheckCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, mscorlib::System::DateTime validDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* sign, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey, mscorlib::System::Collections::IList* certPathCerts)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCrls", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "System.Collections.IList" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)paramsPKIX;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)&validDate;
	params[3] = (intptr_t)sign;
	params[4] = (intptr_t)workingPublicKey;
	params[5] = (intptr_t)certPathCerts;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareCertB(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t policyMapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareCertB", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Collections.IList[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)policyNodes;
	params[3] = (intptr_t)validPolicyTree;
	params[4] = (intptr_t)&policyMapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*)returnValue;
}
IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*>* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1ii(mscorlib::System::DateTime currentDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlA1ii", std::vector<std::string> { "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&currentDate;
	params[1] = (intptr_t)paramsPKIX;
	params[2] = (intptr_t)cert;
	params[3] = (intptr_t)crl;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*>*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlA1i(mscorlib::System::DateTime currentDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlA1i", std::vector<std::string> { "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&currentDate;
	params[1] = (intptr_t)paramsPKIX;
	params[2] = (intptr_t)cert;
	params[3] = (intptr_t)crl;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertF(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, int32_t explicitPolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCertF", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)validPolicyTree;
	params[3] = (intptr_t)&explicitPolicy;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertA(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, int32_t index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* workingPublicKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* workingIssuerName, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* sign)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCertA", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.X509Name", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)paramsPKIX;
	params[2] = (intptr_t)&index;
	params[3] = (intptr_t)workingPublicKey;
	params[4] = (intptr_t)workingIssuerName;
	params[5] = (intptr_t)sign;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI1(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertI1", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&explicitPolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertI2(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertI2", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&policyMapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertG(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixNameConstraintValidator* nameConstraintValidator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertG", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixNameConstraintValidator" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)nameConstraintValidator;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertJ(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertJ", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&inhibitAnyPolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertK(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertK", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertL(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertL", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&maxPathLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertM(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t maxPathLength)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertM", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&maxPathLength;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertN(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertN", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertO(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions, mscorlib::System::Collections::IList* pathCheckers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertO", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet", "System.Collections.IList" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)criticalExtensions;
	params[3] = (intptr_t)pathCheckers;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH1(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertH1", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&explicitPolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH2(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t policyMapping)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertH2", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&policyMapping;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::PrepareNextCertH3(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t inhibitAnyPolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertH3", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&inhibitAnyPolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertA(int32_t explicitPolicy, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WrapupCertA", std::vector<std::string> { "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&explicitPolicy;
	params[1] = (intptr_t)cert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertB(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, int32_t explicitPolicy)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WrapupCertB", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)&explicitPolicy;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertF(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, mscorlib::System::Collections::IList* pathCheckers, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* criticalExtensions)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WrapupCertF", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "System.Collections.IList", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)pathCheckers;
	params[3] = (intptr_t)criticalExtensions;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::WrapupCertG(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* userInitialPolicySet, int32_t index, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* acceptablePolicies)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WrapupCertG", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet", "System.Int32", "System.Collections.IList[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)paramsPKIX;
	params[2] = (intptr_t)userInitialPolicySet;
	params[3] = (intptr_t)&index;
	params[4] = (intptr_t)policyNodes;
	params[5] = (intptr_t)validPolicyTree;
	params[6] = (intptr_t)acceptablePolicies;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlC(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* deltaCRL, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* completeCRL, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlC", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)deltaCRL;
	params[1] = (intptr_t)completeCRL;
	params[2] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlI(mscorlib::System::DateTime validDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* deltacrl, mscorlib::System::Object* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* certStatus, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlI", std::vector<std::string> { "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl", "System.Object", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.CertStatus", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&validDate;
	params[1] = (intptr_t)deltacrl;
	params[2] = (intptr_t)cert;
	params[3] = (intptr_t)certStatus;
	params[4] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCrlJ(mscorlib::System::DateTime validDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* completecrl, mscorlib::System::Object* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* certStatus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCrlJ", std::vector<std::string> { "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl", "System.Object", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.CertStatus" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&validDate;
	params[1] = (intptr_t)completecrl;
	params[2] = (intptr_t)cert;
	params[3] = (intptr_t)certStatus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::ProcessCertE(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCertE", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)certPath;
	params[1] = (intptr_t)&index;
	params[2] = (intptr_t)validPolicyTree;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::Rfc3280CertPathUtilities::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
