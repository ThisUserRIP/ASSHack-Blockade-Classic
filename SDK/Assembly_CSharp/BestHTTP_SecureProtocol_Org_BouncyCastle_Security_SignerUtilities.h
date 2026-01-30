#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ISigner; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct AsymmetricKeyParameter; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	struct SignerUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::IDictionary* algorithms;
			mscorlib::System::Collections::IDictionary* oids;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void _cctor();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* GetObjectIdentifier(mscorlib::System::String* mechanism);
		static mscorlib::System::Collections::ICollection* get_Algorithms();
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetDefaultX509Parameters(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetDefaultX509Parameters(mscorlib::System::String* algorithm);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetPssX509Parameters(mscorlib::System::String* digestName);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* GetSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* id);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* GetSigner(mscorlib::System::String* algorithm);
		static mscorlib::System::String* GetEncodingName(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* InitSigner(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid, bool forSigning, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ISigner* InitSigner(mscorlib::System::String* algorithm, bool forSigning, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::AsymmetricKeyParameter* privateKey, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* random);
	};
}

