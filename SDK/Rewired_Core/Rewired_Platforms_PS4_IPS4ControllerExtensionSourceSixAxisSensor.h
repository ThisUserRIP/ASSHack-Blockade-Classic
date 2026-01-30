#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Rewired_Core::Rewired::Platforms::PS4
{
	struct IPS4ControllerExtensionSourceSixAxisSensor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void SetMotionSensorState(bool enabled);
		void SetTiltCorrectionState(bool enabled);
		void SetAngularVelocityDeadbandState(bool enabled);
		void ResetOrientation();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLastAcceleration();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLastAccelerationRaw();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLastGyro();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetLastGyroRaw();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetLastOrientation();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetLastOrientationRaw();
	};
}

