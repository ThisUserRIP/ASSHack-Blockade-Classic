#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_PlayerController_Definition.h"
#include "Rewired_PlayerMouse.h"
namespace Rewired_Core::Rewired { struct PlayerMouse; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Utils_Classes_Data_ScreenRect.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct ScreenRect; };
#include "Rewired_PlayerMouse_MovementAreaUnit.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	struct PlayerMouse_Definition : Rewired_Core::Rewired::PlayerController_Definition
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool defaultToCenter;
		bool clampToMovementArea;
		Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect movementArea;
		Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit movementAreaUnit;
		float pointerSpeed;
		bool useHardwarePointerPosition;
		void _ctor();
	};
}

