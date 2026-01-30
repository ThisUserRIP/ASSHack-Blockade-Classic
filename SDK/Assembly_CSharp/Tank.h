#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Vehicle.h"
namespace Assembly_CSharp { struct TankData; };
namespace Assembly_CSharp { struct TankCarInfo; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct MeshCollider; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct VehicleWheel; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Tank : Assembly_CSharp::Vehicle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::TankData* tankData;
		Assembly_CSharp::TankCarInfo* tankCarInfo;
		UnityEngine_PhysicsModule::UnityEngine::MeshCollider* myCollider;
		float idleToAimRange;
		float aimSpeed;
		float aimToFireAngle;
		float rof;
		bool frozen;
		bool hovering;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::VehicleWheel>* leftSideWheels;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::VehicleWheel>* rightSideWheels;
		UnityEngine_CoreModule::UnityEngine::GameObject* tank;
		UnityEngine_CoreModule::UnityEngine::Material* trackLeft;
		UnityEngine_CoreModule::UnityEngine::Material* trackRight;
		float trackSpeedMultiplier;
		float trackSpeedMultiplier2;
		UnityEngine_CoreModule::UnityEngine::Vector3 bodyDownVector;
		UnityEngine_CoreModule::UnityEngine::Vector3 bodyUpVector;
		UnityEngine_CoreModule::UnityEngine::Vector3 centerCom;
		UnityEngine_CoreModule::UnityEngine::Vector3 com;
		float upsideDownTimer;
		UnityEngine_CoreModule::UnityEngine::Ray ray;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit rayCastHit;
		UnityEngine_CoreModule::UnityEngine::LayerMask layerMask;
		void Awake();
		void InitializeSpecific();
		void UpdateSpecific();
		void FixedUpdateSpecific();
		bool UpdateWheel(Assembly_CSharp::VehicleWheel* _wheel);
		void ResetTank();
		void _ctor();
	};
}

