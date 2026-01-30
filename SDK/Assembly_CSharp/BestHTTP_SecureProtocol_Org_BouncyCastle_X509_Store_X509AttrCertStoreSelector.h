#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct IX509AttributeCertificate; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date { struct DateTimeObject; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct AttributeCertificateHolder; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509 { struct AttributeCertificateIssuer; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections { struct ISet; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct GeneralName; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections { struct IEnumerable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store
{
	struct X509AttrCertStoreSelector : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* attributeCert;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* attributeCertificateValid;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder* holder;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer* issuer;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* serialNumber;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* targetNames;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* targetGroups;
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::Store::X509AttrCertStoreSelector* o);
		bool Match(mscorlib::System::Object* obj);
		mscorlib::System::Object* Clone();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* get_AttributeCert();
		void set_AttributeCert(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::IX509AttributeCertificate* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_AttribueCertificateValid();
		void set_AttribueCertificateValid(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* get_AttributeCertificateValid();
		void set_AttributeCertificateValid(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Date::DateTimeObject* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder* get_Holder();
		void set_Holder(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateHolder* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer* get_Issuer();
		void set_Issuer(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::X509::AttributeCertificateIssuer* value);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* get_SerialNumber();
		void set_SerialNumber(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* value);
		void AddTargetName(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* name);
		void AddTargetName(IL2CPP::Array<uint8_t>* name);
		void SetTargetNames(mscorlib::System::Collections::IEnumerable* names);
		mscorlib::System::Collections::IEnumerable* GetTargetNames();
		void AddTargetGroup(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* group);
		void AddTargetGroup(IL2CPP::Array<uint8_t>* name);
		void SetTargetGroups(mscorlib::System::Collections::IEnumerable* names);
		mscorlib::System::Collections::IEnumerable* GetTargetGroups();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::Collections::ISet* ExtractGeneralNames(mscorlib::System::Collections::IEnumerable* names);
	};
}

