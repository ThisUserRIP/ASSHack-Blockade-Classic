#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "VehicleInputController.h"
namespace Assembly_CSharp { struct MissileTurret; };
namespace Assembly_CSharp { struct MissileTurretData; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp
{
	struct MissileTurretUserController : Assembly_CSharp::VehicleInputController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::MissileTurret* missileTurret;
		Assembly_CSharp::MissileTurretData* missileTurretData;
		float deltaTime;
		int32_t currentBarrel;
		bool continuesX;
		float storedY;
		float maxAngle;
		float lerpFactor;
		void Initialize();
		void Update();
		void UserInput();
		UnityEngine_CoreModule::UnityEngine::GameObject* GetTarget();
		void Aim();
		void Fire(UnityEngine_CoreModule::UnityEngine::GameObject* muzzleFlash, UnityEngine_CoreModule::UnityEngine::GameObject* target);
		void Destroy();
		void _ctor();
	};
}

