#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "UnityEngine_RaycastHit2D.h"
namespace UnityEngine_Physics2DModule::UnityEngine { struct RaycastHit2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_ContactFilter2D.h"
namespace UnityEngine_Physics2DModule::UnityEngine { struct ContactFilter2D; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_Physics2DModule::UnityEngine { struct Collider2D; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace UnityEngine_Physics2DModule::UnityEngine
{
	struct PhysicsScene2D
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Handle;
		mscorlib::System::String* ToString();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D other);
		UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, int32_t layerMask);
		UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter);
		static UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D Raycast_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter);
		int32_t Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		static int32_t RaycastArray_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		int32_t Raycast(UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, mscorlib::System::Collections::Generic::List_1<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		static int32_t RaycastList_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 origin, UnityEngine_CoreModule::UnityEngine::Vector2 direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter, mscorlib::System::Collections::Generic::List_1<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		int32_t GetRayIntersection(UnityEngine_CoreModule::UnityEngine::Ray ray, float distance, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results, int32_t layerMask);
		static int32_t GetRayIntersectionArray_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float distance, int32_t layerMask, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		UnityEngine_Physics2DModule::UnityEngine::Collider2D* OverlapPoint(UnityEngine_CoreModule::UnityEngine::Vector2 point, int32_t layerMask);
		static UnityEngine_Physics2DModule::UnityEngine::Collider2D* OverlapPoint_Internal(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2 point, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D contactFilter);
		static void Raycast_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& origin, UnityEngine_CoreModule::UnityEngine::Vector2& direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter, UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D& ret);
		static int32_t RaycastArray_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& origin, UnityEngine_CoreModule::UnityEngine::Vector2& direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		static int32_t RaycastList_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& origin, UnityEngine_CoreModule::UnityEngine::Vector2& direction, float distance, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter, mscorlib::System::Collections::Generic::List_1<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		static int32_t GetRayIntersectionArray_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& origin, UnityEngine_CoreModule::UnityEngine::Vector3& direction, float distance, int32_t layerMask, IL2CPP::Array<UnityEngine_Physics2DModule::UnityEngine::RaycastHit2D>* results);
		static UnityEngine_Physics2DModule::UnityEngine::Collider2D* OverlapPoint_Internal_Injected(UnityEngine_Physics2DModule::UnityEngine::PhysicsScene2D& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector2& point, UnityEngine_Physics2DModule::UnityEngine::ContactFilter2D& contactFilter);
	};
}

