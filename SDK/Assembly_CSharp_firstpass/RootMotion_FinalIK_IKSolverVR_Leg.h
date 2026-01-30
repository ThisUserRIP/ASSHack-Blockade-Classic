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
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_VirtualBone; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverVR_Leg : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		UnityEngine_CoreModule::UnityEngine::Transform* bendGoal;
		float positionWeight;
		float rotationWeight;
		float bendGoalWeight;
		float swivelOffset;
		float bendToTargetWeight;
		float legLengthMlp;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* stretchCurve;
		UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion IKRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 footPositionOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 heelPositionOffset;
		UnityEngine_CoreModule::UnityEngine::Quaternion footRotationOffset;
		float currentMag;
		UnityEngine_CoreModule::UnityEngine::Vector3 _position_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Quaternion _rotation_k__BackingField;
		bool _hasToes_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 _thighRelativeToPelvis_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Vector3 footPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion footRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 bendNormal;
		UnityEngine_CoreModule::UnityEngine::Quaternion calfRelToThigh;
		UnityEngine_CoreModule::UnityEngine::Quaternion thighRelToFoot;
		UnityEngine_CoreModule::UnityEngine::Vector3 bendNormalRelToPelvis;
		UnityEngine_CoreModule::UnityEngine::Vector3 bendNormalRelToTarget;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Quaternion get_rotation();
		void set_rotation(UnityEngine_CoreModule::UnityEngine::Quaternion value);
		bool get_hasToes();
		void set_hasToes(bool value);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_thigh();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_calf();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_foot();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_toes();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_lastBone();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_thighRelativeToPelvis();
		void set_thighRelativeToPelvis(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void OnRead(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);
		void PreSolve();
		void ApplyOffsets();
		void ApplyPositionOffset(UnityEngine_CoreModule::UnityEngine::Vector3 offset, float weight);
		void ApplyRotationOffset(UnityEngine_CoreModule::UnityEngine::Quaternion offset, float weight);
		void Solve(bool stretch);
		void Stretching();
		void Write(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>& solvedPositions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>& solvedRotations);
		void ResetOffsets();
		void _ctor();
	};
}

