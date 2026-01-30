#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Vehicle.h"
namespace Assembly_CSharp { struct CarInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
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
	struct Car : Assembly_CSharp::Vehicle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::CarInfo* carInfo;
		bool frozen;
		bool hovering;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* wheelList;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Single>* wheelRadiusList;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* wheelLocalList;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Single>* wheelOffsetList;
		IL2CPP::Array<bool>* wheelOnGroundArray;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* pSkidMarkObject;
		IL2CPP::Array<int32_t>* pSkidMarkLastIndex;
		bool skidMarksActive;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::GameObject*>* pDriftSmokeObject;
		bool driftSmokeActive;
		UnityEngine_CoreModule::UnityEngine::GameObject* car;
		UnityEngine_CoreModule::UnityEngine::Vector3 bodyDownVector;
		UnityEngine_CoreModule::UnityEngine::Vector3 bodyUpVector;
		UnityEngine_CoreModule::UnityEngine::Vector3 centerCom;
		UnityEngine_CoreModule::UnityEngine::Vector3 com;
		bool vehicleSlip;
		float vehicleAdjGrip;
		float vehicleWheelTurn;
		float vehicleWheelSpin;
		float upsideDownTimer;
		UnityEngine_CoreModule::UnityEngine::Ray ray;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit rayCastHit;
		UnityEngine_CoreModule::UnityEngine::LayerMask layerMask;
		float deltaTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastGroundedPosition;
		void Awake();
		void InitializeSpecific();
		void UpdateSpecific();
		void FixedUpdateSpecific();
		void ResetCar();
		void CreateSkidMarks();
		void DestroySkidMarks();
		void UpdateSkidMarks();
		void CreateDriftSmoke();
		void DestroyDriftSmoke();
		void UpdateDriftSmoke();
		void Grounded();
		void EnterVehicleSpecific();
		void ExitVehicleSpecific();
		void _ctor();
	};
}

