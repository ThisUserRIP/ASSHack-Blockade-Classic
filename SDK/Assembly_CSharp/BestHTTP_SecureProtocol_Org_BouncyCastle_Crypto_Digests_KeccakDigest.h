#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct KeccakDigest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint64_t>* state;
		IL2CPP::Array<uint8_t>* dataQueue;
		int32_t rate;
		int32_t bitsInQueue;
		int32_t fixedOutputLength;
		bool squeezing;
		struct StaticFields
		{
			IL2CPP::Array<uint64_t>* KeccakRoundConstants;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(int32_t bitLength);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::KeccakDigest* source);
		void CopyIn(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::KeccakDigest* source);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff, uint8_t partialByte, int32_t partialBits);
		void Reset();
		int32_t GetByteLength();
		void Init(int32_t bitLength);
		void InitSponge(int32_t rate);
		void Absorb(IL2CPP::Array<uint8_t>* data, int32_t off, int32_t len);
		void AbsorbBits(int32_t data, int32_t bits);
		void PadAndSwitchToSqueezingPhase();
		void Squeeze(IL2CPP::Array<uint8_t>* output, int32_t offset, int64_t outputLength);
		void KeccakAbsorb(IL2CPP::Array<uint8_t>* data, int32_t off);
		void KeccakExtract();
		void KeccakPermutation();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
		static void _cctor();
	};
}

