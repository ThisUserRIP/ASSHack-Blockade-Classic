#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::Mono::Math { struct BigInteger; };
#include "Mono_Math_Prime_ConfidenceFactor.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace mscorlib::Mono::Math::Prime
{
	struct PrimalityTests : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t GetSPPRounds(mscorlib::Mono::Math::BigInteger* bi, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence);
		static bool Test(mscorlib::Mono::Math::BigInteger* n, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence);
		static bool RabinMillerTest(mscorlib::Mono::Math::BigInteger* n, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence);
		static bool SmallPrimeSppTest(mscorlib::Mono::Math::BigInteger* bi, mscorlib::Mono::Math::Prime::ConfidenceFactor confidence);
	};
}

