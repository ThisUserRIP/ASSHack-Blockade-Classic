#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp::MFlight
{
	struct MouseFlightController : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* aircraft;
		UnityEngine_CoreModule::UnityEngine::Transform* mouseAim;
		UnityEngine_CoreModule::UnityEngine::Transform* cameraRig;
		UnityEngine_CoreModule::UnityEngine::Transform* cam;
		bool useFixed;
		float camSmoothSpeed;
		float mouseSensitivity;
		float aimDistance;
		bool showDebugInfo;
		UnityEngine_CoreModule::UnityEngine::Vector3 frozenDirection;
		bool isMouseAimFrozen;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_BoresightPos();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_MouseAimPos();
		void Awake();
		void Update();
		void FixedUpdate();
		void RotateRig();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetFrozenMouseAimPos();
		void UpdateCameraPos();
		UnityEngine_CoreModule::UnityEngine::Quaternion Damp(UnityEngine_CoreModule::UnityEngine::Quaternion a, UnityEngine_CoreModule::UnityEngine::Quaternion b, float lambda, float dt);
		void OnDrawGizmos();
		void _ctor();
	};
}

