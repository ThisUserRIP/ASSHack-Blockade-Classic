#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Math_BigInteger.h"
namespace mscorlib::Mono::Math { struct BigInteger; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Mono_Math_BigInteger_Sign.h"
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace mscorlib::Mono::Math
{
	struct BigInteger_Kernel : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static mscorlib::Mono::Math::BigInteger* AddSameSign(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static mscorlib::Mono::Math::BigInteger* Subtract(mscorlib::Mono::Math::BigInteger* big, mscorlib::Mono::Math::BigInteger* small);
		static void MinusEq(mscorlib::Mono::Math::BigInteger* big, mscorlib::Mono::Math::BigInteger* small);
		static void PlusEq(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static mscorlib::Mono::Math::BigInteger_Sign Compare(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static uint32_t SingleByteDivideInPlace(mscorlib::Mono::Math::BigInteger* n, uint32_t d);
		static uint32_t DwordMod(mscorlib::Mono::Math::BigInteger* n, uint32_t d);
		static IL2CPP::Array<mscorlib::Mono::Math::BigInteger*>* DwordDivMod(mscorlib::Mono::Math::BigInteger* n, uint32_t d);
		static IL2CPP::Array<mscorlib::Mono::Math::BigInteger*>* multiByteDivide(mscorlib::Mono::Math::BigInteger* bi1, mscorlib::Mono::Math::BigInteger* bi2);
		static mscorlib::Mono::Math::BigInteger* LeftShift(mscorlib::Mono::Math::BigInteger* bi, int32_t n);
		static mscorlib::Mono::Math::BigInteger* RightShift(mscorlib::Mono::Math::BigInteger* bi, int32_t n);
		static mscorlib::Mono::Math::BigInteger* MultiplyByDword(mscorlib::Mono::Math::BigInteger* n, uint32_t f);
		static void Multiply(IL2CPP::Array<uint32_t>* x, uint32_t xOffset, uint32_t xLen, IL2CPP::Array<uint32_t>* y, uint32_t yOffset, uint32_t yLen, IL2CPP::Array<uint32_t>* d, uint32_t dOffset);
		static void MultiplyMod2p32pmod(IL2CPP::Array<uint32_t>* x, int32_t xOffset, int32_t xLen, IL2CPP::Array<uint32_t>* y, int32_t yOffest, int32_t yLen, IL2CPP::Array<uint32_t>* d, int32_t dOffset, int32_t mod);
		static uint32_t modInverse(mscorlib::Mono::Math::BigInteger* bi, uint32_t modulus);
		static mscorlib::Mono::Math::BigInteger* modInverse(mscorlib::Mono::Math::BigInteger* bi, mscorlib::Mono::Math::BigInteger* modulus);
	};
}

