#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct Dstu7564Digest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t hashSize;
		int32_t blockSize;
		int32_t columns;
		int32_t rounds;
		IL2CPP::Array<uint64_t>* state;
		IL2CPP::Array<uint64_t>* tempState1;
		IL2CPP::Array<uint64_t>* tempState2;
		uint64_t inputBlocks;
		int32_t bufOff;
		IL2CPP::Array<uint8_t>* buf;
		struct StaticFields
		{
			int32_t NB_512;
			int32_t NB_1024;
			int32_t NR_512;
			int32_t NR_1024;
			IL2CPP::Array<uint8_t>* S0;
			IL2CPP::Array<uint8_t>* S1;
			IL2CPP::Array<uint8_t>* S2;
			IL2CPP::Array<uint8_t>* S3;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);
		void CopyIn(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Dstu7564Digest* digest);
		void _ctor(int32_t hashSizeBits);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		int32_t GetByteLength();
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void P(IL2CPP::Array<uint64_t>* s);
		void Q(IL2CPP::Array<uint64_t>* s);
		static uint64_t MixColumn(uint64_t c);
		void MixColumns(IL2CPP::Array<uint64_t>* s);
		static uint64_t Rotate(int32_t n, uint64_t x);
		void ShiftRows(IL2CPP::Array<uint64_t>* s);
		void SubBytes(IL2CPP::Array<uint64_t>* s);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
		static void _cctor();
	};
}

