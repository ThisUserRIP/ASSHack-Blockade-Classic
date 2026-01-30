#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core::Rewired::Drivers::Interfaces
{
	struct IDriver_DualShock4
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float get_BatteryLevel();
		float get_LeftMotor();
		void set_LeftMotor(float value);
		float get_RightMotor();
		void set_RightMotor(float value);
		float get_LightColorR();
		void set_LightColorR(float value);
		float get_LightColorG();
		void set_LightColorG(float value);
		float get_LightColorB();
		void set_LightColorB(float value);
		float get_LightFlashOnDuration();
		void set_LightFlashOnDuration(float value);
		float get_LightFlashOffDuration();
		void set_LightFlashOffDuration(float value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_AccelerometerValue();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_AccelerometerValueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_GyroscopeValue();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_GyroscopeValueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_LastGyroscopeValue();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_LastGyroscopeValueRaw();
		UnityEngine_CoreModule::UnityEngine::Quaternion get_Orientation();
		void ResetOrientation();
		int32_t get_MaxTouches();
		int32_t GetTouchCount();
		bool IsTouchingAtTouchId(int32_t touchId);
		bool IsTouchingAtIndex(int32_t index);
		int32_t GetTouchIdAtIndex(int32_t index);
		bool GetTouchPositionByIndex(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionByTouchId(int32_t touchId, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionAbsoluteByIndex(int32_t index, int32_t& positionX, int32_t& positionY);
		bool GetTouchPositionAbsoluteByTouchId(int32_t touchId, int32_t& positionX, int32_t& positionY);
		void StopLightFlash();
		void StopVibration();
	};
}

