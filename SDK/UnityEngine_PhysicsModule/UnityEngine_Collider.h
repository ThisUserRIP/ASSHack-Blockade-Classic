#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Component.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Bounds.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct PhysicMaterial; };
#include "UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct Collider : UnityEngine_CoreModule::UnityEngine::Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_enabled();
		void set_enabled(bool value);
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* get_attachedRigidbody();
		bool get_isTrigger();
		void set_isTrigger(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector3 ClosestPoint(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		UnityEngine_CoreModule::UnityEngine::Bounds get_bounds();
		UnityEngine_PhysicsModule::UnityEngine::PhysicMaterial* get_material();
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, bool& hasHit);
		bool Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance);
		void _ctor();
		void ClosestPoint_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& position, UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		void get_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& ret);
		void Raycast_Injected(UnityEngine_CoreModule::UnityEngine::Ray& ray, float maxDistance, bool& hasHit, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& ret);
	};
}

