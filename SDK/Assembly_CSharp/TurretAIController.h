#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "VehicleInputController.h"
namespace Assembly_CSharp { struct Turret; };
namespace Assembly_CSharp { struct TurretData; };
#include "TurretAIController_State.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp
{
	struct TurretAIController : Assembly_CSharp::VehicleInputController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Turret* turret;
		Assembly_CSharp::TurretData* turretData;
		Assembly_CSharp::TurretAIController_State state;
		int32_t currentBarrel;
		int32_t cooldown;
		float cooldownTimer;
		float deltaTime;
		void Initialize();
		void Update();
		void Aim();
		void Fire(UnityEngine_CoreModule::UnityEngine::GameObject* muzzleFlash, UnityEngine_CoreModule::UnityEngine::GameObject* target);
		void Reset();
		void _ctor();
	};
}

