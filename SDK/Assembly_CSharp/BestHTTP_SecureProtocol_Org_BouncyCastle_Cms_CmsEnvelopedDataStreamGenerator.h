#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Cms_CmsEnvelopedGenerator.h"
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security { struct SecureRandom; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct DerInteger; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct CipherKeyGenerator; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509 { struct AlgorithmIdentifier; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1 { struct Asn1EncodableVector; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms
{
	struct CmsEnvelopedDataStreamGenerator : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Cms::CmsEnvelopedGenerator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* _originatorInfo;
		mscorlib::System::Object* _unprotectedAttributes;
		int32_t _bufferSize;
		bool _berEncodeRecipientSet;
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security::SecureRandom* rand);
		void SetBufferSize(int32_t bufferSize);
		void SetBerEncodeRecipients(bool berEncodeRecipientSet);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::DerInteger* get_Version();
		mscorlib::System::IO::Stream* Open(mscorlib::System::IO::Stream* outStream, mscorlib::System::String* encryptionOid, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::CipherKeyGenerator* keyGen);
		mscorlib::System::IO::Stream* Open(mscorlib::System::IO::Stream* outStream, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* encAlgID, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* cipherParameters, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Asn1EncodableVector* recipientInfos);
		mscorlib::System::IO::Stream* Open(mscorlib::System::IO::Stream* outStream, mscorlib::System::String* encryptionOid);
		mscorlib::System::IO::Stream* Open(mscorlib::System::IO::Stream* outStream, mscorlib::System::String* encryptionOid, int32_t keySize);
	};
}

