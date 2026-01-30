#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
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
	struct Cast5Engine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* _Kr;
		IL2CPP::Array<uint32_t>* _Km;
		bool _encrypting;
		IL2CPP::Array<uint8_t>* _workingKey;
		int32_t _rounds;
		struct StaticFields
		{
			IL2CPP::Array<uint32_t>* S1;
			IL2CPP::Array<uint32_t>* S2;
			IL2CPP::Array<uint32_t>* S3;
			IL2CPP::Array<uint32_t>* S4;
			IL2CPP::Array<uint32_t>* S5;
			IL2CPP::Array<uint32_t>* S6;
			IL2CPP::Array<uint32_t>* S7;
			IL2CPP::Array<uint32_t>* S8;
			int32_t MAX_ROUNDS;
			int32_t RED_ROUNDS;
			int32_t BLOCK_SIZE;
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
		int32_t EncryptBlock(IL2CPP::Array<uint8_t>* src, int32_t srcIndex, IL2CPP::Array<uint8_t>* dst, int32_t dstIndex);
		int32_t DecryptBlock(IL2CPP::Array<uint8_t>* src, int32_t srcIndex, IL2CPP::Array<uint8_t>* dst, int32_t dstIndex);
		static uint32_t F1(uint32_t D, uint32_t Kmi, int32_t Kri);
		static uint32_t F2(uint32_t D, uint32_t Kmi, int32_t Kri);
		static uint32_t F3(uint32_t D, uint32_t Kmi, int32_t Kri);
		void CAST_Encipher(uint32_t L0, uint32_t R0, IL2CPP::Array<uint32_t>* result);
		void CAST_Decipher(uint32_t L16, uint32_t R16, IL2CPP::Array<uint32_t>* result);
		static void Bits32ToInts(uint32_t inData, IL2CPP::Array<int32_t>* b, int32_t offset);
		static uint32_t IntsTo32bits(IL2CPP::Array<int32_t>* b, int32_t i);
		static void _cctor();
	};
}

