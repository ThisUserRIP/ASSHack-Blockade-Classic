#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerObjectIdentifier; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace mscorlib::System::Collections { struct IEnumerable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Pkcs
{
	struct Pkcs12Entry : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::IDictionary* attributes;
		void _ctor(mscorlib::System::Collections::IDictionary* attributes);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* GetBagAttribute(mscorlib::System::String* oid);
		mscorlib::System::Collections::IEnumerator* GetBagAttributeKeys();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* get_Item(mscorlib::System::String* oid);
		mscorlib::System::Collections::IEnumerable* get_BagAttributeKeys();
	};
}

