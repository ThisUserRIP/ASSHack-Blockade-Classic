#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };

namespace Rewired_Core::Rewired::ControllerExtensions
{
	struct IDualShock4Extension
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetAccelerometerValue();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetAccelerometerValueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetGyroscopeValueRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetGyroscopeValue();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetOrientation();
		void ResetOrientation();
		void SetLightColor(UnityEngine_CoreModule::UnityEngine::Color color);
		void SetLightColor(float red, float green, float blue);
		void SetLightColor(float red, float green, float blue, float intensity);
		int32_t get_maxTouches();
		int32_t get_touchCount();
		int32_t GetTouchId(int32_t index);
		bool GetTouchPosition(int32_t index, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool GetTouchPositionByTouchId(int32_t touchId, UnityEngine_CoreModule::UnityEngine::Vector2& position);
		bool IsTouching(int32_t index);
		bool IsTouchingByTouchId(int32_t touchId);
		void SetVibration(float leftMotorLevel, float rightMotorLevel);
		void SetVibration(float leftMotorLevel, float rightMotorLevel, float leftMotorDuration, float rightMotorDuration);
	};
}

