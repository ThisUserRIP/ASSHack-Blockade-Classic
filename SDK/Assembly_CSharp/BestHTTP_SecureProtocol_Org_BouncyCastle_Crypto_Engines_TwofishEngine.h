#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct TwofishEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool encrypting;
		IL2CPP::Array<int32_t>* gMDS0;
		IL2CPP::Array<int32_t>* gMDS1;
		IL2CPP::Array<int32_t>* gMDS2;
		IL2CPP::Array<int32_t>* gMDS3;
		IL2CPP::Array<int32_t>* gSubKeys;
		IL2CPP::Array<int32_t>* gSBox;
		int32_t k64Cnt;
		IL2CPP::Array<uint8_t>* workingKey;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* P;
			int32_t P_00;
			int32_t P_01;
			int32_t P_02;
			int32_t P_03;
			int32_t P_04;
			int32_t P_10;
			int32_t P_11;
			int32_t P_12;
			int32_t P_13;
			int32_t P_14;
			int32_t P_20;
			int32_t P_21;
			int32_t P_22;
			int32_t P_23;
			int32_t P_24;
			int32_t P_30;
			int32_t P_31;
			int32_t P_32;
			int32_t P_33;
			int32_t P_34;
			int32_t GF256_FDBK;
			int32_t GF256_FDBK_2;
			int32_t GF256_FDBK_4;
			int32_t RS_GF_FDBK;
			int32_t ROUNDS;
			int32_t MAX_ROUNDS;
			int32_t BLOCK_SIZE;
			int32_t MAX_KEY_BITS;
			int32_t INPUT_WHITEN;
			int32_t OUTPUT_WHITEN;
			int32_t ROUND_SUBKEYS;
			int32_t TOTAL_SUBKEYS;
			int32_t SK_STEP;
			int32_t SK_BUMP;
			int32_t SK_ROTL;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		int32_t GetBlockSize();
		void SetKey(IL2CPP::Array<uint8_t>* key);
		void EncryptBlock(IL2CPP::Array<uint8_t>* src, int32_t srcIndex, IL2CPP::Array<uint8_t>* dst, int32_t dstIndex);
		void DecryptBlock(IL2CPP::Array<uint8_t>* src, int32_t srcIndex, IL2CPP::Array<uint8_t>* dst, int32_t dstIndex);
		int32_t F32(int32_t x, IL2CPP::Array<int32_t>* k32);
		int32_t RS_MDS_Encode(int32_t k0, int32_t k1);
		int32_t RS_rem(int32_t x);
		int32_t LFSR1(int32_t x);
		int32_t LFSR2(int32_t x);
		int32_t Mx_X(int32_t x);
		int32_t Mx_Y(int32_t x);
		int32_t M_b0(int32_t x);
		int32_t M_b1(int32_t x);
		int32_t M_b2(int32_t x);
		int32_t M_b3(int32_t x);
		int32_t Fe32_0(int32_t x);
		int32_t Fe32_3(int32_t x);
		int32_t BytesTo32Bits(IL2CPP::Array<uint8_t>* b, int32_t p);
		void Bits32ToBytes(int32_t inData, IL2CPP::Array<uint8_t>* b, int32_t offset);
		static void _cctor();
	};
}

