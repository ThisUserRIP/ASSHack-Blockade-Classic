#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixCrlUtilities; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct TrustAnchor; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Certificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixParameters; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509Name; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Sequence; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixPolicyNode; };
namespace mscorlib::System::Collections { struct IList; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct X509Crl; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct CertStatus; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixCertPath; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct X509CertStoreSelector; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct DistributionPoint; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct X509CrlStoreSelector; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct X509AttrCertStoreSelector; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct CrlDistPoint; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixBuilderParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct IX509Extension; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	struct PkixCertPathValidatorUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCrlUtilities* CrlUtilities;
			mscorlib::System::String* ANY_POLICY;
			mscorlib::System::String* CRL_NUMBER;
			int32_t KEY_CERT_SIGN;
			int32_t CRL_SIGN;
			IL2CPP::Array<mscorlib::System::String*>* crlReasons;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::TrustAnchor* FindTrustAnchor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors);
		static bool IsIssuerTrustAnchor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors);
		static void AddAdditionalStoresFromAltNames(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static mscorlib::System::DateTime GetValidDate(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* GetIssuerPrincipal(mscorlib::System::Object* cert);
		static bool IsSelfIssued(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* GetAlgorithmIdentifier(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* key);
		static bool IsAnyPolicy(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* policySet);
		static void AddAdditionalStoreFromLocation(mscorlib::System::String* location, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* GetSerialNumber(mscorlib::System::Object* cert);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetQualifierSet(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* qualifiers);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* RemovePolicyNode(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* _node);
		static void RemovePolicyNodeRecurse(IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* _node);
		static void PrepareNextCertB1(int32_t i, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, mscorlib::System::String* id_p, mscorlib::System::Collections::IDictionary* m_idp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* PrepareNextCertB2(int32_t i, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, mscorlib::System::String* id_p, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixPolicyNode* validPolicyTree);
		static void GetCertStatus(mscorlib::System::DateTime validDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl, mscorlib::System::Object* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::CertStatus* certStatus);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* GetNextWorkingKey(mscorlib::System::Collections::IList* certs, int32_t index);
		static mscorlib::System::DateTime GetValidCertDateFromValidityModel(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPkix, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPath* certPath, int32_t index);
		static mscorlib::System::Collections::ICollection* FindCertificates(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* certSelect, mscorlib::System::Collections::IList* certStores);
		static void GetCrlIssuersFromDistributionPoint(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, mscorlib::System::Collections::ICollection* issuerPrincipals, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CrlStoreSelector* selector, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetCompleteCrls(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::DistributionPoint* dp, mscorlib::System::Object* cert, mscorlib::System::DateTime currentDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetDeltaCrls(mscorlib::System::DateTime currentDate, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* paramsPKIX, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* completeCRL);
		static bool isDeltaCrl(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Crl* crl);
		static mscorlib::System::Collections::ICollection* FindCertificates(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* certSelect, mscorlib::System::Collections::IList* certStores);
		static void AddAdditionalStoresFromCrlDistributionPoint(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::CrlDistPoint* crldp, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* pkixParams);
		static bool ProcessCertD1i(int32_t index, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* pOid, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* pq);
		static void ProcessCertD1ii(int32_t index, IL2CPP::Array<mscorlib::System::Collections::IList*>* policyNodes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* _poid, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* _pq);
		static mscorlib::System::Collections::ICollection* FindIssuerCerts(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::X509Certificate* cert, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixBuilderParameters* pkixParams);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* GetExtensionValue(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509Extension* ext, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
		void _ctor();
		static void _cctor();
	};
}

