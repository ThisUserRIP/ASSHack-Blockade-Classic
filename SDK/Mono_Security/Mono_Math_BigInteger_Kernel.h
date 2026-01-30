#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Math_BigInteger.h"
namespace Mono_Security::Mono::Math { struct BigInteger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Mono_Math_BigInteger_Sign.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Mono_Security::Mono::Math
{
	struct BigInteger_Kernel : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static Mono_Security::Mono::Math::BigInteger* Subtract(Mono_Security::Mono::Math::BigInteger* big, Mono_Security::Mono::Math::BigInteger* small);
		static void MinusEq(Mono_Security::Mono::Math::BigInteger* big, Mono_Security::Mono::Math::BigInteger* small);
		static void PlusEq(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static Mono_Security::Mono::Math::BigInteger_Sign Compare(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static uint32_t SingleByteDivideInPlace(Mono_Security::Mono::Math::BigInteger* n, uint32_t d);
		static uint32_t DwordMod(Mono_Security::Mono::Math::BigInteger* n, uint32_t d);
		static IL2CPP::Array<Mono_Security::Mono::Math::BigInteger*>* DwordDivMod(Mono_Security::Mono::Math::BigInteger* n, uint32_t d);
		static IL2CPP::Array<Mono_Security::Mono::Math::BigInteger*>* multiByteDivide(Mono_Security::Mono::Math::BigInteger* bi1, Mono_Security::Mono::Math::BigInteger* bi2);
		static Mono_Security::Mono::Math::BigInteger* LeftShift(Mono_Security::Mono::Math::BigInteger* bi, int32_t n);
		static Mono_Security::Mono::Math::BigInteger* RightShift(Mono_Security::Mono::Math::BigInteger* bi, int32_t n);
		static void Multiply(IL2CPP::Array<uint32_t>* x, uint32_t xOffset, uint32_t xLen, IL2CPP::Array<uint32_t>* y, uint32_t yOffset, uint32_t yLen, IL2CPP::Array<uint32_t>* d, uint32_t dOffset);
		static void MultiplyMod2p32pmod(IL2CPP::Array<uint32_t>* x, int32_t xOffset, int32_t xLen, IL2CPP::Array<uint32_t>* y, int32_t yOffest, int32_t yLen, IL2CPP::Array<uint32_t>* d, int32_t dOffset, int32_t mod);
		static uint32_t modInverse(Mono_Security::Mono::Math::BigInteger* bi, uint32_t modulus);
		static Mono_Security::Mono::Math::BigInteger* modInverse(Mono_Security::Mono::Math::BigInteger* bi, Mono_Security::Mono::Math::BigInteger* modulus);
	};
}

