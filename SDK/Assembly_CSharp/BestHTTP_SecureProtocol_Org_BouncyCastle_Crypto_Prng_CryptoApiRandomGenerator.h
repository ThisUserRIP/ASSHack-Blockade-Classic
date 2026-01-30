#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	struct CryptoApiRandomGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Security::Cryptography::RandomNumberGenerator* rndProv;
		void _ctor();
		void _ctor(mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng);
		void AddSeedMaterial(IL2CPP::Array<uint8_t>* seed);
		void AddSeedMaterial(int64_t seed);
		void NextBytes(IL2CPP::Array<uint8_t>* bytes);
		void NextBytes(IL2CPP::Array<uint8_t>* bytes, int32_t start, int32_t len);
	};
}

