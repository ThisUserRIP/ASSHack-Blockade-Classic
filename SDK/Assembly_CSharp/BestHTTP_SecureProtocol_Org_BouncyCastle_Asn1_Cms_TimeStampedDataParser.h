#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerIA5String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct MetaData; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1OctetStringParser; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct Evidence; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1SequenceParser; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	struct TimeStampedDataParser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* dataUri;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData* metaData;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetStringParser* content;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence* temporalEvidence;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1SequenceParser* parser);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::TimeStampedDataParser* GetInstance(mscorlib::System::Object* obj);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerIA5String* get_DataUri();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::MetaData* get_MetaData();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetStringParser* get_Content();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::Evidence* GetTemporalEvidence();
	};
}

