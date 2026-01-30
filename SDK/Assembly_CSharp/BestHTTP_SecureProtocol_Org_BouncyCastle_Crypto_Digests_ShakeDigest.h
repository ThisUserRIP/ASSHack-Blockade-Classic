#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Digests_KeccakDigest.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct ShakeDigest : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::KeccakDigest
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t CheckBitLength(int32_t bitLength);
		void _ctor();
		void _ctor(int32_t bitLength);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::ShakeDigest* source);
		mscorlib::System::String* get_AlgorithmName();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff, int32_t outLen);
		int32_t DoOutput(IL2CPP::Array<uint8_t>* output, int32_t outOff, int32_t outLen);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff, uint8_t partialByte, int32_t partialBits);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff, int32_t outLen, uint8_t partialByte, int32_t partialBits);
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
	};
}

