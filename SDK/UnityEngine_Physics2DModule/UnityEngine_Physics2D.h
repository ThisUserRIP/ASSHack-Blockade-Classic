#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_Physics2DModule::UnityEngine { struct Rigidbody2D; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "UnityEngine_PhysicsScene2D.h"
namespace UnityEngine_Physics2DModule::UnityEngine { struct PhysicsScene2D; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "UnityEngine_RaycastHit2D.h"
namespace UnityEngine_Physics2DModule::UnityEngine { struct RaycastHit2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_ContactFilter2D.h"
namespace UnityEngine_Physics2DModule::UnityEngine { struct ContactFilter2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_Physics2DModule::UnityEngine { struct Collider2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_Physics2DModule::UnityEngine
{
	struct Physics2D : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Collections::Generic::List_1<UnityEngine_Physics2DModule::UnityEngine::Rigidbody2D>* m_LastDisabledRigidbody2D;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D get_defaultPhysicsScene();
		static bool get_queriesHitTriggers();
		static UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction);
		static UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance);
		static UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, int32_t layerMask);
		static UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, int32_t layerMask, float minDepth);
		static UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, int32_t layerMask, float minDepth, float maxDepth);
		static int32_t Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		static int32_t Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, float distance);
		static int32_t Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, mscorlib::System::Collections::Generic::List_1<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, float distance);
		static IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* GetRayIntersectionAll(UnityEngine_CoreModule::UnityEngine::Ray ray);
		static IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* GetRayIntersectionAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float distance);
		static IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* GetRayIntersectionAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float distance, int32_t layerMask);
		static IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float distance, int32_t layerMask);
		static int32_t GetRayIntersectionNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		static int32_t GetRayIntersectionNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, float distance);
		static int32_t GetRayIntersectionNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, float distance, int32_t layerMask);
		static UnityEngine_Physics2DModule::UnityEngine::Collider2D* OverlapPoint(UnityEngine_CoreModule::UnityEngine::Vector2 point);
		static IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::Collider2D*>* OverlapCircleAll(UnityEngine_CoreModule::UnityEngine::Vector2 point, float radius);
		static IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::Collider2D*>* OverlapCircleAll_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 point, float radius, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter);
		static void _cctor();
		static IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* GetRayIntersectionAll_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& origin, UnityEngine_CoreModule::UnityEngine::Vector3& direction, float distance, int32_t layerMask);
		static IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::Collider2D*>* OverlapCircleAll_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& point, float radius, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter);
	};
}

