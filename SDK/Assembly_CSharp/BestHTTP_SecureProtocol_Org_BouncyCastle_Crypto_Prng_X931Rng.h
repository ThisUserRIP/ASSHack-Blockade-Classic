#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IEntropySource; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	struct X931Rng : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* mEngine;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* mEntropySource;
		IL2CPP::Array<uint8_t>* mDT;
		IL2CPP::Array<uint8_t>* mI;
		IL2CPP::Array<uint8_t>* mR;
		IL2CPP::Array<uint8_t>* mV;
		int64_t mReseedCounter;
		struct StaticFields
		{
			int64_t BLOCK64_RESEED_MAX;
			int64_t BLOCK128_RESEED_MAX;
			int32_t BLOCK64_MAX_BITS_REQUEST;
			int32_t BLOCK128_MAX_BITS_REQUEST;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* engine, IL2CPP::Array<uint8_t>* dateTimeVector, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* entropySource);
		int32_t Generate(IL2CPP::Array<uint8_t>* output, bool predictionResistant);
		void Reseed();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IEntropySource* get_EntropySource();
		void Process(IL2CPP::Array<uint8_t>* res, IL2CPP::Array<uint8_t>* a, IL2CPP::Array<uint8_t>* b);
		void Increment(IL2CPP::Array<uint8_t>* val);
		static bool IsTooLarge(IL2CPP::Array<uint8_t>* bytes, int32_t maxBytes);
	};
}

