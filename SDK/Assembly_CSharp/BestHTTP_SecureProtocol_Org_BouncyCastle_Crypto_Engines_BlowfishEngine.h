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
	struct BlowfishEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint32_t>* S0;
		IL2CPP::Array<uint32_t>* S1;
		IL2CPP::Array<uint32_t>* S2;
		IL2CPP::Array<uint32_t>* S3;
		IL2CPP::Array<uint32_t>* P;
		bool encrypting;
		IL2CPP::Array<uint8_t>* workingKey;
		struct StaticFields
		{
			IL2CPP::Array<uint32_t>* KP;
			IL2CPP::Array<uint32_t>* KS0;
			IL2CPP::Array<uint32_t>* KS1;
			IL2CPP::Array<uint32_t>* KS2;
			IL2CPP::Array<uint32_t>* KS3;
			int32_t ROUNDS;
			int32_t BLOCK_SIZE;
			int32_t SBOX_SK;
			int32_t P_SZ;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		int32_t GetBlockSize();
		uint32_t F(uint32_t x);
		void ProcessTable(uint32_t xl, uint32_t xr, IL2CPP::Array<uint32_t>* table);
		void SetKey(IL2CPP::Array<uint8_t>* key);
		void EncryptBlock(IL2CPP::Array<uint8_t>* src, int32_t srcIndex, IL2CPP::Array<uint8_t>* dst, int32_t dstIndex);
		void DecryptBlock(IL2CPP::Array<uint8_t>* src, int32_t srcIndex, IL2CPP::Array<uint8_t>* dst, int32_t dstIndex);
		static void _cctor();
	};
}

