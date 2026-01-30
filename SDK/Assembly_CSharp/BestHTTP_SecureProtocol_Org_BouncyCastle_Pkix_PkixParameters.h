#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { struct DateTimeObject; };
namespace mscorlib::System::Collections { struct IList; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct IX509Selector; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct X509CertStoreSelector; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix { struct PkixCertPathChecker; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store { struct IX509Store; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	struct PkixParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* date;
		mscorlib::System::Collections::IList* certPathCheckers;
		bool revocationEnabled;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* initialPolicies;
		bool explicitPolicyRequired;
		bool anyPolicyInhibited;
		bool policyMappingInhibited;
		bool policyQualifiersRejected;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* certSelector;
		mscorlib::System::Collections::IList* stores;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* selector;
		bool additionalLocationsEnabled;
		mscorlib::System::Collections::IList* additionalStores;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustedACIssuers;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* necessaryACAttributes;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* prohibitedACAttributes;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* attrCertCheckers;
		int32_t validityModel;
		bool useDeltas;
		struct StaticFields
		{
			int32_t PkixValidityModel;
			int32_t ChainValidityModel;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustAnchors);
		bool get_IsRevocationEnabled();
		void set_IsRevocationEnabled(bool value);
		bool get_IsExplicitPolicyRequired();
		void set_IsExplicitPolicyRequired(bool value);
		bool get_IsAnyPolicyInhibited();
		void set_IsAnyPolicyInhibited(bool value);
		bool get_IsPolicyMappingInhibited();
		void set_IsPolicyMappingInhibited(bool value);
		bool get_IsPolicyQualifiersRejected();
		void set_IsPolicyQualifiersRejected(bool value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_Date();
		void set_Date(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetTrustAnchors();
		void SetTrustAnchors(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* tas);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509CertStoreSelector* GetTargetCertConstraints();
		void SetTargetCertConstraints(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* selector);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetInitialPolicies();
		void SetInitialPolicies(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* initialPolicies);
		void SetCertPathCheckers(mscorlib::System::Collections::IList* checkers);
		mscorlib::System::Collections::IList* GetCertPathCheckers();
		void AddCertPathChecker(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixCertPathChecker* checker);
		mscorlib::System::Object* Clone();
		void SetParams(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix::PkixParameters* parameters);
		bool get_IsUseDeltasEnabled();
		void set_IsUseDeltasEnabled(bool value);
		int32_t get_ValidityModel();
		void set_ValidityModel(int32_t value);
		void SetStores(mscorlib::System::Collections::IList* stores);
		void AddStore(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* store);
		void AddAdditionalStore(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Store* store);
		mscorlib::System::Collections::IList* GetAdditionalStores();
		mscorlib::System::Collections::IList* GetStores();
		bool get_IsAdditionalLocationsEnabled();
		void SetAdditionalLocationsEnabled(bool enabled);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* GetTargetConstraints();
		void SetTargetConstraints(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::IX509Selector* selector);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetTrustedACIssuers();
		void SetTrustedACIssuers(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* trustedACIssuers);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetNecessaryACAttributes();
		void SetNecessaryACAttributes(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* necessaryACAttributes);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetProhibitedACAttributes();
		void SetProhibitedACAttributes(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* prohibitedACAttributes);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* GetAttrCertCheckers();
		void SetAttrCertCheckers(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* attrCertCheckers);
	};
}

