#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::MFlight { struct MouseFlightController; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::MFlight::Demo
{
	struct Plane : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::MFlight::MouseFlightController* controller;
		float thrust;
		UnityEngine_CoreModule::UnityEngine::Vector3 turnTorque;
		float forceMult;
		float sensitivity;
		float aggressiveTurnAngle;
		float pitch;
		float yaw;
		float roll;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* rigid;
		bool rollOverride;
		bool pitchOverride;
		void set_Pitch(float value);
		float get_Pitch();
		void set_Yaw(float value);
		float get_Yaw();
		void set_Roll(float value);
		float get_Roll();
		void Awake();
		void Update();
		void RunAutopilot(UnityEngine_CoreModule::UnityEngine::Vector3 flyTarget, float& yaw, float& pitch, float& roll);
		void FixedUpdate();
		void _ctor();
	};
}

