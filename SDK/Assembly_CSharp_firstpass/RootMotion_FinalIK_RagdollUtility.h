#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IK; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct RagdollUtility_Rigidbone; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct RagdollUtility_Child; };
#include "..\UnityEngine_AnimationModule\UnityEngine_AnimatorUpdateMode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct RagdollUtility : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IK* ik;
		float ragdollToAnimationTime;
		bool applyIkOnRagdoll;
		float applyVelocity;
		float applyAngularVelocity;
		UnityEngine_AnimationModule::UnityEngine::Animator* animator;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::RagdollUtility_Rigidbone*>* rigidbones;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::RagdollUtility_Child*>* children;
		bool enableRagdollFlag;
		UnityEngine_AnimationModule::UnityEngine::AnimatorUpdateMode animatorUpdateMode;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IK*>* allIKComponents;
		IL2CPP::Array<bool>* fixTransforms;
		float ragdollWeight;
		float ragdollWeightV;
		bool fixedFrame;
		IL2CPP::Array<bool>* disabledIKComponents;
		void EnableRagdoll();
		void DisableRagdoll();
		void Start();
		mscorlib::System::Collections::IEnumerator* DisableRagdollSmooth();
		void Update();
		void FixedUpdate();
		void LateUpdate();
		void AfterLastIK();
		void AfterAnimation();
		void OnFinalPose();
		void RagdollEnabler();
		bool get_isRagdoll();
		void RecordVelocities();
		bool get_ikUsed();
		void StoreLocalState();
		void FixTransforms(float weight);
		void OnDestroy();
		void _ctor();
	};
}

