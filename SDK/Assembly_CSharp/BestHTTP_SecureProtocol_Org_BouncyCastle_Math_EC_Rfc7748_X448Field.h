#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc7748
{
	struct X448Field : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t Size;
			uint32_t M28;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void Add(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void AddOne(IL2CPP::Array<uint32_t>* z);
		static void AddOne(IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static void Carry(IL2CPP::Array<uint32_t>* z);
		static void CNegate(int32_t negate, IL2CPP::Array<uint32_t>* z);
		static void Copy(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static IL2CPP::Array<uint32_t>* Create();
		static void CSwap(int32_t swap, IL2CPP::Array<uint32_t>* a, IL2CPP::Array<uint32_t>* b);
		static void Decode(IL2CPP::Array<uint8_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z);
		static uint32_t Decode24(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static uint32_t Decode32(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Decode56(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static void Encode(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint8_t>* z, int32_t zOff);
		static void Encode24(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Encode32(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Encode56(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Inv(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static bool IsZeroVar(IL2CPP::Array<uint32_t>* x);
		static void Mul(IL2CPP::Array<uint32_t>* x, uint32_t y, IL2CPP::Array<uint32_t>* z);
		static void Mul(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void Negate(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void Normalize(IL2CPP::Array<uint32_t>* z);
		static void One(IL2CPP::Array<uint32_t>* z);
		static void PowPm3d4(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void Reduce(IL2CPP::Array<uint32_t>* z, int32_t c);
		static void Sqr(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void Sqr(IL2CPP::Array<uint32_t>* x, int32_t n, IL2CPP::Array<uint32_t>* z);
		static bool SqrtRatioVar(IL2CPP::Array<uint32_t>* u, IL2CPP::Array<uint32_t>* v, IL2CPP::Array<uint32_t>* z);
		static void Sub(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void Zero(IL2CPP::Array<uint32_t>* z);
	};
}

