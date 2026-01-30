#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct LongDigest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t MyByteLength;
		IL2CPP::Array<uint8_t>* xBuf;
		int32_t xBufOff;
		int64_t byteCount1;
		int64_t byteCount2;
		uint64_t H1;
		uint64_t H2;
		uint64_t H3;
		uint64_t H4;
		uint64_t H5;
		uint64_t H6;
		uint64_t H7;
		uint64_t H8;
		IL2CPP::Array<uint64_t>* W;
		int32_t wOff;
		struct StaticFields
		{
			IL2CPP::Array<uint64_t>* K;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::LongDigest* t);
		void CopyIn(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::LongDigest* t);
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		void Finish();
		void Reset();
		void ProcessWord(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void AdjustByteCounts();
		void ProcessLength(int64_t lowW, int64_t hiW);
		void ProcessBlock();
		static uint64_t Ch(uint64_t x, uint64_t y, uint64_t z);
		static uint64_t Maj(uint64_t x, uint64_t y, uint64_t z);
		static uint64_t Sum0(uint64_t x);
		static uint64_t Sum1(uint64_t x);
		static uint64_t Sigma0(uint64_t x);
		static uint64_t Sigma1(uint64_t x);
		int32_t GetByteLength();
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* t);
		static void _cctor();
	};
}

