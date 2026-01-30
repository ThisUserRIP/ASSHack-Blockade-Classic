#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Pkix_PkixCertPathValidatorUtilities.h"

IL2CPP::Il2CppClass* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix", "PkixCertPathValidatorUtilities");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindTrustAnchor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindTrustAnchor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cert;
	params[1] = (intptr_t)trustAnchors;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor*)returnValue;
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsIssuerTrustAnchor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsIssuerTrustAnchor", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cert;
	params[1] = (intptr_t)trustAnchors;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromAltNames(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAdditionalStoresFromAltNames", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cert;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::DateTime Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidDate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValidDate", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)paramsPKIX;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetIssuerPrincipal(mscorlib::System::Object* cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIssuerPrincipal", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name*)returnValue;
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsSelfIssued(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsSelfIssued", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetAlgorithmIdentifier(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAlgorithmIdentifier", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Crypto.AsymmetricKeyParameter" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)key;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*)returnValue;
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::IsAnyPolicy(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* policySet)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IsAnyPolicy", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)policySet;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoreFromLocation(mscorlib::System::String* location, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAdditionalStoreFromLocation", std::vector<std::string> { "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)location;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetSerialNumber(mscorlib::System::Object* cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSerialNumber", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cert;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetQualifierSet(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* qualifiers)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetQualifierSet", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.Asn1Sequence" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)qualifiers;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNode(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* _node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemovePolicyNode", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode", "System.Collections.IList[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)validPolicyTree;
	params[1] = (intptr_t)policyNodes;
	params[2] = (intptr_t)_node;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::RemovePolicyNodeRecurse(IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* _node)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemovePolicyNodeRecurse", std::vector<std::string> { "System.Collections.IList[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)policyNodes;
	params[1] = (intptr_t)_node;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB1(int32_t i, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, mscorlib::System::String* id_p, mscorlib::System::Collections::IDictionary* m_idp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertB1", std::vector<std::string> { "System.Int32", "System.Collections.IList[]", "System.String", "System.Collections.IDictionary", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)policyNodes;
	params[2] = (intptr_t)id_p;
	params[3] = (intptr_t)m_idp;
	params[4] = (intptr_t)cert;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::PrepareNextCertB2(int32_t i, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, mscorlib::System::String* id_p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrepareNextCertB2", std::vector<std::string> { "System.Int32", "System.Collections.IList[]", "System.String", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixPolicyNode" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)policyNodes;
	params[2] = (intptr_t)id_p;
	params[3] = (intptr_t)validPolicyTree;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCertStatus(mscorlib::System::DateTime validDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl, mscorlib::System::Object* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* certStatus)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCertStatus", std::vector<std::string> { "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl", "System.Object", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.CertStatus" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&validDate;
	params[1] = (intptr_t)crl;
	params[2] = (intptr_t)cert;
	params[3] = (intptr_t)certStatus;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetNextWorkingKey(mscorlib::System::Collections::IList* certs, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNextWorkingKey", std::vector<std::string> { "System.Collections.IList", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certs;
	params[1] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter*)returnValue;
}
mscorlib::System::DateTime Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetValidCertDateFromValidityModel(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetValidCertDateFromValidityModel", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixCertPath", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)paramsPkix;
	params[1] = (intptr_t)certPath;
	params[2] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::DateTime ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::DateTime));
		return ret;
	}
	return static_cast<mscorlib::System::DateTime>(*(mscorlib::System::DateTime*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::ICollection* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* certSelect, mscorlib::System::Collections::IList* certStores)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindCertificates", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store.X509CertStoreSelector", "System.Collections.IList" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certSelect;
	params[1] = (intptr_t)certStores;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ICollection*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCrlIssuersFromDistributionPoint(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, mscorlib::System::Collections::ICollection* issuerPrincipals, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* selector, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCrlIssuersFromDistributionPoint", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.DistributionPoint", "System.Collections.ICollection", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store.X509CrlStoreSelector", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)dp;
	params[1] = (intptr_t)issuerPrincipals;
	params[2] = (intptr_t)selector;
	params[3] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetCompleteCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, mscorlib::System::Object* cert, mscorlib::System::DateTime currentDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetCompleteCrls", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.DistributionPoint", "System.Object", "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)dp;
	params[1] = (intptr_t)cert;
	params[2] = (intptr_t)&currentDate;
	params[3] = (intptr_t)paramsPKIX;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetDeltaCrls(mscorlib::System::DateTime currentDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* completeCRL)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetDeltaCrls", std::vector<std::string> { "System.DateTime", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters", "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&currentDate;
	params[1] = (intptr_t)paramsPKIX;
	params[2] = (intptr_t)completeCRL;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet*)returnValue;
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::isDeltaCrl(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "isDeltaCrl", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Crl" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)crl;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Collections::ICollection* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindCertificates(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* certSelect, mscorlib::System::Collections::IList* certStores)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindCertificates", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.Store.X509AttrCertStoreSelector", "System.Collections.IList" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)certSelect;
	params[1] = (intptr_t)certStores;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ICollection*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::AddAdditionalStoresFromCrlDistributionPoint(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlDistPoint* crldp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddAdditionalStoresFromCrlDistributionPoint", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.X509.CrlDistPoint", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)crldp;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1i(int32_t index, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* pOid, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* pq)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCertD1i", std::vector<std::string> { "System.Int32", "System.Collections.IList[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)policyNodes;
	params[2] = (intptr_t)pOid;
	params[3] = (intptr_t)pq;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::ProcessCertD1ii(int32_t index, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* _poid, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* _pq)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessCertD1ii", std::vector<std::string> { "System.Int32", "System.Collections.IList[]", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier", "BestHTTP.SecureProtocol.Org.BouncyCastle.Utilities.Collections.ISet" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)policyNodes;
	params[2] = (intptr_t)_poid;
	params[3] = (intptr_t)_pq;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::ICollection* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::FindIssuerCerts(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FindIssuerCerts", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.X509Certificate", "BestHTTP.SecureProtocol.Org.BouncyCastle.Pkix.PkixBuilderParameters" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)cert;
	params[1] = (intptr_t)pkixParams;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::ICollection*)returnValue;
}
Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::GetExtensionValue(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509Extension* ext, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetExtensionValue", std::vector<std::string> { "BestHTTP.SecureProtocol.Org.BouncyCastle.X509.IX509Extension", "BestHTTP.SecureProtocol.Org.BouncyCastle.Asn1.DerObjectIdentifier" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)ext;
	params[1] = (intptr_t)oid;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object*)returnValue;
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathValidatorUtilities::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
