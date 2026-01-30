#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Mono_Security::Mono::Math { struct BigInteger; };
#include "Mono_Math_Prime_ConfidenceFactor.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Mono_Security::Mono::Math::Prime
{
	struct PrimalityTests : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t GetSPPRounds(Mono_Security::Mono::Math::BigInteger* bi, Mono_Security::Mono::Math::Prime::ConfidenceFactor confidence);
		static bool RabinMillerTest(Mono_Security::Mono::Math::BigInteger* n, Mono_Security::Mono::Math::Prime::ConfidenceFactor confidence);
	};
}

