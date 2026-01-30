#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls { struct TlsContext; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls
{
	struct TlsHandshakeHash
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Init(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsContext* context);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* NotifyPrfDetermined();
		void TrackHashAlgorithm(uint8_t hashAlgorithm);
		void SealHashAlgorithms();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Tls::TlsHandshakeHash* StopTracking();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* ForkPrfHash();
		IL2CPP::Array<uint8_t>* GetFinalHash(uint8_t hashAlgorithm);
	};
}

