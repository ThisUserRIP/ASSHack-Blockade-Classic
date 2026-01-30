#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct RaycastWheel : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* graphic;
		float mass;
		float wheelRadius;
		float suspensionRange;
		float suspensionForce;
		float suspensionDamp;
		float compressionFrictionFactor;
		float sidewaysFriction;
		float sidewaysDamp;
		float sidewaysSlipVelocity;
		float sidewaysSlipForce;
		float sidewaysSlipFriction;
		float sidewaysStiffnessFactor;
		float forwardFriction;
		float forwardSlipVelocity;
		float forwardSlipForce;
		float forwardSlipFriction;
		float forwardStiffnessFactor;
		float frictionSmoothing;
		float usedSideFriction;
		float usedForwardFriction;
		float sideSlip;
		float forwardSlip;
		bool driven;
		bool brake;
		bool skidbrake;
		float speed;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit hit;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* parent;
		float wheelCircumference;
		bool grounded;
		bool get_IsGrounded();
		void Start();
		void FixedUpdate();
		void OnDrawGizmosSelected();
		void _ctor();
	};
}

