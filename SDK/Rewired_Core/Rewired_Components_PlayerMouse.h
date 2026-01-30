#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Components_PlayerController.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "Rewired_PlayerMouse_MovementAreaUnit.h"
namespace Rewired_Core::Rewired::Components { struct PlayerMouse_ScreenPositionChangedHandler; };
namespace Rewired_Core::Rewired { struct PlayerMouse; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_Utils_Classes_Data_ScreenRect.h"
namespace Rewired_Core::Rewired::Utils::Classes::Data { struct ScreenRect; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseAxis; };
namespace Rewired_Core::Rewired { struct PlayerController_MouseWheel; };
namespace Rewired_Core::Rewired { struct PlayerController_Button; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace Rewired_Core::Rewired { struct PlayerController; };
namespace mscorlib::System { struct Object; };
namespace Rewired_Core::Rewired::Components { struct PlayerController_ElementInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Rewired_Core::Rewired::Components
{
	struct PlayerMouse : Rewired_Core::Rewired::Components::PlayerController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _defaultToCenter;
		float _pointerSpeed;
		bool _useHardwarePointerPosition;
		bool _clampToMovementArea;
		UnityEngine_CoreModule::UnityEngine::Rect _movementArea;
		Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit _movementAreaUnit;
		Rewired_Core::Rewired::Components::PlayerMouse_ScreenPositionChangedHandler* _onScreenPositionChanged;
		Rewired_Core::Rewired::PlayerMouse* get_source();
		bool get_defaultToCenter();
		void set_defaultToCenter(bool value);
		bool get_clampToMovementArea();
		void set_clampToMovementArea(bool value);
		Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect get_movementArea();
		void set_movementArea(Rewired_Core::Rewired::Utils::Classes::Data::ScreenRect value);
		Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit get_movementAreaUnit();
		void set_movementAreaUnit(Rewired_Core::Rewired::PlayerMouse_MovementAreaUnit value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPosition();
		void set_screenPosition(UnityEngine_CoreModule::UnityEngine::Vector2 value);
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPositionPrev();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_screenPositionDelta();
		Rewired_Core::Rewired::PlayerController_MouseAxis* get_xAxis();
		Rewired_Core::Rewired::PlayerController_MouseAxis* get_yAxis();
		Rewired_Core::Rewired::PlayerController_MouseWheel* get_wheel();
		Rewired_Core::Rewired::PlayerController_Button* get_leftButton();
		Rewired_Core::Rewired::PlayerController_Button* get_rightButton();
		Rewired_Core::Rewired::PlayerController_Button* get_middleButton();
		float get_pointerSpeed();
		void set_pointerSpeed(float value);
		bool get_useHardwarePointerPosition();
		void set_useHardwarePointerPosition(bool value);
		void add_ScreenPositionChangedEvent(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		void remove_ScreenPositionChangedEvent(mscorlib::System::Action_1<UnityEngine_CoreModule::UnityEngine::Vector2>* value);
		void OnValidated();
		void OnReset();
		Rewired_Core::Rewired::PlayerController* CreateSource(mscorlib::System::Object* args);
		void Deinitialize();
		void Subscribe();
		void Unsubscribe();
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::Components::PlayerController_ElementInfo>* CreateDefaultElementInfos();
		void IvtjNBwfMzeSoEMWDazUHvNzwzzb(UnityEngine_CoreModule::UnityEngine::Vector2 A_1);
		bool Rewired_UI_IMouseInputSource_get_enabled();
		bool Rewired_UI_IMouseInputSource_GetButtonDown(int32_t A_1);
		bool Rewired_UI_IMouseInputSource_GetButtonUp(int32_t A_1);
		bool Rewired_UI_IMouseInputSource_GetButton(int32_t A_1);
		UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPosition();
		UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_screenPositionDelta();
		UnityEngine_CoreModule::UnityEngine::Vector2 Rewired_UI_IMouseInputSource_get_wheelDelta();
		bool Rewired_UI_IMouseInputSource_get_locked();
		void _ctor();
		bool Rewired_IPlayerController_get_enabled();
		void Rewired_IPlayerController_set_enabled(bool A_1);
	};
}

