#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::EC::Rfc7748
{
	struct X25519Field : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t Size;
			int32_t M24;
			int32_t M25;
			int32_t M26;
			IL2CPP::Array<int32_t>* RootNegOne;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		static void Add(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* y, IL2CPP::Array<int32_t>* z);
		static void AddOne(IL2CPP::Array<int32_t>* z);
		static void AddOne(IL2CPP::Array<int32_t>* z, int32_t zOff);
		static void Apm(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* y, IL2CPP::Array<int32_t>* zp, IL2CPP::Array<int32_t>* zm);
		static void Carry(IL2CPP::Array<int32_t>* z);
		static void CNegate(int32_t negate, IL2CPP::Array<int32_t>* z);
		static void Copy(IL2CPP::Array<int32_t>* x, int32_t xOff, IL2CPP::Array<int32_t>* z, int32_t zOff);
		static IL2CPP::Array<int32_t>* Create();
		static IL2CPP::Array<int32_t>* CreateTable(int32_t n);
		static void CSwap(int32_t swap, IL2CPP::Array<int32_t>* a, IL2CPP::Array<int32_t>* b);
		static void Decode(IL2CPP::Array<uint8_t>* x, int32_t xOff, IL2CPP::Array<int32_t>* z);
		static void Decode128(IL2CPP::Array<uint8_t>* bs, int32_t off, IL2CPP::Array<int32_t>* z, int32_t zOff);
		static uint32_t Decode32(IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Encode(IL2CPP::Array<int32_t>* x, IL2CPP::Array<uint8_t>* z, int32_t zOff);
		static void Encode128(IL2CPP::Array<int32_t>* x, int32_t xOff, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Encode32(uint32_t n, IL2CPP::Array<uint8_t>* bs, int32_t off);
		static void Inv(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* z);
		static bool IsZeroVar(IL2CPP::Array<int32_t>* x);
		static void Mul(IL2CPP::Array<int32_t>* x, int32_t y, IL2CPP::Array<int32_t>* z);
		static void Mul(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* y, IL2CPP::Array<int32_t>* z);
		static void Negate(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* z);
		static void Normalize(IL2CPP::Array<int32_t>* z);
		static void One(IL2CPP::Array<int32_t>* z);
		static void PowPm5d8(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* rx2, IL2CPP::Array<int32_t>* rz);
		static void Reduce(IL2CPP::Array<int32_t>* z, int32_t c);
		static void Sqr(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* z);
		static void Sqr(IL2CPP::Array<int32_t>* x, int32_t n, IL2CPP::Array<int32_t>* z);
		static bool SqrtRatioVar(IL2CPP::Array<int32_t>* u, IL2CPP::Array<int32_t>* v, IL2CPP::Array<int32_t>* z);
		static void Sub(IL2CPP::Array<int32_t>* x, IL2CPP::Array<int32_t>* y, IL2CPP::Array<int32_t>* z);
		static void SubOne(IL2CPP::Array<int32_t>* z);
		static void Zero(IL2CPP::Array<int32_t>* z);
		static void _cctor();
	};
}

