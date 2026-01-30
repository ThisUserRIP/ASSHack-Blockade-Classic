#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "VehicleInputController.h"
namespace Assembly_CSharp { struct Tank; };
namespace Assembly_CSharp { struct TankData; };
#include "TankAIController_State.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct TankAIController : Assembly_CSharp::VehicleInputController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Tank* tank;
		Assembly_CSharp::TankData* tankData;
		Assembly_CSharp::TankAIController_State state;
		float driveTimer;
		int32_t driveDirection;
		int32_t cooldown;
		float deltaTime;
		void Initialize();
		void Update();
		void Aim();
		void Fire();
		void Reset();
		void _ctor();
	};
}

