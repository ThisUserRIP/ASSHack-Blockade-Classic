#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Asn1_Asn1Encodable.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerInteger; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms { struct KekIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1OctetString; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Sequence; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1TaggedObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1Object; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms
{
	struct KekRecipientInfo : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Encodable
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* version;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekID;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey;
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekIdentifier* kekID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* keyEncryptionAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* encryptedKey);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Sequence* seq);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* GetInstance(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekRecipientInfo* GetInstance(mscorlib::System::Object* obj);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Version();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cms::KekIdentifier* get_KekID();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_KeyEncryptionAlgorithm();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1OctetString* get_EncryptedKey();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
	};
}

