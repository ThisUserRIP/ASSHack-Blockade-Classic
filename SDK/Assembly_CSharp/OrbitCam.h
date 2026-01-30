#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp { struct TankController; };
namespace Assembly_CSharp { struct CarController; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct OrbitCam : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		UnityEngine_CoreModule::UnityEngine::Transform* lookPointMarker;
		float distance;
		float visota;
		float xSpeed;
		float ySpeed;
		float yMinLimit;
		float yMaxLimit;
		float x;
		float y;
		float z;
		float sSpeed;
		float sMinDistance;
		float sMaxDistance;
		Assembly_CSharp::TankController* tc;
		Assembly_CSharp::CarController* cc;
		UnityEngine_CoreModule::UnityEngine::Texture* tankZoom;
		UnityEngine_CoreModule::UnityEngine::Texture* carZoom;
		bool zoom;
		UnityEngine_CoreModule::UnityEngine::Ray ray;
		UnityEngine_CoreModule::UnityEngine::Ray ray2;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit hit;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		UnityEngine_CoreModule::UnityEngine::Transform* zoomPoint;
		Assembly_CSharp::vp_FPPlayerEventHandler* Player;
		float shake;
		float shakeAmount;
		float decreaseFactor;
		UnityEngine_CoreModule::UnityEngine::Vector3 originalPos;
		float koefX1;
		float koefX2;
		int32_t vehicleType;
		bool _trooper;
		bool _helmet;
		bool _cap;
		bool _budge;
		UnityEngine_CoreModule::UnityEngine::Vector3 lookPoint;
		UnityEngine_CoreModule::UnityEngine::Texture* txt;
		struct StaticFields
		{
			Assembly_CSharp::OrbitCam* THIS__;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Start();
		void Update();
		void LateUpdate();
		void OnGUI();
		static float ClampAngle(float angle, float min, float max);
		void _ctor();
	};
}

