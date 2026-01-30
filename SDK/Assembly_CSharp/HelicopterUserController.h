#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "VehicleInputController.h"
namespace Assembly_CSharp { struct Helicopter; };
namespace Assembly_CSharp { struct HelicopterData; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct HelicopterUserController : Assembly_CSharp::VehicleInputController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Helicopter* helicopter;
		Assembly_CSharp::HelicopterData* helicopterData;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit rayCastHit;
		int32_t currentBarrel;
		float deltaTime;
		bool continuesX;
		float storedY;
		float maxAngle;
		float lerpFactor;
		void Initialize();
		void Update();
		void UserInput();
		void _ctor();
	};
}

