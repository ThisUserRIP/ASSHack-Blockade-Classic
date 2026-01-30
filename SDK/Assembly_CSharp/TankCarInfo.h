#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct TankCarInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float maxSpeed;
		float maxSpeedInverse;
		float accelerationGain;
		float decelerationGain;
		float turnGain;
		float drag;
		float grip;
		float strength;
		float damping;
		float hoverOffset;
		float currentSpeed;
		float currentSpeedPerc;
		void _ctor();
	};
}

