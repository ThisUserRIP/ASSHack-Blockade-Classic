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
	struct Nat : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint64_t M;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static uint32_t Add(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static uint32_t Add33At(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos);
		static uint32_t Add33At(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos);
		static uint32_t Add33To(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z);
		static uint32_t Add33To(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t AddBothTo(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static uint32_t AddBothTo(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t AddDWordAt(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos);
		static uint32_t AddDWordAt(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos);
		static uint32_t AddDWordTo(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z);
		static uint32_t AddDWordTo(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t AddTo(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static uint32_t AddTo(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t AddWordAt(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos);
		static uint32_t AddWordAt(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos);
		static uint32_t AddWordTo(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z);
		static uint32_t AddWordTo(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t CAdd(int32_t len, int32_t mask, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static void CMov(int32_t len, int32_t mask, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static void CMov(int32_t len, int32_t mask, IL2CPP::Array<int32_t>* x, int32_t xOff, IL2CPP::Array<int32_t>* z, int32_t zOff);
		static void Copy(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static IL2CPP::Array<uint32_t>* Copy(int32_t len, IL2CPP::Array<uint32_t>* x);
		static void Copy(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static IL2CPP::Array<uint32_t>* Create(int32_t len);
		static IL2CPP::Array<uint64_t>* Create64(int32_t len);
		static int32_t Dec(int32_t len, IL2CPP::Array<uint32_t>* z);
		static int32_t Dec(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static int32_t DecAt(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zPos);
		static int32_t DecAt(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos);
		static bool Eq(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y);
		static IL2CPP::Array<uint32_t>* FromBigInteger(int32_t bits, Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* x);
		static uint32_t GetBit(IL2CPP::Array<uint32_t>* x, int32_t bit);
		static bool Gte(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y);
		static uint32_t Inc(int32_t len, IL2CPP::Array<uint32_t>* z);
		static uint32_t Inc(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static uint32_t IncAt(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zPos);
		static uint32_t IncAt(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos);
		static bool IsOne(int32_t len, IL2CPP::Array<uint32_t>* x);
		static bool IsZero(int32_t len, IL2CPP::Array<uint32_t>* x);
		static void Mul(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* zz);
		static void Mul(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff);
		static void Mul(IL2CPP::Array<uint32_t>* x, int32_t xOff, int32_t xLen, IL2CPP::Array<uint32_t>* y, int32_t yOff, int32_t yLen, IL2CPP::Array<uint32_t>* zz, int32_t zzOff);
		static uint32_t MulAddTo(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* zz);
		static uint32_t MulAddTo(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff);
		static uint32_t Mul31BothAdd(int32_t len, uint32_t a, IL2CPP::Array<uint32_t>* x, uint32_t b, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t MulWord(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static uint32_t MulWord(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t MulWordAddTo(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t MulWordDwordAddAt(int32_t len, uint32_t x, uint64_t y, IL2CPP::Array<uint32_t>* z, int32_t zPos);
		static uint32_t ShiftDownBit(int32_t len, IL2CPP::Array<uint32_t>* z, uint32_t c);
		static uint32_t ShiftDownBit(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, uint32_t c);
		static uint32_t ShiftDownBit(int32_t len, IL2CPP::Array<uint32_t>* x, uint32_t c, IL2CPP::Array<uint32_t>* z);
		static uint32_t ShiftDownBit(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, uint32_t c, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t ShiftDownBits(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t bits, uint32_t c);
		static uint32_t ShiftDownBits(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t bits, uint32_t c);
		static uint32_t ShiftDownBits(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t bits, uint32_t c, IL2CPP::Array<uint32_t>* z);
		static uint32_t ShiftDownBits(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, int32_t bits, uint32_t c, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint32_t ShiftDownWord(int32_t len, IL2CPP::Array<uint32_t>* z, uint32_t c);
		static uint32_t ShiftUpBit(int32_t len, IL2CPP::Array<uint32_t>* z, uint32_t c);
		static uint32_t ShiftUpBit(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, uint32_t c);
		static uint32_t ShiftUpBit(int32_t len, IL2CPP::Array<uint32_t>* x, uint32_t c, IL2CPP::Array<uint32_t>* z);
		static uint32_t ShiftUpBit(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, uint32_t c, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint64_t ShiftUpBit64(int32_t len, IL2CPP::Array<uint64_t>* x, int32_t xOff, uint64_t c, IL2CPP::Array<uint64_t>* z, int32_t zOff);
		static uint32_t ShiftUpBits(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t bits, uint32_t c);
		static uint32_t ShiftUpBits(int32_t len, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t bits, uint32_t c);
		static uint64_t ShiftUpBits64(int32_t len, IL2CPP::Array<uint64_t>* z, int32_t zOff, int32_t bits, uint64_t c);
		static uint32_t ShiftUpBits(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t bits, uint32_t c, IL2CPP::Array<uint32_t>* z);
		static uint32_t ShiftUpBits(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, int32_t bits, uint32_t c, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static uint64_t ShiftUpBits64(int32_t len, IL2CPP::Array<uint64_t>* x, int32_t xOff, int32_t bits, uint64_t c, IL2CPP::Array<uint64_t>* z, int32_t zOff);
		static void Square(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* zz);
		static void Square(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* zz, int32_t zzOff);
		static uint32_t SquareWordAdd(IL2CPP::Array<uint32_t>* x, int32_t xPos, IL2CPP::Array<uint32_t>* z);
		static uint32_t SquareWordAdd(IL2CPP::Array<uint32_t>* x, int32_t xOff, int32_t xPos, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static int32_t Sub(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static int32_t Sub(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static int32_t Sub33At(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos);
		static int32_t Sub33At(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos);
		static int32_t Sub33From(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z);
		static int32_t Sub33From(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static int32_t SubBothFrom(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* y, IL2CPP::Array<uint32_t>* z);
		static int32_t SubBothFrom(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* y, int32_t yOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static int32_t SubDWordAt(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos);
		static int32_t SubDWordAt(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos);
		static int32_t SubDWordFrom(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z);
		static int32_t SubDWordFrom(int32_t len, uint64_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static int32_t SubFrom(int32_t len, IL2CPP::Array<uint32_t>* x, IL2CPP::Array<uint32_t>* z);
		static int32_t SubFrom(int32_t len, IL2CPP::Array<uint32_t>* x, int32_t xOff, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static int32_t SubWordAt(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zPos);
		static int32_t SubWordAt(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff, int32_t zPos);
		static int32_t SubWordFrom(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z);
		static int32_t SubWordFrom(int32_t len, uint32_t x, IL2CPP::Array<uint32_t>* z, int32_t zOff);
		static Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Math::BigInteger* ToBigInteger(int32_t len, IL2CPP::Array<uint32_t>* x);
		static void Zero(int32_t len, IL2CPP::Array<uint32_t>* z);
		void _ctor();
	};
}

