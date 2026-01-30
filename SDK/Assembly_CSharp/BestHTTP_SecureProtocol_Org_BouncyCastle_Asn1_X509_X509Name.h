#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Encodable.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Collections { struct IList; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct X509NameEntryConverter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Sequence; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1TaggedObject; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };
namespace mscorlib::System::Text { struct StringBuilder; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509
{
	struct X509Name : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IList* ordering;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter;
		mscorlib::System::Collections::IList* values;
		mscorlib::System::Collections::IList* added;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq;
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* C;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* O;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* OU;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* T;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CN;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Street;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* SerialNumber;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* L;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* ST;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Surname;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* GivenName;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Initials;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Generation;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* UniqueIdentifier;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* BusinessCategory;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* PostalCode;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* DnQualifier;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Pseudonym;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* DateOfBirth;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* PlaceOfBirth;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Gender;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CountryOfCitizenship;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* CountryOfResidence;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* NameAtBirth;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* PostalAddress;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* DmdName;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* TelephoneNumber;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* OrganizationIdentifier;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* Name;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* EmailAddress;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* UnstructuredName;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* UnstructuredAddress;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* E;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* DC;
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* UID;
			IL2CPP::Array<bool>* defaultReverse;
			mscorlib::System::Collections::Hashtable* DefaultSymbols;
			mscorlib::System::Collections::Hashtable* RFC2253Symbols;
			mscorlib::System::Collections::Hashtable* RFC1779Symbols;
			mscorlib::System::Collections::Hashtable* DefaultLookup;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_DefaultReverse();
		static void set_DefaultReverse(bool value);
		static void _cctor();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* GetInstance(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* GetInstance(mscorlib::System::Object* obj);
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq);
		void _ctor(mscorlib::System::Collections::IList* ordering, mscorlib::System::Collections::IDictionary* attributes);
		void _ctor(mscorlib::System::Collections::IList* ordering, mscorlib::System::Collections::IDictionary* attributes, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);
		void _ctor(mscorlib::System::Collections::IList* oids, mscorlib::System::Collections::IList* values);
		void _ctor(mscorlib::System::Collections::IList* oids, mscorlib::System::Collections::IList* values, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);
		void _ctor(mscorlib::System::String* dirName);
		void _ctor(mscorlib::System::String* dirName, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);
		void _ctor(bool reverse, mscorlib::System::String* dirName);
		void _ctor(bool reverse, mscorlib::System::String* dirName, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);
		void _ctor(bool reverse, mscorlib::System::Collections::IDictionary* lookUp, mscorlib::System::String* dirName);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* DecodeOid(mscorlib::System::String* name, mscorlib::System::Collections::IDictionary* lookUp);
		void _ctor(bool reverse, mscorlib::System::Collections::IDictionary* lookUp, mscorlib::System::String* dirName, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509NameEntryConverter* converter);
		mscorlib::System::Collections::IList* GetOidList();
		mscorlib::System::Collections::IList* GetValueList();
		mscorlib::System::Collections::IList* GetValueList(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
		bool Equivalent(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* other, bool inOrder);
		bool Equivalent(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::X509Name* other);
		static bool equivalentStrings(mscorlib::System::String* s1, mscorlib::System::String* s2);
		static mscorlib::System::String* canonicalize(mscorlib::System::String* s);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* decodeObject(mscorlib::System::String* v);
		static mscorlib::System::String* stripInternalSpaces(mscorlib::System::String* str);
		void AppendValue(mscorlib::System::Text::StringBuilder* buf, mscorlib::System::Collections::IDictionary* oidSymbols, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, mscorlib::System::String* val);
		mscorlib::System::String* ToString(bool reverse, mscorlib::System::Collections::IDictionary* oidSymbols);
		mscorlib::System::String* ToString();
	};
}

