#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BestHTTP_SecureProtocol_Org_BouncyCastle_Crypto_Engines_Cast5Engine.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct Cast6Engine : Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines::Cast5Engine
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<int32_t>* _Kr;
		IL2CPP::Array<uint32_t>* _Km;
		IL2CPP::Array<int32_t>* _Tr;
		IL2CPP::Array<uint32_t>* _Tm;
		IL2CPP::Array<uint32_t>* _workingKey;
		struct StaticFields
		{
			int32_t ROUNDS;
			int32_t BLOCK_SIZE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		mscorlib::System::String* get_AlgorithmName();
		void Reset();
		int32_t GetBlockSize();
		void SetKey(IL2CPP::Array<uint8_t>* key);
		int32_t EncryptBlock(IL2CPP::Array<uint8_t>* src, int32_t srcIndex, IL2CPP::Array<uint8_t>* dst, int32_t dstIndex);
		int32_t DecryptBlock(IL2CPP::Array<uint8_t>* src, int32_t srcIndex, IL2CPP::Array<uint8_t>* dst, int32_t dstIndex);
		void CAST_Encipher(uint32_t A, uint32_t B, uint32_t C, uint32_t D, IL2CPP::Array<uint32_t>* result);
		void CAST_Decipher(uint32_t A, uint32_t B, uint32_t C, uint32_t D, IL2CPP::Array<uint32_t>* result);
	};
}

