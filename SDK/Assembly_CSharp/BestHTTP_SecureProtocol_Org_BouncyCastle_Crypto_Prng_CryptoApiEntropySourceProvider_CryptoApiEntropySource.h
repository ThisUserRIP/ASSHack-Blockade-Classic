#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Prng_CryptoApiEntropySourceProvider.h"
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng { struct CryptoApiEntropySourceProvider; };
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	struct CryptoApiEntropySourceProvider_CryptoApiEntropySource : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* mRng;
		bool mPredictionResistant;
		int32_t mEntropySize;
		void _ctor(mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng, bool predictionResistant, int32_t entropySize);
		bool BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_IEntropySource_get_IsPredictionResistant();
		IL2CPP::Array<uint8_t>* BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_IEntropySource_GetEntropy();
		int32_t BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_IEntropySource_get_EntropySize();
	};
}

