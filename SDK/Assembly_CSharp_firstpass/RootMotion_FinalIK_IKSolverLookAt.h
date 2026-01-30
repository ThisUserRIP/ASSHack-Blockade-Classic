#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverLookAt_LookAtBone; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Point; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverLookAt : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*>* spine;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLookAt_LookAtBone* head;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*>* eyes;
		float bodyWeight;
		float headWeight;
		float eyesWeight;
		float clampWeight;
		float clampWeightHead;
		float clampWeightEyes;
		int32_t clampSmoothing;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* spineWeightCurve;
		UnityEngine_CoreModule::UnityEngine::Vector3 spineTargetOffset;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* spineForwards;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* headForwards;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* eyeForward;
		void SetLookAtWeight(float weight);
		void SetLookAtWeight(float weight, float bodyWeight);
		void SetLookAtWeight(float weight, float bodyWeight, float headWeight);
		void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight);
		void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight);
		void SetLookAtWeight(float weight, float bodyWeight, float headWeight, float eyesWeight, float clampWeight, float clampWeightHead, float clampWeightEyes);
		void StoreDefaultLocalState();
		void FixTransforms();
		bool IsValid(mscorlib::System::String& message);
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>* GetPoints();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* GetPoint(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		bool SetChain(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* spine, UnityEngine_CoreModule::UnityEngine::Transform* head, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* eyes, UnityEngine_CoreModule::UnityEngine::Transform* root);
		void OnInitiate();
		void OnUpdate();
		bool get_spineIsValid();
		bool get_spineIsEmpty();
		void SolveSpine();
		bool get_headIsValid();
		bool get_headIsEmpty();
		void SolveHead();
		bool get_eyesIsValid();
		bool get_eyesIsEmpty();
		void SolveEyes();
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* GetForwards(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>& forwards, UnityEngine_CoreModule::UnityEngine::Vector3 baseForward, UnityEngine_CoreModule::UnityEngine::Vector3 targetForward, int32_t bones, float clamp);
		void SetBones(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* array, IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLookAt_LookAtBone*>& bones);
		void _ctor();
	};
}

