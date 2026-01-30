#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
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
	struct AesLightEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t ROUNDS;
		IL2CPP::Array<IL2CPP::Array<uint32_t>*>* WorkingKey;
		uint32_t C0;
		uint32_t C1;
		uint32_t C2;
		uint32_t C3;
		bool forEncryption;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* S;
			IL2CPP::Array<uint8_t>* Si;
			IL2CPP::Array<uint8_t>* rcon;
			uint32_t m1;
			uint32_t m2;
			uint32_t m3;
			uint32_t m4;
			uint32_t m5;
			int32_t BLOCK_SIZE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static uint32_t Shift(uint32_t r, int32_t shift);
		static uint32_t FFmulX(uint32_t x);
		static uint32_t FFmulX2(uint32_t x);
		static uint32_t Mcol(uint32_t x);
		static uint32_t Inv_Mcol(uint32_t x);
		static uint32_t SubWord(uint32_t x);
		IL2CPP::Array<IL2CPP::Array<uint32_t>*>* GenerateWorkingKey(IL2CPP::Array<uint8_t>* key, bool forEncryption);
		void _ctor();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void UnPackBlock(IL2CPP::Array<uint8_t>* bytes, int32_t off);
		void PackBlock(IL2CPP::Array<uint8_t>* bytes, int32_t off);
		void EncryptBlock(IL2CPP::Array<IL2CPP::Array<uint32_t>*>* KW);
		void DecryptBlock(IL2CPP::Array<IL2CPP::Array<uint32_t>*>* KW);
		static void _cctor();
	};
}

