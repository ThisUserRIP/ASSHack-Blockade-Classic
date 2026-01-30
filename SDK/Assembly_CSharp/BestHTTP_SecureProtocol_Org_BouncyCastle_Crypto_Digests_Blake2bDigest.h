#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct Blake2bDigest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t digestLength;
		int32_t keyLength;
		IL2CPP::Array<uint8_t>* salt;
		IL2CPP::Array<uint8_t>* personalization;
		IL2CPP::Array<uint8_t>* key;
		IL2CPP::Array<uint8_t>* buffer;
		int32_t bufferPos;
		IL2CPP::Array<uint64_t>* internalState;
		IL2CPP::Array<uint64_t>* chainValue;
		uint64_t t0;
		uint64_t t1;
		uint64_t f0;
		struct StaticFields
		{
			IL2CPP::Array<uint64_t>* blake2b_IV;
			IL2CPP::Array<uint8_t>* blake2b_sigma;
			int32_t ROUNDS;
			int32_t BLOCK_LENGTH_BYTES;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Blake2bDigest* digest);
		void _ctor(int32_t digestSize);
		void _ctor(IL2CPP::Array<uint8_t>* key);
		void _ctor(IL2CPP::Array<uint8_t>* key, int32_t digestLength, IL2CPP::Array<uint8_t>* salt, IL2CPP::Array<uint8_t>* personalization);
		void Init();
		void InitializeInternalState();
		void Update(uint8_t b);
		void BlockUpdate(IL2CPP::Array<uint8_t>* message, int32_t offset, int32_t len);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOffset);
		void Reset();
		void Compress(IL2CPP::Array<uint8_t>* message, int32_t messagePos);
		void G(uint64_t m1, uint64_t m2, int32_t posA, int32_t posB, int32_t posC, int32_t posD);
		static uint64_t Rotr64(uint64_t x, int32_t rot);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		int32_t GetByteLength();
		void ClearKey();
		void ClearSalt();
		static void _cctor();
	};
}

