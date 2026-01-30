#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct ICipherParameters; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Engines
{
	struct CamelliaEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool initialised;
		bool _keyIs128;
		IL2CPP::Array<uint32_t>* subkey;
		IL2CPP::Array<uint32_t>* kw;
		IL2CPP::Array<uint32_t>* ke;
		IL2CPP::Array<uint32_t>* state;
		struct StaticFields
		{
			int32_t BLOCK_SIZE;
			IL2CPP::Array<uint32_t>* SIGMA;
			IL2CPP::Array<uint32_t>* SBOX1_1110;
			IL2CPP::Array<uint32_t>* SBOX4_4404;
			IL2CPP::Array<uint32_t>* SBOX2_0222;
			IL2CPP::Array<uint32_t>* SBOX3_3033;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static uint32_t rightRotate(uint32_t x, int32_t s);
		static uint32_t leftRotate(uint32_t x, int32_t s);
		static void roldq(int32_t rot, IL2CPP::Array<uint32_t>* ki, int32_t ioff, IL2CPP::Array<uint32_t>* ko, int32_t ooff);
		static void decroldq(int32_t rot, IL2CPP::Array<uint32_t>* ki, int32_t ioff, IL2CPP::Array<uint32_t>* ko, int32_t ooff);
		static void roldqo32(int32_t rot, IL2CPP::Array<uint32_t>* ki, int32_t ioff, IL2CPP::Array<uint32_t>* ko, int32_t ooff);
		static void decroldqo32(int32_t rot, IL2CPP::Array<uint32_t>* ki, int32_t ioff, IL2CPP::Array<uint32_t>* ko, int32_t ooff);
		static uint32_t bytes2uint(IL2CPP::Array<uint8_t>* src, int32_t offset);
		static void uint2bytes(uint32_t word, IL2CPP::Array<uint8_t>* dst, int32_t offset);
		static void camelliaF2(IL2CPP::Array<uint32_t>* s, IL2CPP::Array<uint32_t>* skey, int32_t keyoff);
		static void camelliaFLs(IL2CPP::Array<uint32_t>* s, IL2CPP::Array<uint32_t>* fkey, int32_t keyoff);
		void setKey(bool forEncryption, IL2CPP::Array<uint8_t>* key);
		int32_t processBlock128(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t processBlock192or256(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void _ctor();
		void Init(bool forEncryption, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::ICipherParameters* parameters);
		mscorlib::System::String* get_AlgorithmName();
		bool get_IsPartialBlockOkay();
		int32_t GetBlockSize();
		int32_t ProcessBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff, IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		static void _cctor();
	};
}

