#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SmoothMouseLook_RotationAxes.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct SmoothMouseLook : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		Assembly_CSharp::SmoothMouseLook_RotationAxes axes;
		float sensitivityX;
		float sensitivityY;
		float minimumX;
		float maximumX;
		float minimumY;
		float maximumY;
		float xInput;
		float yInput;
		float xInputOld;
		float yInputOld;
		float averageXInput;
		float averageYInput;
		float rotationX;
		float rotationY;
		UnityEngine_CoreModule::UnityEngine::Quaternion originalRotation;
		UnityEngine_CoreModule::UnityEngine::GameObject* _camera;
		float zoom_sensitivity;
		void Update();
		void Start();
		static float ClampAngle(float angle, float min, float max);
		void _ctor();
	};
}

