#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Mono_Math_BigInteger_Sign.h"
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::Mono::Math
{
	struct BigInteger : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t length;
		IL2CPP::Array<uint32_t>* data;
		struct StaticFields
		{
			IL2CPP::Array<uint32_t>* smallPrimes;
			mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::Mono::Math::BigInteger_Sign sign, uint32_t len);
		void _ctor(mscorlib::Mono::Math::BigInteger* bi);
		void _ctor(mscorlib::Mono::Math::BigInteger* bi, uint32_t len);
		void _ctor(IL2CPP::Array<uint8_t>* inData);
		void _ctor(uint32_t ui);
		static mscorlib::Mono::Math::BigInteger* op_Implicit(uint32_t value);
		static mscorlib::Mono::Math::BigInteger* op_Implicit(int32_t value);
		static mscorlib::Mono::Math::BigInteger* op_Addition(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static mscorlib::Mono::Math::BigInteger* op_Subtraction(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static uint32_t op_Modulus(mscorlib::Mono::Math::BigInteger* bi, uint32_t ui);
		static mscorlib::Mono::Math::BigInteger* op_Modulus(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static mscorlib::Mono::Math::BigInteger* op_Division(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static mscorlib::Mono::Math::BigInteger* op_Multiply(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static mscorlib::Mono::Math::BigInteger* op_Multiply(mscorlib::Mono::Math::BigInteger* bi, int32_t i);
		static mscorlib::Mono::Math::BigInteger* op_LeftShift(mscorlib::Mono::Math::BigInteger* bi1, int32_t shiftVal);
		static mscorlib::Mono::Math::BigInteger* op_RightShift(mscorlib::Mono::Math::BigInteger* bi1, int32_t shiftVal);
		static mscorlib::System::Security::Cryptography::RandomNumberGenerator* get_Rng();
		static mscorlib::Mono::Math::BigInteger* GenerateRandom(int32_t bits, mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng);
		static mscorlib::Mono::Math::BigInteger* GenerateRandom(int32_t bits);
		void Randomize(mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng);
		void Randomize();
		int32_t BitCount();
		bool TestBit(uint32_t bitNum);
		bool TestBit(int32_t bitNum);
		void SetBit(uint32_t bitNum);
		void SetBit(uint32_t bitNum, bool value);
		int32_t LowestSetBit();
		IL2CPP::Array<uint8_t>* GetBytes();
		static bool op_Equality(mscorlib::Mono::Math::BigInteger* bi1, uint32_t ui);
		static bool op_Inequality(mscorlib::Mono::Math::BigInteger* bi1, uint32_t ui);
		static bool op_Equality(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static bool op_Inequality(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static bool op_GreaterThan(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static bool op_LessThan(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static bool op_GreaterThanOrEqual(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static bool op_LessThanOrEqual(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		mscorlib::System::String* ToString(uint32_t radix);
		mscorlib::System::String* ToString(uint32_t radix, mscorlib::System::String* characterSet);
		void Normalize();
		void Clear();
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		bool Equals(mscorlib::System::Object* o);
		mscorlib::Mono::Math::BigInteger* ModInverse(mscorlib::Mono::Math::BigInteger* modulus);
		mscorlib::Mono::Math::BigInteger* ModPow(mscorlib::Mono::Math::BigInteger* exp, mscorlib::Mono::Math::BigInteger* n);
		bool IsProbablePrime();
		static mscorlib::Mono::Math::BigInteger* GeneratePseudoPrime(int32_t bits);
		void Incr2();
		static void _cctor();
	};
	mscorlib::Mono::Math::BigInteger* operator+(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	mscorlib::Mono::Math::BigInteger* operator-(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	uint32_t operator%(mscorlib::Mono::Math::BigInteger& bi, uint32_t ui);
	mscorlib::Mono::Math::BigInteger* operator%(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	mscorlib::Mono::Math::BigInteger* operator/(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	mscorlib::Mono::Math::BigInteger* operator*(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	mscorlib::Mono::Math::BigInteger* operator*(mscorlib::Mono::Math::BigInteger& bi, int32_t i);
	mscorlib::Mono::Math::BigInteger* operator<<(mscorlib::Mono::Math::BigInteger& bi1, int32_t shiftVal);
	mscorlib::Mono::Math::BigInteger* operator>>(mscorlib::Mono::Math::BigInteger& bi1, int32_t shiftVal);
	bool operator==(mscorlib::Mono::Math::BigInteger& bi1, uint32_t& ui);
	bool operator!=(mscorlib::Mono::Math::BigInteger& bi1, uint32_t& ui);
	bool operator==(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	bool operator!=(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	bool operator>(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	bool operator<(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	bool operator>=(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
	bool operator<=(mscorlib::Mono::Math::BigInteger& bi1, mscorlib::Mono::Math::BigInteger& bi2);
}

