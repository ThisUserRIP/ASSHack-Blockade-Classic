#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "VehicleInputController.h"
namespace Assembly_CSharp { struct Helicopter; };
namespace Assembly_CSharp { struct HelicopterData; };
#include "HelicopterAIController_State.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };

namespace Assembly_CSharp
{
	struct HelicopterAIController : Assembly_CSharp::VehicleInputController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Helicopter* helicopter;
		Assembly_CSharp::HelicopterData* helicopterData;
		Assembly_CSharp::HelicopterAIController_State state;
		int32_t fired;
		int32_t cooldown;
		float cooldownTimer;
		bool clearPath;
		int32_t currentPosition;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* movingPositions;
		float movementTimer;
		float upAndDownTimer;
		float upAndDownMovement;
		UnityEngine_CoreModule::UnityEngine::Vector3 startPosition;
		float deltaTime;
		void Initialize();
		void Update();
		void AimAI();
		void Fire(UnityEngine_CoreModule::UnityEngine::GameObject* muzzleFlash, UnityEngine_CoreModule::UnityEngine::GameObject* target);
		void SetPositions();
		void CalculateNewPosition();
		void Reset();
		void _ctor();
	};
}

