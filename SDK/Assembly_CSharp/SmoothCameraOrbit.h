#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct SmoothCameraOrbit : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		UnityEngine_CoreModule::UnityEngine::Vector3 targetOffset;
		float distance;
		float maxDistance;
		float minDistance;
		float xSpeed;
		float ySpeed;
		int32_t yMinLimit;
		int32_t yMaxLimit;
		int32_t zoomRate;
		float panSpeed;
		float zoomDampening;
		float autoRotate;
		float autoRotateSpeed;
		float xDeg;
		float yDeg;
		float currentDistance;
		float desiredDistance;
		UnityEngine_CoreModule::UnityEngine::Quaternion currentRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion desiredRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion rotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 position;
		float idleTimer;
		float idleSmooth;
		void Start();
		void OnEnable();
		void Init();
		void LateUpdate();
		static float ClampAngle(float angle, float min, float max);
		void _ctor();
	};
}

