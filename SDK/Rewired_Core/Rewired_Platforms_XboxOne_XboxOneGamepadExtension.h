#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller_Extension.h"
namespace Rewired_Core::Rewired::Platforms::XboxOne { struct XboxOneGamepadExtension_jsHSEMFmfWqQYrgqSamqWTanJaf; };
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct TimerAbs; };
namespace Rewired_Core::Rewired { struct Joystick; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired::Platforms::XboxOne { struct IXboxOneInputSource; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Rewired_Platforms_XboxOne_XboxOneGamepadMotorType.h"
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired::Interfaces { struct IControllerExtensionSource; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };

namespace Rewired_Core::Rewired::Platforms::XboxOne
{
	struct XboxOneGamepadExtension : Rewired_Core::Rewired::Controller_Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension_jsHSEMFmfWqQYrgqSamqWTanJaf* vFZHOBqLeyYBeVMlFUHaPOmXHwG;
		IL2CPP::Array<Rewired_Core::Rewired::Utils::Classes::Utility::TimerAbs*>* MYINDhtbTMhHrumacUyjfKkBVdz;
		Rewired_Core::Rewired::Joystick* get_joystick();
		int32_t get_xboxOneUserId();
		uint64_t get_xboxOneJoystickId();
		void _ctor(bool supportsVibration, Rewired_Core::Rewired::Platforms::XboxOne::IXboxOneInputSource* xboxOneInputSource);
		void _ctor(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadExtension* source);
		int32_t get_vibrationMotorCount();
		void SetVibration(int32_t motorIndex, float motorLevel);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration);
		void SetVibration(int32_t motorIndex, float motorLevel, bool stopOtherMotors);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration, bool stopOtherMotors);
		float GetVibration(int32_t motorIndex);
		float GetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor);
		void StopVibration();
		void SetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float motorLevel);
		void SetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float motorLevel, float duration);
		void SetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float motorLevel, bool stopOtherMotors);
		void SetVibration(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float motorLevel, float duration, bool stopOtherMotors);
		void SetVibration(float leftMotorLevel, float rightMotorLevel);
		void SetVibration(float leftMotorLevel, float rightMotorLevel, bool stopOtherMotors);
		void SetVibration(float leftMotorLevel, float rightMotorLevel, float leftTriggerLevel, float rightTriggerLevel);
		void PulseVibrateMotor(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType motor, float startLevel, float endLevel, float duration);
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType A_1);
		void SourceUpdated(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* A_1);
		Rewired_Core::Rewired::Controller_Extension* Clone();
		void PtePNmFpEGLSJmOzRgMhZNHcfvd();
		void wMUtYLYdZFUorvTsKRTcgmzZzme(Rewired_Core::Rewired::Platforms::XboxOne::XboxOneGamepadMotorType A_1, float A_2, float A_3);
		void qazZPpsoQfFdUIVtgKGkWyfIuefu();
	};
}

