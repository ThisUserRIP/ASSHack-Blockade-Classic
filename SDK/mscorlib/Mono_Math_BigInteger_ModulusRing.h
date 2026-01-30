#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Math_BigInteger.h"
namespace mscorlib::Mono::Math { struct BigInteger; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace mscorlib::Mono::Math
{
	struct BigInteger_ModulusRing : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::Math::BigInteger* mod;
		mscorlib::Mono::Math::BigInteger* constant;
		void _ctor(mscorlib::Mono::Math::BigInteger* modulus);
		void BarrettReduction(mscorlib::Mono::Math::BigInteger* x);
		mscorlib::Mono::Math::BigInteger* Multiply(mscorlib::Mono::Math::BigInteger* a, mscorlib::Mono::Math::BigInteger* b);
		mscorlib::Mono::Math::BigInteger* Difference(mscorlib::Mono::Math::BigInteger* a, mscorlib::Mono::Math::BigInteger* b);
		mscorlib::Mono::Math::BigInteger* Pow(mscorlib::Mono::Math::BigInteger* a, mscorlib::Mono::Math::BigInteger* k);
		mscorlib::Mono::Math::BigInteger* Pow(uint32_t b, mscorlib::Mono::Math::BigInteger* exp);
	};
}

