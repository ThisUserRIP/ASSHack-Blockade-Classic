#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Sequence; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct GeneralName; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct GeneralSubtree; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkix
{
	struct PkixNameConstraintValidator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesDN;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesDNS;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesEmail;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesURI;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excludedSubtreesIP;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesDN;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesDNS;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesEmail;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesURI;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permittedSubtreesIP;
		void _ctor();
		static bool WithinDNSubtree(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* dns, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* subtree);
		void CheckPermittedDN(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* dns);
		void CheckExcludedDN(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* dns);
		void CheckPermittedDN(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* dns);
		void CheckExcludedDN(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* dns);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* IntersectDN(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* dns);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* UnionDN(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* dn);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* IntersectEmail(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* emails);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* UnionEmail(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, mscorlib::System::String* email);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* IntersectIP(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* ips);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* UnionIP(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, IL2CPP::Array<uint8_t>* ip);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* UnionIPRange(IL2CPP::Array<uint8_t>* ipWithSubmask1, IL2CPP::Array<uint8_t>* ipWithSubmask2);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* IntersectIPRange(IL2CPP::Array<uint8_t>* ipWithSubmask1, IL2CPP::Array<uint8_t>* ipWithSubmask2);
		IL2CPP::Array<uint8_t>* IpWithSubnetMask(IL2CPP::Array<uint8_t>* ip, IL2CPP::Array<uint8_t>* subnetMask);
		IL2CPP::Array<IL2CPP::Array<uint8_t>*>* ExtractIPsAndSubnetMasks(IL2CPP::Array<uint8_t>* ipWithSubmask1, IL2CPP::Array<uint8_t>* ipWithSubmask2);
		IL2CPP::Array<IL2CPP::Array<uint8_t>*>* MinMaxIPs(IL2CPP::Array<uint8_t>* ip1, IL2CPP::Array<uint8_t>* subnetmask1, IL2CPP::Array<uint8_t>* ip2, IL2CPP::Array<uint8_t>* subnetmask2);
		void CheckPermittedEmail(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, mscorlib::System::String* email);
		void CheckExcludedEmail(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, mscorlib::System::String* email);
		void CheckPermittedIP(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, IL2CPP::Array<uint8_t>* ip);
		void checkExcludedIP(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, IL2CPP::Array<uint8_t>* ip);
		bool IsIPConstrained(IL2CPP::Array<uint8_t>* ip, IL2CPP::Array<uint8_t>* constraint);
		bool EmailIsConstrained(mscorlib::System::String* email, mscorlib::System::String* constraint);
		bool WithinDomain(mscorlib::System::String* testDomain, mscorlib::System::String* domain);
		void CheckPermittedDNS(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, mscorlib::System::String* dns);
		void checkExcludedDNS(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, mscorlib::System::String* dns);
		void unionEmail(mscorlib::System::String* email1, mscorlib::System::String* email2, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* union_);
		void unionURI(mscorlib::System::String* email1, mscorlib::System::String* email2, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* union_);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* intersectDNS(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* dnss);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* unionDNS(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, mscorlib::System::String* dns);
		void intersectEmail(mscorlib::System::String* email1, mscorlib::System::String* email2, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* intersect);
		void checkExcludedURI(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, mscorlib::System::String* uri);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* intersectURI(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* uris);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* unionURI(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* excluded, mscorlib::System::String* uri);
		void intersectURI(mscorlib::System::String* email1, mscorlib::System::String* email2, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* intersect);
		void CheckPermittedURI(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* permitted, mscorlib::System::String* uri);
		bool IsUriConstrained(mscorlib::System::String* uri, mscorlib::System::String* constraint);
		static mscorlib::System::String* ExtractHostFromURL(mscorlib::System::String* url);
		void checkPermitted(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* name);
		void checkExcluded(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* name);
		void IntersectPermittedSubtree(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* permitted);
		mscorlib::System::String* ExtractNameAsString(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* name);
		void IntersectEmptyPermittedSubtree(int32_t nameType);
		void AddExcludedSubtree(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralSubtree* subtree);
		static IL2CPP::Array<uint8_t>* Max(IL2CPP::Array<uint8_t>* ip1, IL2CPP::Array<uint8_t>* ip2);
		static IL2CPP::Array<uint8_t>* Min(IL2CPP::Array<uint8_t>* ip1, IL2CPP::Array<uint8_t>* ip2);
		static int32_t CompareTo(IL2CPP::Array<uint8_t>* ip1, IL2CPP::Array<uint8_t>* ip2);
		static IL2CPP::Array<uint8_t>* Or(IL2CPP::Array<uint8_t>* ip1, IL2CPP::Array<uint8_t>* ip2);
		int32_t HashCode();
		int32_t GetHashCode();
		int32_t HashCollection(mscorlib::System::Collections::ICollection* coll);
		bool Equals(mscorlib::System::Object* o);
		bool CollectionsAreEqual(mscorlib::System::Collections::ICollection* coll1, mscorlib::System::Collections::ICollection* coll2);
		bool SpecialEquals(mscorlib::System::Object* o1, mscorlib::System::Object* o2);
		mscorlib::System::String* StringifyIP(IL2CPP::Array<uint8_t>* ip);
		mscorlib::System::String* StringifyIPCollection(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* ips);
		mscorlib::System::String* ToString();
	};
}

