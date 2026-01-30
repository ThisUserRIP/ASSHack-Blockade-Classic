#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Encodable.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct GeneralName; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerGeneralizedTime; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1OctetString; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { struct PkiFreeText; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Sequence; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp { struct InfoTypeAndValue; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1EncodableVector; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Encodable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	struct PkiHeader : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* pvno;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* sender;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* recipient;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* messageTime;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* protectionAlg;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* senderKID;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* recipKID;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* transactionID;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* senderNonce;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* recipNonce;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* freeText;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* generalInfo;
		struct StaticFields
		{
			Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* NULL_NAME;
			int32_t CMP_1999;
			int32_t CMP_2000;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiHeader* GetInstance(mscorlib::System::Object* obj);
		void _ctor(int32_t pvno, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* sender, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* pvno, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* sender, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* recipient);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Pvno();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* get_Sender();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::GeneralName* get_Recipient();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerGeneralizedTime* get_MessageTime();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_ProtectionAlg();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_SenderKID();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_RecipKID();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_TransactionID();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_SenderNonce();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_RecipNonce();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::PkiFreeText* get_FreeText();
		IL2CPP::Array<Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp::InfoTypeAndValue*>* GetGeneralInfo();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
		static void AddOptional(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* v, int32_t tagNo, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable* obj);
		static void _cctor();
	};
}

