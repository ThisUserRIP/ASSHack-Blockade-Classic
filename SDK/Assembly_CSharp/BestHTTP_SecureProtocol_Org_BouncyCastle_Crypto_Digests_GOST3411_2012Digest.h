#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities { struct IMemoable; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Digests
{
	struct GOST3411_2012Digest : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<uint8_t>* IV;
		IL2CPP::Array<uint8_t>* N;
		IL2CPP::Array<uint8_t>* Sigma;
		IL2CPP::Array<uint8_t>* Ki;
		IL2CPP::Array<uint8_t>* m;
		IL2CPP::Array<uint8_t>* h;
		IL2CPP::Array<uint8_t>* tmp;
		IL2CPP::Array<uint8_t>* block;
		int32_t bOff;
		struct StaticFields
		{
			IL2CPP::Array<IL2CPP::Array<uint8_t>*>* C;
			IL2CPP::Array<uint8_t>* Zero;
			IL2CPP::Array<IL2CPP::Array<uint64_t>*>* T;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(IL2CPP::Array<uint8_t>* IV);
		mscorlib::System::String* get_AlgorithmName();
		Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* Copy();
		int32_t DoFinal(IL2CPP::Array<uint8_t>* output, int32_t outOff);
		int32_t GetByteLength();
		int32_t GetDigestSize();
		void Reset();
		void Reset(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Utilities::IMemoable* other);
		void Update(uint8_t input);
		void BlockUpdate(IL2CPP::Array<uint8_t>* input, int32_t inOff, int32_t len);
		void F(IL2CPP::Array<uint8_t>* V);
		void xor512(IL2CPP::Array<uint8_t>* A, IL2CPP::Array<uint8_t>* B);
		void E(IL2CPP::Array<uint8_t>* K, IL2CPP::Array<uint8_t>* m);
		void g_N(IL2CPP::Array<uint8_t>* h, IL2CPP::Array<uint8_t>* N, IL2CPP::Array<uint8_t>* m);
		void addMod512(IL2CPP::Array<uint8_t>* A, int32_t num);
		void addMod512(IL2CPP::Array<uint8_t>* A, IL2CPP::Array<uint8_t>* B);
		void reverse(IL2CPP::Array<uint8_t>* src, IL2CPP::Array<uint8_t>* dst);
		static void _cctor();
	};
}

