#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct WhirlpoolDigest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int64_t>* _rc;
		IL2CPP::Array<uint8_t>* _buffer;
		int32_t _bufferPos;
		IL2CPP::Array<int16_t>* _bitCount;
		IL2CPP::Array<int64_t>* _hash;
		IL2CPP::Array<int64_t>* _K;
		IL2CPP::Array<int64_t>* _L;
		IL2CPP::Array<int64_t>* _block;
		IL2CPP::Array<int64_t>* _state;
		struct StaticFields
		{
			int32_t BYTE_LENGTH;
			int32_t DIGEST_LENGTH_BYTES;
			int32_t ROUNDS;
			int32_t REDUCTION_POLYNOMIAL;
			IL2CPP::Array<int32_t>* SBOX;
			IL2CPP::Array<int64_t>* C0;
			IL2CPP::Array<int64_t>* C1;
			IL2CPP::Array<int64_t>* C2;
			IL2CPP::Array<int64_t>* C3;
			IL2CPP::Array<int64_t>* C4;
			IL2CPP::Array<int64_t>* C5;
			IL2CPP::Array<int64_t>* C6;
			IL2CPP::Array<int64_t>* C7;
			IL2CPP::Array<int16_t>* EIGHT;
			int32_t BITCOUNT_ARRAY_SIZE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		static int64_t packIntoLong(int32_t b7, int32_t b6, int32_t b5, int32_t b4, int32_t b3, int32_t b2, int32_t b1, int32_t b0);
		static int32_t maskWithReductionPolynomial(int32_t input);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::WhirlpoolDigest* originalDigest);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void processFilledBuffer();
		static int64_t bytesToLongFromBuffer(IL2CPP::Array<uint8_t>* buffer, int32_t startPos);
		static void convertLongToByteArray(int64_t inputLong, IL2CPP::Array<uint8_t>* outputArray, int32_t offSet);
		void processBlock();
		void Update(uint8_t input);
		void increment();
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		void finish();
		IL2CPP::Array<uint8_t>* copyBitLength();
		int32_t GetByteLength();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
	};
}

