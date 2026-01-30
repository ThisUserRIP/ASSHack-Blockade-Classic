#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Utils_Classes_Data_ScreenRect.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct ScreenRect; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_PlayerMouse_MovementAreaUnit.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseAxis; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseWheel; };
namespace Rewired_Core::Rewired { struct PlayerController_Button; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T> struct Action_1; };

namespace Rewired_Core::Rewired
{
	struct IPlayerMouse
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_defaultToCenter();
		Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect get_movementArea();
		void set_movementArea(Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect value);
		Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit get_movementAreaUnit();
		void set_movementAreaUnit(Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPositionPrev();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPositionDelta();
		Rewired_Core::Rewired::PlayerController_MouseAxis* get_xAxis();
		Rewired_Core::Rewired::PlayerController_MouseAxis* get_yAxis();
		Rewired_Core::Rewired::PlayerController_MouseWheel* get_wheel();
		Rewired_Core::Rewired::PlayerController_Button* get_leftButton();
		Rewired_Core::Rewired::PlayerController_Button* get_rightButton();
		Rewired_Core::Rewired::PlayerController_Button* get_middleButton();
		float get_pointerSpeed();
		bool get_useHardwarePointerPosition();
		void add_ScreenPositionChangedEvent(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		void remove_ScreenPositionChangedEvent(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
	};
}

