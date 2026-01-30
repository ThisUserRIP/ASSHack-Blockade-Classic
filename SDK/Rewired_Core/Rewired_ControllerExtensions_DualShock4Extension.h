#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller_Extension.h"
namespace Rewired_Core::Rewired::ControllerExtensions { struct DualShock4Extension_vnoAuUBYwtLtwRCdLETfVhmIJCDb; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct TimerAbs; };
namespace Rewired_Core::Rewired { struct Joystick; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Drivers::Interfaces { struct IDriver_DualShock4; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_ControllerExtensions_DualShock4MotorType.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired::Interfaces { struct IControllerExtensionSource; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };

namespace Rewired_Core::Rewired::ControllerExtensions
{
	struct DualShock4Extension : Rewired_Core::Rewired::Controller_Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerExtensions::DualShock4Extension_vnoAuUBYwtLtwRCdLETfVhmIJCDb* iRvUtWKJYFKiGcFQZzgNVetDeHZ;
		bool YkdfRHhpaONctjUwqLWAUUHrfMSh;
		IL2CPP::Array<Rewired_Core::Rewired::Utils::Classes::Utility::TimerAbs*>* MYINDhtbTMhHrumacUyjfKkBVdz;
		Rewired_Core::Rewired::Joystick* get_joystick();
		void _ctor(Rewired_Core::Rewired::Drivers::Interfaces::IDriver_DualShock4* driver);
		void _ctor(Rewired_Core::Rewired::ControllerExtensions::DualShock4Extension* source);
		int32_t get_vibrationMotorCount();
		void SetVibration(int32_t motorIndex, float motorLevel);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration);
		void SetVibration(int32_t motorIndex, float motorLevel, bool stopOtherMotors);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration, bool stopOtherMotors);
		float GetVibration(int32_t motorIndex);
		void StopVibration();
		float GetVibration(Rewired_Core::Rewired::ControllerExtensions::DualShock4MotorType motor);
		void SetVibration(Rewired_Core::Rewired::ControllerExtensions::DualShock4MotorType motor, float motorLevel);
		void SetVibration(Rewired_Core::Rewired::ControllerExtensions::DualShock4MotorType motor, float motorLevel, float duration);
		void SetVibration(Rewired_Core::Rewired::ControllerExtensions::DualShock4MotorType motor, float motorLevel, bool stopOtherMotors);
		void SetVibration(Rewired_Core::Rewired::ControllerExtensions::DualShock4MotorType motor, float motorLevel, float duration, bool stopOtherMotors);
		void SetVibration(float leftMotorLevel, float rightMotorLevel);
		void SetVibration(float leftMotorLevel, float rightMotorLevel, float leftMotorDuration, float rightMotorDuration);
		float get_lightColorRed();
		void set_lightColorRed(float value);
		float get_lightColorGreen();
		void set_lightColorGreen(float value);
		float get_lightColorBlue();
		void set_lightColorBlue(float value);
		UnityEngine_CoreModule::UnityEngine::Color GetLightColor();
		void SetLightColor(UnityEngine_CoreModule::UnityEngine::Color color);
		void SetLightColor(float red, float green, float blue);
		void SetLightColor(float red, float green, float blue, float intensity);
		void SetLightFlash(float onDuration, float offDuration);
		void StopLightFlash();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetAccelerometerValueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetAccelerometerValue();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLastGyroscopeValueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLastGyroscopeValue();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetGyroscopeValueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetGyroscopeValue();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetOrientation();
		void ResetOrientation();
		int32_t get_maxTouches();
		int32_t get_touchCount();
		int32_t GetTouchId(int32_t index);
		bool GetTouchPosition(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionByTouchId(int32_t touchId, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionAbsolute(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionAbsoluteByTouchId(int32_t touchId, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool IsTouching(int32_t index);
		bool IsTouchingByTouchId(int32_t touchId);
		float get_batteryLevel();
		UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValue();
		UnityEngine_CoreModule::UnityEngine::Vector3 Rewired_ControllerExtensions_IDualShock4Extension_GetGyroscopeValueRaw();
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType A_1);
		void SourceUpdated(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* A_1);
		Rewired_Core::Rewired::Controller_Extension* Clone();
		void PtePNmFpEGLSJmOzRgMhZNHcfvd();
		void wMUtYLYdZFUorvTsKRTcgmzZzme(Rewired_Core::Rewired::ControllerExtensions::DualShock4MotorType A_1, float A_2, float A_3);
	};
}

