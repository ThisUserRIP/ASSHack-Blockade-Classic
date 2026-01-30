#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Crypto::Modes::Gcm
{
	struct GcmUtilities : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint32_t E1;
			uint64_t E1L;
			IL2CPP::Array<uint32_t>* LOOKUP;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static IL2CPP::Array<uint32_t>* GenerateLookup();
		static IL2CPP::Array<uint8_t>* OneAsBytes();
		static IL2CPP::Array<uint32_t>* OneAsUints();
		static IL2CPP::Array<uint64_t>* OneAsUlongs();
		static IL2CPP::Array<uint8_t>* AsBytes(IL2CPP::Array<uint32_t>* x);
		static void AsBytes(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint8_t>* z);
		static IL2CPP::Array<uint8_t>* AsBytes(IL2CPP::Array<uint64_t>* x);
		static void AsBytes(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint8_t>* z);
		static IL2CPP::Array<uint32_t>* AsUints(IL2CPP::Array<uint8_t>* bs);
		static void AsUints(IL2CPP::Array<uint8_t>* bs, IL2CPP::Array<uint32_t>* output);
		static IL2CPP::Array<uint64_t>* AsUlongs(IL2CPP::Array<uint8_t>* x);
		static void AsUlongs(IL2CPP::Array<uint8_t>* x, IL2CPP::Array<uint64_t>* z);
		static void Multiply(IL2CPP::Array<uint8_t>* x, IL2CPP::Array<uint8_t>* y);
		static void Multiply(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y);
		static void Multiply(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* y);
		static void MultiplyP(IL2CPP::Array<uint32_t>* x);
		static void MultiplyP(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void MultiplyP8(IL2CPP::Array<uint32_t>* x);
		static void MultiplyP8(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y);
		static uint32_t ShiftRight(IL2CPP::Array<uint32_t>* x);
		static uint32_t ShiftRight(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static uint32_t ShiftRightN(IL2CPP::Array<uint32_t>* x, int32_t n);
		static uint32_t ShiftRightN(IL2CPP::Array<uint32_t>* x, int32_t n, IL2CPP::Array<uint32_t>* z);
		static void Xor(IL2CPP::Array<uint8_t>* x, IL2CPP::Array<uint8_t>* y);
		static void Xor(IL2CPP::Array<uint8_t>* x, IL2CPP::Array<uint8_t>* y, int32_t yOff);
		static void Xor(IL2CPP::Array<uint8_t>* x, int32_t xOff, IL2CPP::Array<uint8_t>* y, int32_t yOff, IL2CPP::Array<uint8_t>* z, int32_t zOff);
		static void Xor(IL2CPP::Array<uint8_t>* x, IL2CPP::Array<uint8_t>* y, int32_t yOff, int32_t yLen);
		static void Xor(IL2CPP::Array<uint8_t>* x, int32_t xOff, IL2CPP::Array<uint8_t>* y, int32_t yOff, int32_t len);
		static void Xor(IL2CPP::Array<uint8_t>* x, IL2CPP::Array<uint8_t>* y, IL2CPP::Array<uint8_t>* z);
		static void Xor(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y);
		static void Xor(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void Xor(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* y);
		static void Xor(IL2CPP::Array<uint64_t>* x, IL2CPP::Array<uint64_t>* y, IL2CPP::Array<uint64_t>* z);
		void _ctor();
		static void _cctor();
	};
}

