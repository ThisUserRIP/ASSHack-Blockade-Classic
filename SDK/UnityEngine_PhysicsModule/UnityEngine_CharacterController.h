#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_Collider.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_CollisionFlags.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct CharacterController : UnityEngine_PhysicsModule::UnityEngine::Collider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool SimpleMove(UnityEngine_CoreModule::UnityEngine::Vector3 speed);
		UnityEngine_PhysicsModule::UnityEngine::CollisionFlags Move(UnityEngine_CoreModule::UnityEngine::Vector3 motion);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_velocity();
		bool get_isGrounded();
		float get_radius();
		void set_radius(float value);
		float get_height();
		void set_height(float value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_center();
		void set_center(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		float get_slopeLimit();
		float get_stepOffset();
		bool SimpleMove_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& speed);
		UnityEngine_PhysicsModule::UnityEngine::CollisionFlags Move_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& motion);
		void get_velocity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void get_center_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void set_center_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& value);
	};
}

