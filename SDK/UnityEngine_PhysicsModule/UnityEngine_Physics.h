#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "UnityEngine_PhysicsScene.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct PhysicsScene; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_QueryTriggerInteraction.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "UnityEngine_RaycastHit.h"

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct Physics : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static UnityEngine_CoreModule::UnityEngine::Vector3 get_gravity();
		static UnityEngine_PhysicsModule::UnityEngine::PhysicsScene get_defaultPhysicsScene();
		static void IgnoreCollision(UnityEngine_PhysicsModule::UnityEngine::Collider* collider1, UnityEngine_PhysicsModule::UnityEngine::Collider* collider2, bool ignore);
		static void IgnoreCollision(UnityEngine_PhysicsModule::UnityEngine::Collider* collider1, UnityEngine_PhysicsModule::UnityEngine::Collider* collider2);
		static void IgnoreLayerCollision(int32_t layer1, int32_t layer2, bool ignore);
		static void IgnoreLayerCollision(int32_t layer1, int32_t layer2);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance);
		static bool Raycast(UnityEngine_CoreModule::UnityEngine::Ray ray, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo);
		static bool Linecast(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Linecast(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask);
		static bool Linecast(UnityEngine_CoreModule::UnityEngine::Vector3 start, UnityEngine_CoreModule::UnityEngine::Vector3 end, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo);
		static bool CapsuleCast(UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool CapsuleCast(UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask);
		static bool SphereCast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool SphereCast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask);
		static bool SphereCast(UnityEngine_CoreModule::UnityEngine::Ray ray, float radius, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool SphereCast(UnityEngine_CoreModule::UnityEngine::Ray ray, float radius, float maxDistance, int32_t layerMask);
		static bool SphereCast(UnityEngine_CoreModule::UnityEngine::Ray ray, float radius, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool SphereCast(UnityEngine_CoreModule::UnityEngine::Ray ray, float radius, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* Internal_RaycastAll(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t mask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* RaycastAll(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* RaycastAll(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* RaycastAll(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* RaycastAll(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* RaycastAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* RaycastAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* RaycastAll(UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* RaycastAll(UnityEngine_CoreModule::UnityEngine::Ray ray);
		static int32_t RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static int32_t RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask);
		static int32_t RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance);
		static int32_t RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results);
		static int32_t RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static int32_t RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance, int32_t layerMask);
		static int32_t RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results, float maxDistance);
		static int32_t RaycastNonAlloc(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* results);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* OverlapSphere_Internal(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* OverlapSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* OverlapSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* OverlapSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius);
		static bool CheckSphere_Internal(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool CheckSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool CheckSphere(UnityEngine_CoreModule::UnityEngine::Vector3 position, float radius, int32_t layerMask);
		static void get_gravity_Injected(UnityEngine_CoreModule::UnityEngine::Vector3& ret);
		static void get_defaultPhysicsScene_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& ret);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* Internal_RaycastAll_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Ray& ray, float maxDistance, int32_t mask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::Collider*>* OverlapSphere_Internal_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool CheckSphere_Internal_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& position, float radius, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
	};
}

