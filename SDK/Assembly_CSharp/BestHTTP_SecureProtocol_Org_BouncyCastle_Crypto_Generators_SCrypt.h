#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct Array; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Generators
{
	struct SCrypt : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static IL2CPP::Array<uint8_t>* Generate(IL2CPP::Array<uint8_t>* P, IL2CPP::Array<uint8_t>* S, int32_t N, int32_t r, int32_t p, int32_t dkLen);
		static IL2CPP::Array<uint8_t>* MFcrypt(IL2CPP::Array<uint8_t>* P, IL2CPP::Array<uint8_t>* S, int32_t N, int32_t r, int32_t p, int32_t dkLen);
		static IL2CPP::Array<uint8_t>* SingleIterationPBKDF2(IL2CPP::Array<uint8_t>* P, IL2CPP::Array<uint8_t>* S, int32_t dkLen);
		static void SMix(IL2CPP::Array<uint32_t>* B, int32_t BOff, int32_t N, int32_t r);
		static void BlockMix(IL2CPP::Array<uint32_t>* B, IL2CPP::Array<uint32_t>* X1, IL2CPP::Array<uint32_t>* X2, IL2CPP::Array<uint32_t>* Y, int32_t r);
		static void Xor(IL2CPP::Array<uint32_t>* a, IL2CPP::Array<uint32_t>* b, int32_t bOff, IL2CPP::Array<uint32_t>* output);
		static void Clear(mscorlib::System::Array* array);
		static void ClearAll(IL2CPP::Array<mscorlib::System::Array*>* arrays);
		static bool IsPowerOf2(int32_t x);
		void _ctor();
	};
}

