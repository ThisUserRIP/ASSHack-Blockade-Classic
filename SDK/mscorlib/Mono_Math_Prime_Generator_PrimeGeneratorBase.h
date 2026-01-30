#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Math_Prime_ConfidenceFactor.h"
namespace mscorlib::Mono::Math::Prime { struct PrimalityTest; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::Mono::Math { struct BigInteger; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Math::Prime::Generator
{
	struct PrimeGeneratorBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::Math::Prime::ConfidenceFactor get_Confidence();
		mscorlib::Mono::Math::Prime::PrimalityTest* get_PrimalityTest();
		int32_t get_TrialDivisionBounds();
		mscorlib::Mono::Math::BigInteger* GenerateNewPrime(int32_t bits);
		void _ctor();
	};
}

