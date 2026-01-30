#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "RootMotion_FinalIK_FBIKChain_Smoothing.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Node; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FBIKChain_ChildConstraint; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKConstraintBend; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Point; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBody; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct FBIKChain : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float pin;
		float pull;
		float push;
		float pushParent;
		float reach;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain_Smoothing reachSmoothing;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain_Smoothing pushSmoothing;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Node*>* nodes;
		IL2CPP::Array<int32_t>* children;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain_ChildConstraint*>* childConstraints;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKConstraintBend* bendConstraint;
		float rootLength;
		bool initiated;
		float length;
		float distance;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Point* p;
		float reachForce;
		float pullParentSum;
		IL2CPP::Array<float>* crossFades;
		float sqrMag1;
		float sqrMag2;
		float sqrMagDif;
		struct StaticFields
		{
			float maxLimbLength;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(float pin, float pull, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* nodeTransforms);
		void SetNodes(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* boneTransforms);
		int32_t GetNodeIndex(UnityEngine_CoreModule::UnityEngine::Transform* boneTransform);
		bool IsValid(mscorlib::System::String& message);
		void Initiate(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void ReadPose(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, bool fullBody);
		void CalculateBoneLengths(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void Reach(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		UnityEngine_CoreModule::UnityEngine::Vector3 Push(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void SolveTrigonometric(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, bool calculateBendDirection);
		void Stage1(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void Stage2(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver, UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void SolveConstraintSystems(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		UnityEngine_CoreModule::UnityEngine::Vector3 SolveFABRIKJoint(UnityEngine_CoreModule::UnityEngine::Vector3 pos1, UnityEngine_CoreModule::UnityEngine::Vector3 pos2, float length);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetDirToBendPoint(UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 bendDirection, float directionMagnitude);
		void SolveChildConstraints(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody* solver);
		void SolveLinearConstraint(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Node* node1, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Node* node2, float crossFade, float distance);
		void ForwardReach(UnityEngine_CoreModule::UnityEngine::Vector3 position);
		void BackwardReach(UnityEngine_CoreModule::UnityEngine::Vector3 position);
	};
}

