#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Mono_Math_Prime_Generator_PrimeGeneratorBase.h"
namespace mscorlib::Mono::Math { struct BigInteger; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };

namespace mscorlib::Mono::Math::Prime::Generator
{
	struct SequentialSearchPrimeGeneratorBase : mscorlib::Mono::Math::Prime::Generator::PrimeGeneratorBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::Mono::Math::BigInteger* GenerateSearchBase(int32_t bits, mscorlib::System::Object* context);
		mscorlib::Mono::Math::BigInteger* GenerateNewPrime(int32_t bits);
		mscorlib::Mono::Math::BigInteger* GenerateNewPrime(int32_t bits, mscorlib::System::Object* context);
		bool IsPrimeAcceptable(mscorlib::Mono::Math::BigInteger* bi, mscorlib::System::Object* context);
		void _ctor();
	};
}

