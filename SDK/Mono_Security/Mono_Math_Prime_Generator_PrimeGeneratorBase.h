#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Math_Prime_ConfidenceFactor.h"
namespace Mono_Security::Mono::Math::Prime { struct PrimalityTest; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Mono_Security::Mono::Math { struct BigInteger; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Math::Prime::Generator
{
	struct PrimeGeneratorBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Math::Prime::ConfidenceFactor get_Confidence();
		Mono_Security::Mono::Math::Prime::PrimalityTest* get_PrimalityTest();
		int32_t get_TrialDivisionBounds();
		Mono_Security::Mono::Math::BigInteger* GenerateNewPrime(int32_t bits);
		void _ctor();
	};
}

