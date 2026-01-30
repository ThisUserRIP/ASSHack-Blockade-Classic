#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IEntropySource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg
{
	struct HashSP800Drbg : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* mDigest;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;
		int32_t mSecurityStrength;
		int32_t mSeedLength;
		IL2CPP::Array<uint8_t>* mV;
		IL2CPP::Array<uint8_t>* mC;
		int64_t mReseedCounter;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* ONE;
			int64_t RESEED_MAX;
			int32_t MAX_BITS_REQUEST;
			mscorlib::System::Collections::IDictionary* seedlens;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest, int32_t securityStrength, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* entropySource, IL2CPP::Array<uint8_t>* personalizationString, IL2CPP::Array<uint8_t>* nonce);
		int32_t get_BlockSize();
		int32_t Generate(IL2CPP::Array<uint8_t>* output, IL2CPP::Array<uint8_t>* additionalInput, bool predictionResistant);
		IL2CPP::Array<uint8_t>* GetEntropy();
		void AddTo(IL2CPP::Array<uint8_t>* longer, IL2CPP::Array<uint8_t>* shorter);
		void Reseed(IL2CPP::Array<uint8_t>* additionalInput);
		IL2CPP::Array<uint8_t>* Hash(IL2CPP::Array<uint8_t>* input);
		void DoHash(IL2CPP::Array<uint8_t>* input, IL2CPP::Array<uint8_t>* output);
		IL2CPP::Array<uint8_t>* hashgen(IL2CPP::Array<uint8_t>* input, int32_t lengthInBits);
	};
}

