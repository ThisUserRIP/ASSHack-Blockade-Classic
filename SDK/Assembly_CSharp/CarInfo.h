#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct CarSound; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct CarInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float maxSpeed;
		float maxSpeedInverse;
		float accelerationGain;
		float decelerationGain;
		float turnGain;
		float drag;
		float angularDrag;
		float grip;
		float driftGrip;
		float strength;
		float damping;
		float hoverOffset;
		float mass;
		float maxWheelTurn;
		float currentSpeed;
		float currentSpeedPerc;
		mscorlib::System::String* soundSet;
		Assembly_CSharp::CarSound* sound;
		void _ctor();
	};
}

