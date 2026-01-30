#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct Certificate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IDictionary; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct SessionParameters : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t mCipherSuite;
		uint8_t mCompressionAlgorithm;
		IL2CPP::Array<uint8_t>* mMasterSecret;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* mPeerCertificate;
		IL2CPP::Array<uint8_t>* mPskIdentity;
		IL2CPP::Array<uint8_t>* mSrpIdentity;
		IL2CPP::Array<uint8_t>* mEncodedServerExtensions;
		bool mExtendedMasterSecret;
		void _ctor(int32_t cipherSuite, uint8_t compressionAlgorithm, IL2CPP::Array<uint8_t>* masterSecret, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* peerCertificate, IL2CPP::Array<uint8_t>* pskIdentity, IL2CPP::Array<uint8_t>* srpIdentity, IL2CPP::Array<uint8_t>* encodedServerExtensions, bool extendedMasterSecret);
		void Clear();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::SessionParameters* Copy();
		int32_t get_CipherSuite();
		uint8_t get_CompressionAlgorithm();
		bool get_IsExtendedMasterSecret();
		IL2CPP::Array<uint8_t>* get_MasterSecret();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::Certificate* get_PeerCertificate();
		IL2CPP::Array<uint8_t>* get_PskIdentity();
		IL2CPP::Array<uint8_t>* get_SrpIdentity();
		mscorlib::System::Collections::IDictionary* ReadServerExtensions();
	};
}

