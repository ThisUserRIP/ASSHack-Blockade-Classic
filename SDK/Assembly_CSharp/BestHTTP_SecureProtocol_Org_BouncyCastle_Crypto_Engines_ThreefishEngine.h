#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines { struct ThreefishEngine_ThreefishCipher; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct ThreefishEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t blocksizeBytes;
		int32_t blocksizeWords;
		IL2CPP::Array<uint64_t>* currentBlock;
		IL2CPP::Array<uint64_t>* t;
		IL2CPP::Array<uint64_t>* kw;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::ThreefishEngine_ThreefishCipher* cipher;
		bool forEncryption;
		struct StaticFields
		{
			int32_t BLOCKSIZE_256;
			int32_t BLOCKSIZE_512;
			int32_t BLOCKSIZE_1024;
			int32_t TWEAK_SIZE_BYTES;
			int32_t TWEAK_SIZE_WORDS;
			int32_t ROUNDS_256;
			int32_t ROUNDS_512;
			int32_t ROUNDS_1024;
			int32_t MAX_ROUNDS;
			uint64_t C_240;
			IL2CPP::Array<int32_t>* MOD9;
			IL2CPP::Array<int32_t>* MOD17;
			IL2CPP::Array<int32_t>* MOD5;
			IL2CPP::Array<int32_t>* MOD3;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(int32_t blocksizeBits);
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		void Init(bool forEncryption, IL2CPP::Array<uint64_t>* key, IL2CPP::Array<uint64_t>* tweak);
		void SetKey(IL2CPP::Array<uint64_t>* key);
		void SetTweak(IL2CPP::Array<uint64_t>* tweak);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		void Reset();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* inBytes, int32_t inOff, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t ProcessBlock(IL2CPP::Array<uint64_t>* inWords, IL2CPP::Array<uint64_t>* outWords);
		static uint64_t BytesToWord(IL2CPP::Array<uint8_t>* bytes, int32_t off);
		static void WordToBytes(uint64_t word, IL2CPP::Array<uint8_t>* bytes, int32_t off);
		static uint64_t RotlXor(uint64_t x, int32_t n, uint64_t xor_);
		static uint64_t XorRotr(uint64_t x, int32_t n, uint64_t xor_);
	};
}

