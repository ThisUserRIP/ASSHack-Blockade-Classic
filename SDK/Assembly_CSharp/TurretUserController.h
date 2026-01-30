#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "VehicleInputController.h"
namespace Assembly_CSharp { struct Turret; };
namespace Assembly_CSharp { struct TurretData; };
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
	struct TurretUserController : Assembly_CSharp::VehicleInputController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Turret* turret;
		Assembly_CSharp::TurretData* turretData;
		float deltaTime;
		int32_t currentBarrel;
		bool continuesX;
		float storedY;
		float maxAngle;
		float lerpFactor;
		void Initialize();
		void Update();
		void UserInput();
		void Aim();
		void Fire(UnityEngine_CoreModule::UnityEngine::GameObject* muzzleFlash);
		void Destroy();
		void _ctor();
	};
}

