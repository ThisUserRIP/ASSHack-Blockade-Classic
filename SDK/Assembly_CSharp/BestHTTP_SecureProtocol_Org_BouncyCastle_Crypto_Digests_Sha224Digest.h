#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_GeneralDigest.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
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
	struct Sha224Digest : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::GeneralDigest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t H1;
		uint32_t H2;
		uint32_t H3;
		uint32_t H4;
		uint32_t H5;
		uint32_t H6;
		uint32_t H7;
		uint32_t H8;
		IL2CPP::Array<uint32_t>* X;
		int32_t xOff;
		struct StaticFields
		{
			int32_t DigestLength;
			IL2CPP::Array<uint32_t>* K;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Sha224Digest* t);
		void CopyIn(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Sha224Digest* t);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		void ProcessWord(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void ProcessLength(int64_t bitLength);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void ProcessBlock();
		static uint32_t Ch(uint32_t x, uint32_t y, uint32_t z);
		static uint32_t Maj(uint32_t x, uint32_t y, uint32_t z);
		static uint32_t Sum0(uint32_t x);
		static uint32_t Sum1(uint32_t x);
		static uint32_t Theta0(uint32_t x);
		static uint32_t Theta1(uint32_t x);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
		static void _cctor();
	};
}

