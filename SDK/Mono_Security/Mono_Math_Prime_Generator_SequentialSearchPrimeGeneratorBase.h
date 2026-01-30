#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Math_Prime_Generator_PrimeGeneratorBase.h"
namespace Mono_Security::Mono::Math { struct BigInteger; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Mono_Security::Mono::Math::Prime::Generator
{
	struct SequentialSearchPrimeGeneratorBase : Mono_Security::Mono::Math::Prime::Generator::PrimeGeneratorBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Mono_Security::Mono::Math::BigInteger* GenerateSearchBase(int32_t bits, mscorlib::System::Object* context);
		Mono_Security::Mono::Math::BigInteger* GenerateNewPrime(int32_t bits);
		Mono_Security::Mono::Math::BigInteger* GenerateNewPrime(int32_t bits, mscorlib::System::Object* context);
		bool IsPrimeAcceptable(Mono_Security::Mono::Math::BigInteger* bi, mscorlib::System::Object* context);
		void _ctor();
	};
}

