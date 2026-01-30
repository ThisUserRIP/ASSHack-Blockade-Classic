#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IDigest; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Prng
{
	struct DigestRandomGenerator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t stateCounter;
		int64_t seedCounter;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest;
		IL2CPP::Array<uint8_t>* state;
		IL2CPP::Array<uint8_t>* seed;
		struct StaticFields
		{
			int64_t CYCLE_COUNT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IDigest* digest);
		void AddSeedMaterial(IL2CPP::Array<uint8_t>* inSeed);
		void AddSeedMaterial(int64_t rSeed);
		void NextBytes(IL2CPP::Array<uint8_t>* bytes);
		void NextBytes(IL2CPP::Array<uint8_t>* bytes, int32_t start, int32_t len);
		void CycleSeed();
		void GenerateState();
		void DigestAddCounter(int64_t seedVal);
		void DigestUpdate(IL2CPP::Array<uint8_t>* inSeed);
		void DigestDoFinal(IL2CPP::Array<uint8_t>* result);
	};
}

