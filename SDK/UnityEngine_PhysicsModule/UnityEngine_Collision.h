#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_ContactPoint.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct ContactPoint; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct Collision : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Vector3 m_Impulse;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_RelativeVelocity;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* m_Rigidbody;
		UnityEngine_PhysicsModule::UnityEngine::Collider* m_Collider;
		int32_t m_ContactCount;
		IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::ContactPoint>* m_ReusedContacts;
		IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::ContactPoint>* m_LegacyContacts;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_relativeVelocity();
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* get_rigidbody();
		UnityEngine_PhysicsModule::UnityEngine::Collider* get_collider();
		UnityEngine_CoreModule::UnityEngine::Transform* get_transform();
		IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::ContactPoint>* get_contacts();
	};
}

