#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_LongDigest.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct Sha512tDigest : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::LongDigest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t digestLength;
		uint64_t H1t;
		uint64_t H2t;
		uint64_t H3t;
		uint64_t H4t;
		uint64_t H5t;
		uint64_t H6t;
		uint64_t H7t;
		uint64_t H8t;
		struct StaticFields
		{
			uint64_t A5;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t bitLength);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Sha512tDigest* t);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void tIvGenerate(int32_t bitLength);
		static void UInt64_To_BE(uint64_t n, IL2CPP::Array<uint8_t>* bs, int32_t off, int32_t max);
		static void UInt32_To_BE(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off, int32_t max);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
	};
}

