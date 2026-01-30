#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Encodable.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1OctetString; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { struct PkiStatusInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Sequence; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	struct CertStatus : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* certHash;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* certReqId;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* statusInfo;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq);
		void _ctor(IL2CPP::Array<uint8_t>* certHash, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* certReqId);
		void _ctor(IL2CPP::Array<uint8_t>* certHash, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* certReqId, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* statusInfo);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::CertStatus* GetInstance(mscorlib::System::Object* obj);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_CertHash();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_CertReqID();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiStatusInfo* get_StatusInfo();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
	};
}

