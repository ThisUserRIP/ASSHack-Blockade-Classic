#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_SolverManager.h"
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedReferences; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct BipedIKSolvers; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_AnimationModule\UnityEngine_AvatarIKGoal.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverLimb; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct BipedIK : Assembly_CSharp_firstpass::RootMotion::SolverManager
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::BipedReferences* references;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::BipedIKSolvers* solvers;
		void OpenUserManual();
		void OpenScriptReference();
		void SupportGroup();
		void ASThread();
		float GetIKPositionWeight(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal);
		float GetIKRotationWeight(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal);
		void SetIKPositionWeight(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal, float weight);
		void SetIKRotationWeight(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal, float weight);
		void SetIKPosition(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal, UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition);
		void SetIKRotation(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal, UnityEngine_CoreModule::UnityEngine::Quaternion IKRotation);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetIKPosition(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetIKRotation(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal);
		void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes);
		void SetLookAtPosition(UnityEngine_CoreModule::UnityEngine::Vector3 lookAtPosition);
		void SetSpinePosition(UnityEngine_CoreModule::UnityEngine::Vector3 spinePosition);
		void SetSpineWeight(float weight);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb* GetGoalIK(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal);
		void InitiateBipedIK();
		void UpdateBipedIK();
		void SetToDefaults();
		void FixTransforms();
		void InitiateSolver();
		void UpdateSolver();
		void LogWarning(mscorlib::System::String* message);
		void _ctor();
	};
}

