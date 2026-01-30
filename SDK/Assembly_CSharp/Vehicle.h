#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "ENTITY.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct VehicleInputController; };
namespace Assembly_CSharp { struct VehicleInUseInfo; };
namespace Assembly_CSharp { struct VehicleInfo; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "VEHICLE_CONTROLLER.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collision; };

namespace Assembly_CSharp
{
	struct Vehicle : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t id;
		int32_t uid;
		int32_t entid;
		Assembly_CSharp::ENTITY classID;
		int32_t health;
		int32_t armor;
		int32_t turretRotation;
		int32_t skin_id;
		float dlina;
		float shirina;
		bool vehicleActive;
		bool allowInput;
		Assembly_CSharp::VehicleInputController* controller;
		Assembly_CSharp::VehicleInUseInfo* vehicleInUseInfo;
		Assembly_CSharp::VehicleInfo* vehicleInfo;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* rigidBody;
		UnityEngine_CoreModule::UnityEngine::GameObject* vehicle;
		UnityEngine_CoreModule::UnityEngine::GameObject* boundsObject;
		UnityEngine_CoreModule::UnityEngine::Transform* myTransform;
		void Initialize(Assembly_CSharp::VEHICLE_CONTROLLER aController);
		void FixedUpdate();
		void Update();
		void LateUpdate();
		void Relocate();
		void AddController(Assembly_CSharp::VEHICLE_CONTROLLER aController);
		bool EnterVehicle(Assembly_CSharp::VEHICLE_CONTROLLER aController);
		void ExitVehicle();
		void AddDamageEffect();
		void OnCollisionEnter(UnityEngine_PhysicsModule::UnityEngine::Collision* collision);
		void InitializeSpecific();
		void FixedUpdateSpecific();
		void UpdateSpecific();
		void LateUpdateSpecific();
		void EnterVehicleSpecific();
		void ExitVehicleSpecific();
		void SetVehicleActive(bool aBool);
		void _ctor();
	};
}

