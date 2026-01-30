#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "VehicleInputController.h"
namespace Assembly_CSharp { struct Car; };
namespace Assembly_CSharp { struct CarInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct CarUserController : Assembly_CSharp::VehicleInputController
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Car* car;
		Assembly_CSharp::CarInfo* carInfo;
		void Initialize();
		void Update();
		void UserInput();
		void Destroy();
		void _ctor();
	};
}

