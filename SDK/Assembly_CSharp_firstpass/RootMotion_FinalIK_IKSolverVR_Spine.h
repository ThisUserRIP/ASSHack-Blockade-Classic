#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolverVR_BodyPart.h"
#include "RootMotion_FinalIK_IKSolverVR.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_VirtualBone; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Arm; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Leg; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverVR_Spine : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* headTarget;
		UnityEngine_CoreModule::UnityEngine::Transform* pelvisTarget;
		float positionWeight;
		float rotationWeight;
		float pelvisPositionWeight;
		float pelvisRotationWeight;
		UnityEngine_CoreModule::UnityEngine::Transform* chestGoal;
		float chestGoalWeight;
		float minHeadHeight;
		float bodyPosStiffness;
		float bodyRotStiffness;
		float neckStiffness;
		float rotateChestByHands;
		float chestClampWeight;
		float headClampWeight;
		float moveBodyBackWhenCrouching;
		float maintainPelvisPosition;
		float maxRootAngle;
		UnityEngine_CoreModule::UnityEngine::Vector3 IKPositionHead;
		UnityEngine_CoreModule::UnityEngine::Quaternion IKRotationHead;
		UnityEngine_CoreModule::UnityEngine::Vector3 IKPositionPelvis;
		UnityEngine_CoreModule::UnityEngine::Quaternion IKRotationPelvis;
		UnityEngine_CoreModule::UnityEngine::Vector3 goalPositionChest;
		UnityEngine_CoreModule::UnityEngine::Vector3 pelvisPositionOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 chestPositionOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 headPositionOffset;
		UnityEngine_CoreModule::UnityEngine::Quaternion pelvisRotationOffset;
		UnityEngine_CoreModule::UnityEngine::Quaternion chestRotationOffset;
		UnityEngine_CoreModule::UnityEngine::Quaternion headRotationOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 faceDirection;
		UnityEngine_CoreModule::UnityEngine::Vector3 locomotionHeadPositionOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 headPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion _anchorRotation_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Quaternion headRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion pelvisRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion anchorRelativeToHead;
		UnityEngine_CoreModule::UnityEngine::Quaternion anchorRelativeToPelvis;
		UnityEngine_CoreModule::UnityEngine::Quaternion pelvisRelativeRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion chestRelativeRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 headDeltaPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion pelvisDeltaRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion chestTargetRotation;
		int32_t pelvisIndex;
		int32_t spineIndex;
		int32_t chestIndex;
		int32_t neckIndex;
		int32_t headIndex;
		float length;
		bool hasChest;
		bool hasNeck;
		bool hasLegs;
		float headHeight;
		float sizeMlp;
		UnityEngine_CoreModule::UnityEngine::Vector3 chestForward;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_pelvis();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_firstSpineBone();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_chest();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_neck();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_head();
		UnityEngine_CoreModule::UnityEngine::Quaternion get_anchorRotation();
		void set_anchorRotation(UnityEngine_CoreModule::UnityEngine::Quaternion value);
		void OnRead(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);
		void PreSolve();
		void ApplyOffsets();
		void CalculateChestTargetRotation(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* rootBone, IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm*>* arms);
		void Solve(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* rootBone, IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg*>* legs, IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm*>* arms);
		void FABRIKPass(UnityEngine_CoreModule::UnityEngine::Vector3 animatedPelvisPos, UnityEngine_CoreModule::UnityEngine::Vector3 rootUp);
		void SolvePelvis();
		void Write(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>& solvedPositions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>& solvedRotations);
		void ResetOffsets();
		void AdjustChestByHands(UnityEngine_CoreModule::UnityEngine::Quaternion& chestTargetRotation, IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm*>* arms);
		void InverseTranslateToHead(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg*>* legs, bool limited, bool useCurrentLegMag, UnityEngine_CoreModule::UnityEngine::Vector3 offset, float w);
		void TranslatePelvis(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg*>* legs, UnityEngine_CoreModule::UnityEngine::Vector3 deltaPosition, UnityEngine_CoreModule::UnityEngine::Quaternion deltaRotation);
		UnityEngine_CoreModule::UnityEngine::Vector3 LimitPelvisPosition(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg*>* legs, UnityEngine_CoreModule::UnityEngine::Vector3 pelvisPosition, bool useCurrentLegMag, int32_t it);
		void Bend(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t firstIndex, int32_t lastIndex, UnityEngine_CoreModule::UnityEngine::Quaternion targetRotation, float clampWeight, bool uniformWeight, float w);
		void Bend(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone*>* bones, int32_t firstIndex, int32_t lastIndex, UnityEngine_CoreModule::UnityEngine::Quaternion targetRotation, UnityEngine_CoreModule::UnityEngine::Quaternion rotationOffset, float clampWeight, bool uniformWeight, float w);
		void _ctor();
	};
}

