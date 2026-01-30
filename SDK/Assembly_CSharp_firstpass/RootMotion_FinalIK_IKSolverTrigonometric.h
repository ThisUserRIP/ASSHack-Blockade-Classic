#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverTrigonometric_TrigonometricBone; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Point; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverTrigonometric : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		float IKRotationWeight;
		UnityEngine_CoreModule::UnityEngine::Quaternion IKRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 bendNormal;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone* bone1;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone* bone2;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverTrigonometric_TrigonometricBone* bone3;
		UnityEngine_CoreModule::UnityEngine::Vector3 weightIKPosition;
		bool directHierarchy;
		void SetBendGoalPosition(UnityEngine_CoreModule::UnityEngine::Vector3 goalPosition, float weight);
		void SetBendPlaneToCurrent();
		void SetIKRotation(UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void SetIKRotationWeight(float weight);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetIKRotation();
		float GetIKRotationWeight();
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point*>* GetPoints();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* GetPoint(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void StoreDefaultLocalState();
		void FixTransforms();
		bool IsValid(mscorlib::System::String& message);
		bool SetChain(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, UnityEngine_CoreModule::UnityEngine::Transform* root);
		static void Solve(UnityEngine_CoreModule::UnityEngine::Transform* bone1, UnityEngine_CoreModule::UnityEngine::Transform* bone2, UnityEngine_CoreModule::UnityEngine::Transform* bone3, UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, UnityEngine_CoreModule::UnityEngine::Vector3 bendNormal, float weight);
		static UnityEngine_CoreModule::UnityEngine::Vector3 GetDirectionToBendPoint(UnityEngine_CoreModule::UnityEngine::Vector3 direction, float directionMag, UnityEngine_CoreModule::UnityEngine::Vector3 bendDirection, float sqrMag1, float sqrMag2);
		void OnInitiate();
		bool IsDirectHierarchy();
		void InitiateBones();
		void OnUpdate();
		void OnInitiateVirtual();
		void OnUpdateVirtual();
		void OnPostSolveVirtual();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetBendDirection(UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition, UnityEngine_CoreModule::UnityEngine::Vector3 bendNormal);
		void _ctor();
	};
}

