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
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct SM3Digest : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::GeneralDigest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint32_t>* V;
		IL2CPP::Array<uint32_t>* inwords;
		int32_t xOff;
		IL2CPP::Array<uint32_t>* W;
		struct StaticFields
		{
			int32_t DIGEST_LENGTH;
			int32_t BLOCK_SIZE;
			IL2CPP::Array<uint32_t>* T;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SM3Digest* t);
		void CopyIn(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::SM3Digest* t);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
		void Reset();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void ProcessWord(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void ProcessLength(int64_t bitLength);
		uint32_t P0(uint32_t x);
		uint32_t P1(uint32_t x);
		uint32_t FF0(uint32_t x, uint32_t y, uint32_t z);
		uint32_t FF1(uint32_t x, uint32_t y, uint32_t z);
		uint32_t GG0(uint32_t x, uint32_t y, uint32_t z);
		uint32_t GG1(uint32_t x, uint32_t y, uint32_t z);
		void ProcessBlock();
	};
}

