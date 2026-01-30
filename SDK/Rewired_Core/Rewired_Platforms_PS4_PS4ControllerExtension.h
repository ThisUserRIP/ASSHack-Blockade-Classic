#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Controller_Extension.h"
namespace Rewired_Core::Rewired::Utils::Classes::Utility { struct TimerAbs; };
namespace Rewired_Core::Rewired::Platforms::PS4 { struct IPS4ControllerExtensionSource; };
namespace Rewired_Core::Rewired { struct Joystick; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "Rewired_UpdateLoopType.h"
namespace Rewired_Core::Rewired::Interfaces { struct IControllerExtensionSource; };
namespace Rewired_Core::Rewired { struct Controller_Extension; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct PS4ControllerExtension : Rewired_Core::Rewired::Controller_Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<Rewired_Core::Rewired::Utils::Classes::Utility::TimerAbs*>* MYINDhtbTMhHrumacUyjfKkBVdz;
		Rewired_Core::Rewired::Platforms::PS4::IPS4ControllerExtensionSource* get_Source();
		Rewired_Core::Rewired::Joystick* get_joystick();
		void _ctor(Rewired_Core::Rewired::Platforms::PS4::IPS4ControllerExtensionSource* source);
		void _ctor(Rewired_Core::Rewired::Platforms::PS4::PS4ControllerExtension* source);
		int32_t get_deviceHandle();
		int32_t get_userStatusCode();
		bool get_userIsPrimary();
		int32_t get_userId();
		UnityEngine_CoreModule::UnityEngine::Color get_userColor();
		int32_t get_userColorId();
		mscorlib::System::String* get_userName();
		int32_t get_vibrationMotorCount();
		void SetVibration(int32_t motorIndex, float motorLevel);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration);
		void SetVibration(int32_t motorIndex, float motorLevel, bool stopOtherMotors);
		void SetVibration(int32_t motorIndex, float motorLevel, float duration, bool stopOtherMotors);
		float GetVibration(int32_t motorIndex);
		void StopVibration();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetAccelerometerValueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetAccelerometerValue();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLastGyroscopeValueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLastGyroscopeValue();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetOrientationRaw();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetOrientation();
		void ResetOrientation();
		void SetMotionSensorState(bool enabled);
		void SetTiltCorrectionState(bool enabled);
		void SetAngularVelocityDeadbandState(bool enabled);
		void SetLightColor(UnityEngine_CoreModule::UnityEngine::Color color);
		void SetLightColor(float red, float green, float blue);
		void SetLightColor(float red, float green, float blue, float intensity);
		void ResetLight();
		void UpdateData(Rewired_Core::Rewired::UpdateLoopType A_1);
		void SourceUpdated(Rewired_Core::Rewired::Interfaces::IControllerExtensionSource* A_1);
		Rewired_Core::Rewired::Controller_Extension* Clone();
		void PtePNmFpEGLSJmOzRgMhZNHcfvd();
		void wMUtYLYdZFUorvTsKRTcgmzZzme(int32_t A_1, float A_2, float A_3);
	};
}

