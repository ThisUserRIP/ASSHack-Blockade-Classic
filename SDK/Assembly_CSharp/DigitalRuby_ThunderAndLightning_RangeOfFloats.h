#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct Random_; };

namespace Assembly_CSharp::DigitalRuby::ThunderAndLightning
{
	struct RangeOfFloats
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float Minimum;
		float Maximum;
		float Random_();
		float Random_(mscorlib::System::Random_* r);
	};
}

