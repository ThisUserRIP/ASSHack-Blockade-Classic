#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Math_BigInteger.h"
namespace Mono_Security::Mono::Math { struct BigInteger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Mono_Security::Mono::Math
{
	struct BigInteger_ModulusRing : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Math::BigInteger* mod;
		Mono_Security::Mono::Math::BigInteger* constant;
		void _ctor(Mono_Security::Mono::Math::BigInteger* modulus);
		void BarrettReduction(Mono_Security::Mono::Math::BigInteger* x);
		Mono_Security::Mono::Math::BigInteger* Multiply(Mono_Security::Mono::Math::BigInteger* a, Mono_Security::Mono::Math::BigInteger* b);
		Mono_Security::Mono::Math::BigInteger* Difference(Mono_Security::Mono::Math::BigInteger* a, Mono_Security::Mono::Math::BigInteger* b);
		Mono_Security::Mono::Math::BigInteger* Pow(Mono_Security::Mono::Math::BigInteger* a, Mono_Security::Mono::Math::BigInteger* k);
		Mono_Security::Mono::Math::BigInteger* Pow(uint32_t b, Mono_Security::Mono::Math::BigInteger* exp);
	};
}

