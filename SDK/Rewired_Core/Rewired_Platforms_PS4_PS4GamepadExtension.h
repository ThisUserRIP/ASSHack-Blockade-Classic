#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Platforms_PS4_PS4ControllerExtension.h"
namespace Rewired_Core::Rewired::Platforms::PS4 { struct IPS4GamepadExtensionSource; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_Platforms_PS4_PS4GamepadMotorType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct PS4GamepadExtension : Rewired_Core::Rewired::Platforms::PS4::PS4ControllerExtension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Platforms::PS4::IPS4GamepadExtensionSource* get_Source();
		void _ctor(Rewired_Core::Rewired::Platforms::PS4::IPS4GamepadExtensionSource* source);
		void _ctor(Rewired_Core::Rewired::Platforms::PS4::PS4GamepadExtension* source);
		int32_t get_connectionType();
		int32_t get_maxTouches();
		float get_touchpadPixelDensity();
		UnityEngine_CoreModule::UnityEngine::Vector2 get_touchpadResolution();
		int32_t get_touchpadResolutionX();
		int32_t get_touchpadResolutionY();
		int32_t get_touchCount();
		int32_t GetTouchId(int32_t index);
		bool GetTouchPosition(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionByTouchId(int32_t touchId, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionAbsolute(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionAbsoluteByTouchId(int32_t touchId, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool IsTouching(int32_t index);
		bool IsTouchingByTouchId(int32_t touchId);
		float GetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4GamepadMotorType motor);
		void SetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4GamepadMotorType motor, float motorLevel);
		void SetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4GamepadMotorType motor, float motorLevel, bool stopOtherMotors);
		void SetVibration(Rewired_Core::Rewired::Platforms::PS4::PS4GamepadMotorType motor, float motorLevel, float duration, bool stopOtherMotors);
		void SetVibration(float leftMotorLevel, float rightMotorLevel);
		void SetVibration(float leftMotorLevel, float rightMotorLevel, float leftMotorDuration, float rightMotorDuration);
		UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue();
		UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValueRaw();
		Rewired_Core::Rewired::Controller_Extension* Clone();
		static int32_t nvtTmFsynmNJTZRapKATvOnbsmp(Rewired_Core::Rewired::Platforms::PS4::PS4GamepadMotorType A_0);
	};
}

