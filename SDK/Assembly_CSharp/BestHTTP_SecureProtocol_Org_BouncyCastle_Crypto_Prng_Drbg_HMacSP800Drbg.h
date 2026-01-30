#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IEntropySource; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IMac; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg
{
	struct HMacSP800Drbg : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* mK;
		IL2CPP::Array<uint8_t>* mV;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* mHMac;
		int32_t mSecurityStrength;
		int64_t mReseedCounter;
		struct StaticFields
		{
			int64_t RESEED_MAX;
			int32_t MAX_BITS_REQUEST;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IMac* hMac, int32_t securityStrength, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* entropySource, IL2CPP::Array<uint8_t>* personalizationString, IL2CPP::Array<uint8_t>* nonce);
		void hmac_DRBG_Update(IL2CPP::Array<uint8_t>* seedMaterial);
		void hmac_DRBG_Update_Func(IL2CPP::Array<uint8_t>* seedMaterial, uint8_t vValue);
		int32_t get_BlockSize();
		int32_t Generate(IL2CPP::Array<uint8_t>* output, IL2CPP::Array<uint8_t>* additionalInput, bool predictionResistant);
		void Reseed(IL2CPP::Array<uint8_t>* additionalInput);
		IL2CPP::Array<uint8_t>* GetEntropy();
		static void _cctor();
	};
}

