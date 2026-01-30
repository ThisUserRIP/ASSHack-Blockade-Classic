#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Collider; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTrigger; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionSystem_InteractionDelegate; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionSystem_InteractionEventDelegate; };
#include "..\UnityEngine_PhysicsModule\UnityEngine_RaycastHit.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct RaycastHit; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FullBodyBipedIK; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionLookAt; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionEffector; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTarget; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTrigger_Range; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionSystem : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* targetTag;
		float fadeInTime;
		float speed;
		float resetToDefaultsSpeed;
		UnityEngine_PhysicsModule::UnityEngine::Collider* characterCollider;
		UnityEngine_CoreModule::UnityEngine::Transform* FPSCamera;
		UnityEngine_CoreModule::UnityEngine::LayerMask camRaycastLayers;
		float camRaycastDistance;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger>* _triggersInRange_k__BackingField;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger>* inContact;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* bestRangeIndexes;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionStart;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionPause;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionPickUp;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionResume;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem_InteractionDelegate* OnInteractionStop;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem_InteractionEventDelegate* OnInteractionEvent;
		UnityEngine_PhysicsModule::UnityEngine::RaycastHit raycastHit;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedIK* fullBody;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionLookAt* lookAt;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionEffector*>* interactionEffectors;
		bool initiated;
		UnityEngine_PhysicsModule::UnityEngine::Collider* lastCollider;
		UnityEngine_PhysicsModule::UnityEngine::Collider* c;
		void OpenTutorial1();
		void OpenTutorial2();
		void OpenTutorial3();
		void OpenTutorial4();
		void SupportGroup();
		void ASThread();
		bool get_inInteraction();
		bool IsInInteraction(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType);
		bool IsPaused(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType);
		bool IsPaused();
		bool IsInSync();
		bool StartInteraction(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* interactionObject, bool interrupt);
		bool PauseInteraction(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType);
		bool ResumeInteraction(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType);
		bool StopInteraction(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType);
		void PauseAll();
		void ResumeAll();
		void StopAll();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* GetInteractionObject(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType);
		float GetProgress(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType);
		float GetMinActiveProgress();
		bool TriggerInteraction(int32_t index, bool interrupt);
		bool TriggerInteraction(int32_t index, bool interrupt, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject& interactionObject);
		bool TriggerInteraction(int32_t index, bool interrupt, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget& interactionTarget);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_Range* GetClosestInteractionRange();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* GetClosestInteractionObjectInRange();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget* GetClosestInteractionTargetInRange();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject*>* GetClosestInteractionObjectsInRange();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget*>* GetClosestInteractionTargetsInRange();
		bool TriggerEffectorsReady(int32_t index);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger_Range* GetTriggerRange(int32_t index);
		int32_t GetClosestTriggerIndex();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedIK* get_ik();
		void set_ik(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedIK* value);
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger>* get_triggersInRange();
		void set_triggersInRange(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTrigger>* value);
		void Start();
		void InteractionPause(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* interactionObject);
		void InteractionResume(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* interactionObject);
		void InteractionStop(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* interactionObject);
		void LookAtInteraction(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject* interactionObject);
		void OnTriggerEnter(UnityEngine_PhysicsModule::UnityEngine::Collider* c);
		void OnTriggerExit(UnityEngine_PhysicsModule::UnityEngine::Collider* c);
		bool ContactIsInRange(int32_t index, int32_t& bestRangeIndex);
		void OnDrawGizmosSelected();
		void Update();
		void Raycasting();
		void UpdateTriggerEventBroadcasting();
		void UpdateEffectors();
		void OnPreFBBIK();
		void OnPostFBBIK();
		void OnFixTransforms();
		void OnDestroy();
		bool IsValid(bool log);
		bool TriggerIndexIsValid(int32_t index);
		void OpenUserManual();
		void OpenScriptReference();
		void _ctor();
	};
}

