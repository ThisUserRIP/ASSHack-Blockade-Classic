#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject_WeightCurve; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject_Multiplier; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionObject_InteractionEvent; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionSystem; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct InteractionTarget; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "RootMotion_FinalIK_InteractionObject_WeightCurve_Type.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBodyBiped; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct InteractionObject : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* otherLookAtTarget;
		UnityEngine_CoreModule::UnityEngine::Transform* otherTargetsRoot;
		UnityEngine_CoreModule::UnityEngine::Transform* positionOffsetSpace;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve*>* weightCurves;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_Multiplier*>* multipliers;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_InteractionEvent*>* events;
		float _length_k__BackingField;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem* _lastUsedInteractionSystem_k__BackingField;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget*>* targets;
		void OpenTutorial1();
		void OpenTutorial2();
		void OpenTutorial3();
		void OpenTutorial4();
		void SupportGroup();
		void ASThread();
		float get_length();
		void set_length(float value);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem* get_lastUsedInteractionSystem();
		void set_lastUsedInteractionSystem(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem* value);
		void Initiate();
		UnityEngine_CoreModule::UnityEngine::Transform* get_lookAtTarget();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget* GetTarget(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem* interactionSystem);
		bool CurveUsed(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve_Type type);
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget*>* GetTargets();
		UnityEngine_CoreModule::UnityEngine::Transform* GetTarget(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType, mscorlib::System::String* tag);
		void OnStartInteraction(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionSystem* interactionSystem);
		void Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget* target, float timer, float weight);
		float GetValue(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve_Type weightCurveType, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionTarget* target, float timer);
		UnityEngine_CoreModule::UnityEngine::Transform* get_targetsRoot();
		void Awake();
		void Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector, Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve_Type type, float value, float weight);
		UnityEngine_CoreModule::UnityEngine::Transform* GetTarget(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effectorType);
		int32_t GetWeightCurveIndex(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve_Type weightCurveType);
		int32_t GetMultiplierIndex(Assembly_CSharp_firstpass::RootMotion::FinalIK::InteractionObject_WeightCurve_Type weightCurveType);
		void OpenUserManual();
		void OpenScriptReference();
		void _ctor();
	};
}

