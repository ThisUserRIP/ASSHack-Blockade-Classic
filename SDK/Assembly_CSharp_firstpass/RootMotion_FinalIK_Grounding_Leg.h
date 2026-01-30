#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_Grounding.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct Grounding; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct Grounding_Leg : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool _isGrounded_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 _IKPosition_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Quaternion rotationOffset;
		bool _initiated_k__BackingField;
		float _heightFromGround_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 _velocity_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Transform* _transform_k__BackingField;
		float _IKOffset_k__BackingField;
		bool invertFootCenter;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding* grounding;
		float lastTime;
		float deltaTime;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion toHitNormal;
		UnityEngine_CoreModule::UnityEngine::Quaternion r;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit heelHit;
		UnityEngine_CoreModule::UnityEngine::Vector3 up;
		bool get_isGrounded();
		void set_isGrounded(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_IKPosition();
		void set_IKPosition(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		bool get_initiated();
		void set_initiated(bool value);
		float get_heightFromGround();
		void set_heightFromGround(float value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_velocity();
		void set_velocity(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Transform* get_transform();
		void set_transform(UnityEngine_CoreModule::UnityEngine::Transform* value);
		float get_IKOffset();
		void set_IKOffset(float value);
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::Grounding* grounding, UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void OnEnable();
		void Reset();
		void Process();
		float get_stepHeightFromGround();
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit GetCapsuleHit(UnityEngine_CoreModule::UnityEngine::Vector3 offsetFromHeel);
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit GetRaycastHit(UnityEngine_CoreModule::UnityEngine::Vector3 offsetFromHeel);
		UnityEngine_CoreModule::UnityEngine::Vector3 RotateNormal(UnityEngine_CoreModule::UnityEngine::Vector3 normal);
		void SetFootToPoint(UnityEngine_CoreModule::UnityEngine::Vector3 normal, UnityEngine_CoreModule::UnityEngine::Vector3 point);
		void SetFootToPlane(UnityEngine_CoreModule::UnityEngine::Vector3 planeNormal, UnityEngine_CoreModule::UnityEngine::Vector3 planePoint, UnityEngine_CoreModule::UnityEngine::Vector3 heelHitPoint);
		float GetHeightFromGround(UnityEngine_CoreModule::UnityEngine::Vector3 hitPoint);
		void RotateFoot();
		UnityEngine_CoreModule::UnityEngine::Quaternion GetRotationOffsetTarget();
		float get_rootYOffset();
		void _ctor();
	};
}

