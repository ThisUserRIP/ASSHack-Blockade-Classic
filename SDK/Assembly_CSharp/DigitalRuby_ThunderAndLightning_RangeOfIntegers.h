#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Random_; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct RangeOfIntegers
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t Minimum;
		int32_t Maximum;
		int32_t Random_();
		int32_t Random_(mscorlib::System::Random_* r);
	};
}

