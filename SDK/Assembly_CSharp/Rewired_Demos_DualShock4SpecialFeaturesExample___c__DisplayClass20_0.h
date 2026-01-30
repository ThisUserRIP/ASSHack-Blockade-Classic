#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Demos_DualShock4SpecialFeaturesExample.h"
namespace Assembly_CSharp::Rewired::Demos { struct DualShock4SpecialFeaturesExample; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp::Rewired::Demos { struct DualShock4SpecialFeaturesExample_Touch; };

namespace Assembly_CSharp::Rewired::Demos
{
	struct DualShock4SpecialFeaturesExample___c__DisplayClass20_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t touchId;
		void _ctor();
		bool _HandleTouchpad_b__0(Assembly_CSharp::Rewired::Demos::DualShock4SpecialFeaturesExample_Touch* x);
	};
}

