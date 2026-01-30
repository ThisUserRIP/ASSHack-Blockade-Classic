#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_GeneralDigest.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct MD4Digest : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::GeneralDigest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t H1;
		int32_t H2;
		int32_t H3;
		int32_t H4;
		IL2CPP::Array<int32_t>* X;
		int32_t xOff;
		struct StaticFields
		{
			int32_t DigestLength;
			int32_t S11;
			int32_t S12;
			int32_t S13;
			int32_t S14;
			int32_t S21;
			int32_t S22;
			int32_t S23;
			int32_t S24;
			int32_t S31;
			int32_t S32;
			int32_t S33;
			int32_t S34;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::MD4Digest* t);
		void CopyIn(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::MD4Digest* t);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		void ProcessWord(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void ProcessLength(int64_t bitLength);
		void UnpackWord(int32_t word, IL2CPP::Array<uint8_t>* outBytes, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		int32_t RotateLeft(int32_t x, int32_t n);
		int32_t F(int32_t u, int32_t v, int32_t w);
		int32_t G(int32_t u, int32_t v, int32_t w);
		int32_t H(int32_t u, int32_t v, int32_t w);
		void ProcessBlock();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
	};
}

