#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct Vehicle; };
#include "VEHICLE_CONTROLLER.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp
{
	struct VehicleManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t vehicleCounter;
			mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* vehicles;
			UnityEngine_CoreModule::UnityEngine::GameObject* vehicleHolder;
			int32_t vehicleLayer;
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* availableVehicles;
			mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* generatorVehicles;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Initialize();
		static Assembly_CSharp::Vehicle* AddVehicle(mscorlib::System::String* aType, Assembly_CSharp::VEHICLE_CONTROLLER aController);
		static Assembly_CSharp::Vehicle* AddVehicle(mscorlib::System::String* aType, Assembly_CSharp::VEHICLE_CONTROLLER aController, bool aCreateMapIcon);
		static void AddVehiclesFromChildren(UnityEngine_CoreModule::UnityEngine::GameObject* aParent, Assembly_CSharp::VEHICLE_CONTROLLER aController);
		static void AddVehiclesFromChildren(UnityEngine_CoreModule::UnityEngine::GameObject* aParent, Assembly_CSharp::VEHICLE_CONTROLLER aController, bool aCreateMapIcon);
		static UnityEngine_CoreModule::UnityEngine::GameObject* GetClosestVehicle(UnityEngine_CoreModule::UnityEngine::Vector3 aPosition);
		static bool IsInBounds(UnityEngine_CoreModule::UnityEngine::GameObject* aGameObject, UnityEngine_CoreModule::UnityEngine::Vector3 aPosition);
		static void RemoveVehicle(UnityEngine_CoreModule::UnityEngine::GameObject* aGameObject);
		static void SetVehiclesActive(bool aState);
		static void Reset();
		static void Destroy();
		static void _cctor();
	};
}

