#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_ElementWithSource_Definition.h"
#include "Rewired_PlayerController_Axis.h"
namespace Rewired_Core::Rewired { struct PlayerController_Axis; };
#include "Rewired_AxisCoordinateMode.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_Element; };
namespace Rewired_Core::Rewired { struct PlayerController; };

namespace Rewired_Core::Rewired
{
	struct PlayerController_Axis_Definition : Rewired_Core::Rewired::PlayerController_ElementWithSource_Definition
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::AxisCoordinateMode coordinateMode;
		float absoluteToRelativeSensitivity;
		void _ctor();
		Rewired_Core::Rewired::PlayerController_Element* CreateElement(Rewired_Core::Rewired::PlayerController* A_1);
	};
}

