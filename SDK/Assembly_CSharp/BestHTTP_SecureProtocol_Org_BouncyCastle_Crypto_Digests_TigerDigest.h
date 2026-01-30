#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct TigerDigest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int64_t a;
		int64_t b;
		int64_t c;
		int64_t byteCount;
		IL2CPP::Array<uint8_t>* Buffer;
		int32_t bOff;
		IL2CPP::Array<int64_t>* x;
		int32_t xOff;
		struct StaticFields
		{
			int32_t MyByteLength;
			IL2CPP::Array<int64_t>* t1;
			IL2CPP::Array<int64_t>* t2;
			IL2CPP::Array<int64_t>* t3;
			IL2CPP::Array<int64_t>* t4;
			int32_t DigestLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::TigerDigest* t);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		int32_t GetByteLength();
		void ProcessWord(IL2CPP::Array<uint8_t>* b, int32_t off);
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		void RoundABC(int64_t x, int64_t mul);
		void RoundBCA(int64_t x, int64_t mul);
		void RoundCAB(int64_t x, int64_t mul);
		void KeySchedule();
		void ProcessBlock();
		void UnpackWord(int64_t r, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void ProcessLength(int64_t bitLength);
		void Finish();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
		static void _cctor();
	};
}

