#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct DigestInputBuffer; };
namespace mscorlib::System::Collections { struct IDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsHandshakeHash; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct DeferredHash : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* mContext;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::DigestInputBuffer* mBuf;
		mscorlib::System::Collections::IDictionary* mHashes;
		int32_t mPrfHashAlgorithm;
		struct StaticFields
		{
			int32_t BUFFERING_HASH_LIMIT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(uint8_t prfHashAlgorithm, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* prfHash);
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined();
		void TrackHashAlgorithm(uint8_t hashAlgorithm);
		void SealHashAlgorithms();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash();
		IL2CPP::Array<uint8_t>* GetFinalHash(uint8_t hashAlgorithm);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetByteLength();
		int32_t GetDigestSize();
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void CheckStopBuffering();
		void CheckTrackingHash(uint8_t hashAlgorithm);
	};
}

