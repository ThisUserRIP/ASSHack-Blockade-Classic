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
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_QueryTriggerInteraction.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
#include "UnityEngine_RaycastHit.h"

namespace UnityEngine_PhysicsModule::UnityEngine
{
	struct PhysicsScene
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_Handle;
		mscorlib::System::String* ToString();
		int32_t GetHashCode();
		bool Equals(mscorlib::System::Object* other);
		bool Equals(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene other);
		bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Internal_RaycastTest(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		bool Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Internal_Raycast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Ray ray, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hit, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		int32_t Raycast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, UnityEngine_CoreModule::UnityEngine::Vector3 direction, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* raycastHits, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static int32_t Internal_RaycastNonAlloc(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Ray ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* raycastHits, float maxDistance, int32_t mask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Query_CapsuleCast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Internal_CapsuleCast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		bool CapsuleCast(UnityEngine_CoreModule::UnityEngine::Vector3 point1, UnityEngine_CoreModule::UnityEngine::Vector3 point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Query_SphereCast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Internal_SphereCast(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		bool SphereCast(UnityEngine_CoreModule::UnityEngine::Vector3 origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Internal_RaycastTest_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Ray& ray, float maxDistance, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Internal_Raycast_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Ray& ray, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hit, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static int32_t Internal_RaycastNonAlloc_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Ray& ray, IL2CPP::Array<UnityEngine_PhysicsModule::UnityEngine::RaycastHit>* raycastHits, float maxDistance, int32_t mask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Query_CapsuleCast_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& point1, UnityEngine_CoreModule::UnityEngine::Vector3& point2, float radius, UnityEngine_CoreModule::UnityEngine::Vector3& direction, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
		static bool Query_SphereCast_Injected(UnityEngine_PhysicsModule::UnityEngine::PhysicsScene& physicsScene, UnityEngine_CoreModule::UnityEngine::Vector3& origin, float radius, UnityEngine_CoreModule::UnityEngine::Vector3& direction, float maxDistance, UnityEngine_PhysicsModule::UnityEngine::RaycastHit& hitInfo, int32_t layerMask, UnityEngine_PhysicsModule::UnityEngine::QueryTriggerInteraction queryTriggerInteraction);
	};
}

