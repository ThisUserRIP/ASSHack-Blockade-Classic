#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Component.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_RigidbodyConstraints.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "UnityEngine_RigidbodyInterpolation.h"
#include "UnityEngine_ForceMode.h"

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct Rigidbody : UnityEngine_CoreModule::UnityEngine::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_velocity();
		void set_velocity(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_angularVelocity();
		void set_angularVelocity(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void set_drag(float value);
		void set_angularDrag(float value);
		float get_mass();
		void set_mass(float value);
		void set_useGravity(bool value);
		bool get_isKinematic();
		void set_isKinematic(bool value);
		void set_freezeRotation(bool value);
		void set_constraints(UnityEngine_PhysicsModule::UnityEngine::RigidbodyConstraints value);
		void set_centerOfMass(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_worldCenterOfMass();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Quaternion get_rotation();
		void set_rotation(UnityEngine_CoreModule::UnityEngine::Quaternion value);
		void set_interpolation(UnityEngine_PhysicsModule::UnityEngine::RigidbodyInterpolation value);
		float get_maxAngularVelocity();
		void set_maxAngularVelocity(float value);
		void MovePosition(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void MoveRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rot);
		void Sleep();
		void WakeUp();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetPointVelocity(UnityEngine_CoreModule::UnityEngine::Vector3 worldPoint);
		void AddForce(UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddForce(UnityEngine_CoreModule::UnityEngine::Vector3 force);
		void AddRelativeForce(UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddRelativeForce(UnityEngine_CoreModule::UnityEngine::Vector3 force);
		void AddTorque(UnityEngine_CoreModule::UnityEngine::Vector3 torque, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddTorque(UnityEngine_CoreModule::UnityEngine::Vector3 torque);
		void AddRelativeTorque(UnityEngine_CoreModule::UnityEngine::Vector3 torque, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddRelativeTorque(UnityEngine_CoreModule::UnityEngine::Vector3 torque);
		void AddForceAtPosition(UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_CoreModule::UnityEngine::Vector3 position, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddForceAtPosition(UnityEngine_CoreModule::UnityEngine::Vector3 force, UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void AddExplosionForce(float explosionForce, UnityEngine_CoreModule::UnityEngine::Vector3 explosionPosition, float explosionRadius, float upwardsModifier, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddExplosionForce(float explosionForce, UnityEngine_CoreModule::UnityEngine::Vector3 explosionPosition, float explosionRadius, float upwardsModifier);
		void _ctor();
		void get_velocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void set_velocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value);
		void get_angularVelocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void set_angularVelocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value);
		void set_centerOfMass_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value);
		void get_worldCenterOfMass_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void get_position_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void set_position_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value);
		void get_rotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& ret);
		void set_rotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& value);
		void MovePosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position);
		void MoveRotation_Injected(UnityEngine_CoreModule::UnityEngine::Quaternion& rot);
		void GetPointVelocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& worldPoint, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void AddForce_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& force, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddRelativeForce_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& force, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddTorque_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& torque, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddRelativeTorque_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& torque, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddForceAtPosition_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& force, UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
		void AddExplosionForce_Injected(float explosionForce, UnityEngine_CoreModule::UnityEngine::Vector3& explosionPosition, float explosionRadius, float upwardsModifier, UnityEngine_PhysicsModule::UnityEngine::ForceMode mode);
	};
}

