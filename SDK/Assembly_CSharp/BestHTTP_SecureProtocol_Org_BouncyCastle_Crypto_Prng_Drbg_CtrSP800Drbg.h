#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IEntropySource; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng::Drbg
{
	struct CtrSP800Drbg : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* mEngine;
		int32_t mKeySizeInBits;
		int32_t mSeedLength;
		int32_t mSecurityStrength;
		IL2CPP::Array<uint8_t>* mKey;
		IL2CPP::Array<uint8_t>* mV;
		int64_t mReseedCounter;
		bool mIsTdea;
		struct StaticFields
		{
			int64_t TDEA_RESEED_MAX;
			int64_t AES_RESEED_MAX;
			int32_t TDEA_MAX_BITS_REQUEST;
			int32_t AES_MAX_BITS_REQUEST;
			IL2CPP::Array<uint8_t>* K_BITS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* engine, int32_t keySizeInBits, int32_t securityStrength, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* entropySource, IL2CPP::Array<uint8_t>* personalizationString, IL2CPP::Array<uint8_t>* nonce);
		void CTR_DRBG_Instantiate_algorithm(IL2CPP::Array<uint8_t>* entropy, IL2CPP::Array<uint8_t>* nonce, IL2CPP::Array<uint8_t>* personalisationString);
		void CTR_DRBG_Update(IL2CPP::Array<uint8_t>* seed, IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* v);
		void CTR_DRBG_Reseed_algorithm(IL2CPP::Array<uint8_t>* additionalInput);
		void XOR(IL2CPP::Array<uint8_t>* output, IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b, int32_t bOff);
		void AddOneTo(IL2CPP::Array<uint8_t>* longer);
		IL2CPP::Array<uint8_t>* GetEntropy();
		IL2CPP::Array<uint8_t>* Block_Cipher_df(IL2CPP::Array<uint8_t>* inputString, int32_t bitLength);
		void BCC(IL2CPP::Array<uint8_t>* bccOut, IL2CPP::Array<uint8_t>* k, IL2CPP::Array<uint8_t>* iV, IL2CPP::Array<uint8_t>* data);
		void copyIntToByteArray(IL2CPP::Array<uint8_t>* buf, int32_t value, int32_t offSet);
		int32_t get_BlockSize();
		int32_t Generate(IL2CPP::Array<uint8_t>* output, IL2CPP::Array<uint8_t>* additionalInput, bool predictionResistant);
		void Reseed(IL2CPP::Array<uint8_t>* additionalInput);
		bool IsTdea(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher);
		int32_t GetMaxSecurityStrength(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher, int32_t keySizeInBits);
		IL2CPP::Array<uint8_t>* ExpandKey(IL2CPP::Array<uint8_t>* key);
		void PadKey(IL2CPP::Array<uint8_t>* keyMaster, int32_t keyOff, IL2CPP::Array<uint8_t>* tmp, int32_t tmpOff);
		static void _cctor();
	};
}

