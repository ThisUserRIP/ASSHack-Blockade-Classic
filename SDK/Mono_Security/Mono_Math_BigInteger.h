#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System::Security::Cryptography { struct RandomNumberGenerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Mono_Math_BigInteger_Sign.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace Mono_Security::Mono::Math
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
		void _ctor(Mono_Security::Mono::Math::BigInteger_Sign sign, uint32_t len);
		void _ctor(Mono_Security::Mono::Math::BigInteger* bi);
		void _ctor(Mono_Security::Mono::Math::BigInteger* bi, uint32_t len);
		void _ctor(IL2CPP::Array<uint8_t>* inData);
		void _ctor(uint32_t ui);
		static Mono_Security::Mono::Math::BigInteger* op_Implicit(uint32_t value);
		static Mono_Security::Mono::Math::BigInteger* op_Implicit(int32_t value);
		static Mono_Security::Mono::Math::BigInteger* op_Subtraction(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static uint32_t op_Modulus(Mono_Security::Mono::Math::BigInteger* bi, uint32_t ui);
		static Mono_Security::Mono::Math::BigInteger* op_Modulus(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static Mono_Security::Mono::Math::BigInteger* op_Division(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static Mono_Security::Mono::Math::BigInteger* op_Multiply(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static Mono_Security::Mono::Math::BigInteger* op_LeftShift(Mono_Security::Mono::Math::BigInteger* bi1, int32_t shiftVal);
		static Mono_Security::Mono::Math::BigInteger* op_RightShift(Mono_Security::Mono::Math::BigInteger* bi1, int32_t shiftVal);
		static mscorlib::System::Security::Cryptography::RandomNumberGenerator* get_Rng();
		static Mono_Security::Mono::Math::BigInteger* GenerateRandom(int32_t bits, mscorlib::System::Security::Cryptography::RandomNumberGenerator* rng);
		static Mono_Security::Mono::Math::BigInteger* GenerateRandom(int32_t bits);
		int32_t BitCount();
		bool TestBit(int32_t bitNum);
		void SetBit(uint32_t bitNum);
		void SetBit(uint32_t bitNum, bool value);
		int32_t LowestSetBit();
		IL2CPP::Array<uint8_t>* GetBytes();
		static bool op_Equality(Mono_Security::Mono::Math::BigInteger* bi1, uint32_t ui);
		static bool op_Inequality(Mono_Security::Mono::Math::BigInteger* bi1, uint32_t ui);
		static bool op_Equality(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static bool op_Inequality(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static bool op_GreaterThan(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static bool op_LessThan(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static bool op_GreaterThanOrEqual(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static bool op_LessThanOrEqual(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		mscorlib::System::String* ToString(uint32_t radix);
		mscorlib::System::String* ToString(uint32_t radix, mscorlib::System::String* characterSet);
		void Normalize();
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		bool Equals(mscorlib::System::Object* o);
		Mono_Security::Mono::Math::BigInteger* ModInverse(Mono_Security::Mono::Math::BigInteger* modulus);
		static Mono_Security::Mono::Math::BigInteger* GeneratePseudoPrime(int32_t bits);
		void Incr2();
		static void _cctor();
	};
	Mono_Security::Mono::Math::BigInteger* operator-(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
	uint32_t operator%(Mono_Security::Mono::Math::BigInteger& bi, uint32_t ui);
	Mono_Security::Mono::Math::BigInteger* operator%(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
	Mono_Security::Mono::Math::BigInteger* operator/(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
	Mono_Security::Mono::Math::BigInteger* operator*(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
	Mono_Security::Mono::Math::BigInteger* operator<<(Mono_Security::Mono::Math::BigInteger& bi1, int32_t shiftVal);
	Mono_Security::Mono::Math::BigInteger* operator>>(Mono_Security::Mono::Math::BigInteger& bi1, int32_t shiftVal);
	bool operator==(Mono_Security::Mono::Math::BigInteger& bi1, uint32_t& ui);
	bool operator!=(Mono_Security::Mono::Math::BigInteger& bi1, uint32_t& ui);
	bool operator==(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
	bool operator!=(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
	bool operator>(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
	bool operator<(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
	bool operator>=(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
	bool operator<=(Mono_Security::Mono::Math::BigInteger& bi1, Mono_Security::Mono::Math::BigInteger& bi2);
}

