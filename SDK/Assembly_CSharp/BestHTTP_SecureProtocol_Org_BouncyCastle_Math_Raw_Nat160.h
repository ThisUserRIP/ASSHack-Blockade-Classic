#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math { struct BigInteger; };

namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::Raw
{
	struct Nat160 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint64_t M;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static uint32_t Add(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static uint32_t AddBothTo(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static uint32_t AddTo(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static uint32_t AddTo(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff, uint32_t cIn);
		static uint32_t AddToEachOther(IL2CPP::Array<uint32_t>* u, int32_t uOff, IL2CPP::Array<uint32_t>* v, int32_t vOff);
		static void Copy(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static void Copy(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static IL2CPP::Array<uint32_t>* Create();
		static IL2CPP::Array<uint32_t>* CreateExt();
		static bool Diff(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static bool Eq(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y);
		static IL2CPP::Array<uint32_t>* FromBigInteger(Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x);
		static uint32_t GetBit(IL2CPP::Array<uint32_t>* x, int32_t bit);
		static bool Gte(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y);
		static bool Gte(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff);
		static bool IsOne(IL2CPP::Array<uint32_t>* x);
		static bool IsZero(IL2CPP::Array<uint32_t>* x);
		static void Mul(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* zz);
		static void Mul(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff);
		static uint32_t MulAddTo(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* zz);
		static uint32_t MulAddTo(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff);
		static uint64_t Mul33Add(uint32_t w, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t MulWordAddExt(uint32_t x, IL2CPP::Array<uint32_t>* yy, int32_t yyOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff);
		static uint32_t Mul33DWordAdd(uint32_t x, uint64_t y, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t Mul33WordAdd(uint32_t x, uint32_t y, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t MulWordDwordAdd(uint32_t x, uint64_t y, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t MulWordsAdd(uint32_t x, uint32_t y, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t MulWord(uint32_t x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static void Square(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* zz);
		static void Square(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff);
		static int32_t Sub(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static int32_t Sub(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static int32_t SubBothFrom(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static int32_t SubFrom(IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static int32_t SubFrom(IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ToBigInteger(IL2CPP::Array<uint32_t>* x);
		static void Zero(IL2CPP::Array<uint32_t>* z);
		void _ctor();
	};
}

