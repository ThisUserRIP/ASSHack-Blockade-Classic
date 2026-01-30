#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolverFullBody.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKEffector; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct FBIKChain; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMappingLimb; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMappingBone; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "RootMotion_FinalIK_FullBodyBipedChain.h"
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKMappingSpine; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKConstraintBend; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedReferences; };
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedLimbOrientations; };
namespace Assembly_CSharp_firstpass::RootMotion { struct BipedLimbOrientations_LimbOrientation; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverFullBodyBiped : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBody
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* rootNode;
		float spineStiffness;
		float pullBodyVertical;
		float pullBodyHorizontal;
		UnityEngine_CoreModule::UnityEngine::Vector3 _pullBodyOffset_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_bodyEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_leftShoulderEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_rightShoulderEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_leftThighEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_rightThighEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_leftHandEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_rightHandEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_leftFootEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* get_rightFootEffector();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain* get_leftArmChain();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain* get_rightArmChain();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain* get_leftLegChain();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain* get_rightLegChain();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb* get_leftArmMapping();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb* get_rightArmMapping();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb* get_leftLegMapping();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb* get_rightLegMapping();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingBone* get_headMapping();
		void SetChainWeights(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedChain c, float pull, float reach);
		void SetEffectorWeights(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector, float positionWeight, float rotationWeight);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain* GetChain(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedChain c);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain* GetChain(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* GetEffector(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* GetEndEffector(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedChain c);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb* GetLimbMapping(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedChain chain);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingLimb* GetLimbMapping(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingSpine* GetSpineMapping();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKMappingBone* GetHeadMapping();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKConstraintBend* GetBendConstraint(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedChain limb);
		bool IsValid(mscorlib::System::String& message);
		void SetToReferences(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references, UnityEngine_CoreModule::UnityEngine::Transform* rootNode);
		static UnityEngine_CoreModule::UnityEngine::Transform* DetectRootNodeBone(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references);
		void SetLimbOrientations(Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations* o);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_pullBodyOffset();
		void set_pullBodyOffset(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void SetLimbOrientation(Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedChain chain, Assembly_CSharp_firstpass::RootMotion::BipedLimbOrientations_LimbOrientation* limbOrientation);
		static UnityEngine_CoreModule::UnityEngine::Transform* GetLeftClavicle(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references);
		static UnityEngine_CoreModule::UnityEngine::Transform* GetRightClavicle(Assembly_CSharp_firstpass::RootMotion::BipedReferences* references);
		static bool Contains(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* array, UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void ReadPose();
		void PullBody();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetBodyOffset();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetHandBodyPull(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKEffector* effector, Assembly_CSharp_firstpass::RootMotion::FinalIK::FBIKChain* arm, UnityEngine_CoreModule::UnityEngine::Vector3 offset);
		void ApplyBendConstraints();
		void WritePose();
		void _ctor();
	};
}

