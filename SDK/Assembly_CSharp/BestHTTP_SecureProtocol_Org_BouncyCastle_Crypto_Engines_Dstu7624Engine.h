#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct Dstu7624Engine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint64_t>* internalState;
		IL2CPP::Array<uint64_t>* workingKey;
		IL2CPP::Array<IL2CPP::Array<uint64_t>*>* roundKeys;
		int32_t wordsInBlock;
		int32_t wordsInKey;
		int32_t roundsAmount;
		bool forEncryption;
		struct StaticFields
		{
			int32_t ROUNDS_128;
			int32_t ROUNDS_256;
			int32_t ROUNDS_512;
			uint64_t mdsMatrix;
			uint64_t mdsInvMatrix;
			IL2CPP::Array<uint8_t>* S0;
			IL2CPP::Array<uint8_t>* S1;
			IL2CPP::Array<uint8_t>* S2;
			IL2CPP::Array<uint8_t>* S3;
			IL2CPP::Array<uint8_t>* T0;
			IL2CPP::Array<uint8_t>* T1;
			IL2CPP::Array<uint8_t>* T2;
			IL2CPP::Array<uint8_t>* T3;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(int32_t blockSizeBits);
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		void WorkingKeyExpandKT(IL2CPP::Array<uint64_t>* workingKey, IL2CPP::Array<uint64_t>* tempKeys);
		void WorkingKeyExpandEven(IL2CPP::Array<uint64_t>* workingKey, IL2CPP::Array<uint64_t>* tempKey);
		void WorkingKeyExpandOdd();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void EncryptionRound();
		void DecryptionRound();
		void DecryptBlock_128(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void EncryptBlock_128(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void SubBytes();
		void InvSubBytes();
		void ShiftRows();
		void InvShiftRows();
		void AddRoundKey(int32_t round);
		void SubRoundKey(int32_t round);
		void XorRoundKey(int32_t round);
		static uint64_t MixColumn(uint64_t c);
		void MixColumns();
		static uint64_t MixColumnInv(uint64_t c);
		void MixColumnsInv();
		static uint64_t MulX(uint64_t n);
		static uint64_t MulX2(uint64_t n);
		static uint64_t Rotate(int32_t n, uint64_t x);
		void RotateLeft(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* z);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetBlockSize();
		bool get_IsPartialBlockOkay();
		void Reset();
		static void _cctor();
	};
}

