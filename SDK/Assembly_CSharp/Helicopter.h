#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Vehicle.h"
namespace Assembly_CSharp { struct HelicopterData; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct MeshCollider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Helicopter : Assembly_CSharp::Vehicle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::HelicopterData* helicopterData;
		float maxSpeed;
		UnityEngine_CoreModule::UnityEngine::Vector3 accelerationMultiplier;
		UnityEngine_CoreModule::UnityEngine::Vector3 dragMultiplier;
		float maxPitchAngle;
		float maxRollAngle;
		UnityEngine_CoreModule::UnityEngine::GameObject* projectile;
		float baseHeight;
		float rotorSpeed;
		UnityEngine_PhysicsModule::UnityEngine::MeshCollider* myCollider;
		float idleToAimRange;
		float aimSpeed;
		float aimToFireAngle;
		float rof;
		void Awake();
		void InitializeSpecific();
		void UpdateSpecific();
		void LateUpdateSpecific();
		void Aim();
		void Fire(UnityEngine_CoreModule::UnityEngine::GameObject* aMuzzleFlash);
		void Fire(UnityEngine_CoreModule::UnityEngine::GameObject* aMuzzleFlash, UnityEngine_CoreModule::UnityEngine::GameObject* aTarget);
		void EnterVehicleSpecific();
		void _ctor();
	};
}

