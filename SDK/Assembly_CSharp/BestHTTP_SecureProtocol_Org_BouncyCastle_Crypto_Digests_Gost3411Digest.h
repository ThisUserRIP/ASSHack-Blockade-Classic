#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto { struct IBlockCipher; };
#include "..\mscorlib\System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct Gost3411Digest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* H;
		IL2CPP::Array<uint8_t>* L;
		IL2CPP::Array<uint8_t>* M;
		IL2CPP::Array<uint8_t>* Sum;
		IL2CPP::Array<IL2CPP::Array<uint8_t>*>* C;
		IL2CPP::Array<uint8_t>* xBuf;
		int32_t xBufOff;
		uint64_t byteCount;
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::IBlockCipher* cipher;
		IL2CPP::Array<uint8_t>* sBox;
		IL2CPP::Array<uint8_t>* K;
		IL2CPP::Array<uint8_t>* a;
		IL2CPP::Array<int16_t>* wS;
		IL2CPP::Array<int16_t>* w_S;
		IL2CPP::Array<uint8_t>* S;
		IL2CPP::Array<uint8_t>* U;
		IL2CPP::Array<uint8_t>* V;
		IL2CPP::Array<uint8_t>* W;
		struct StaticFields
		{
			int32_t DIGEST_LENGTH;
			IL2CPP::Array<uint8_t>* C2;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<IL2CPP::Array<uint8_t>*>* MakeC();
		void _ctor();
		void _ctor(IL2CPP::Array<uint8_t>* sBoxParam);
		void _ctor(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t);
		mscorlib::System::String* get_AlgorithmName();
		int32_t GetDigestSize();
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t length);
		IL2CPP::Array<uint8_t>* P(IL2CPP::Array<uint8_t>* input);
		IL2CPP::Array<uint8_t>* A(IL2CPP::Array<uint8_t>* input);
		void E(IL2CPP::Array<uint8_t>* key, IL2CPP::Array<uint8_t>* s, int32_t sOff, IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void fw(IL2CPP::Array<uint8_t>* input);
		void processBlock(IL2CPP::Array<uint8_t>* input, int32_t inOff);
		void finish();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		void Reset();
		void sumByteArray(IL2CPP::Array<uint8_t>* input);
		static void cpyBytesToShort(IL2CPP::Array<uint8_t>* S, IL2CPP::Array<int16_t>* wS);
		static void cpyShortToBytes(IL2CPP::Array<int16_t>* wS, IL2CPP::Array<uint8_t>* S);
		int32_t GetByteLength();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
		static void _cctor();
	};
}

