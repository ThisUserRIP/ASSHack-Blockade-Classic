#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_RagdollUtility.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct RagdollUtility; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Joint; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct RagdollUtility_Rigidbone : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* r;
		UnityEngine_CoreModule::UnityEngine::Transform* t;
		UnityEngine_PhysicsModule::UnityEngine::Collider* collider;
		UnityEngine_PhysicsModule::UnityEngine::Joint* joint;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* c;
		bool updateAnchor;
		UnityEngine_CoreModule::UnityEngine::Vector3 deltaPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion deltaRotation;
		float deltaTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion lastRotation;
		void _ctor(UnityEngine_PhysicsModule::UnityEngine::Rigidbody* r);
		void RecordVelocity();
		void WakeUp(float velocityWeight, float angularVelocityWeight);
	};
}

