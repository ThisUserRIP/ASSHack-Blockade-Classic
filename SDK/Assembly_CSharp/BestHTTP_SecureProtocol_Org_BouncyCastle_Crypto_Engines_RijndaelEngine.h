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
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct RijndaelEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t BC;
		int64_t BC_MASK;
		int32_t ROUNDS;
		int32_t blockBits;
		IL2CPP::Array<IL2CPP::Array<int64_t>*>* workingKey;
		int64_t A0;
		int64_t A1;
		int64_t A2;
		int64_t A3;
		bool forEncryption;
		IL2CPP::Array<uint8_t>* shifts0SC;
		IL2CPP::Array<uint8_t>* shifts1SC;
		struct StaticFields
		{
			int32_t MAXROUNDS;
			int32_t MAXKC;
			IL2CPP::Array<uint8_t>* Logtable;
			IL2CPP::Array<uint8_t>* Alogtable;
			IL2CPP::Array<uint8_t>* S;
			IL2CPP::Array<uint8_t>* Si;
			IL2CPP::Array<uint8_t>* rcon;
			IL2CPP::Array<IL2CPP::Array<uint8_t>*>* shifts0;
			IL2CPP::Array<IL2CPP::Array<uint8_t>*>* shifts1;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		uint8_t Mul0x2(int32_t b);
		uint8_t Mul0x3(int32_t b);
		uint8_t Mul0x9(int32_t b);
		uint8_t Mul0xb(int32_t b);
		uint8_t Mul0xd(int32_t b);
		uint8_t Mul0xe(int32_t b);
		void KeyAddition(IL2CPP::Array<int64_t>* rk);
		int64_t Shift(int64_t r, int32_t shift);
		void ShiftRow(IL2CPP::Array<uint8_t>* shiftsSC);
		int64_t ApplyS(int64_t r, IL2CPP::Array<uint8_t>* box);
		void Substitution(IL2CPP::Array<uint8_t>* box);
		void MixColumn();
		void InvMixColumn();
		IL2CPP::Array<IL2CPP::Array<int64_t>*>* GenerateWorkingKey(IL2CPP::Array<uint8_t>* key);
		void _ctor();
		void _ctor(int32_t blockBits);
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void UnPackBlock(IL2CPP::Array<uint8_t>* bytes, int32_t off);
		void PackBlock(IL2CPP::Array<uint8_t>* bytes, int32_t off);
		void EncryptBlock(IL2CPP::Array<IL2CPP::Array<int64_t>*>* rk);
		void DecryptBlock(IL2CPP::Array<IL2CPP::Array<int64_t>*>* rk);
		static void _cctor();
	};
}

