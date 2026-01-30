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
#include "RootMotion_FinalIK_IKSolverVR_Arm_ShoulderRotationMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_VirtualBone; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverVR_Arm : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_BodyPart
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		UnityEngine_CoreModule::UnityEngine::Transform* bendGoal;
		float positionWeight;
		float rotationWeight;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm_ShoulderRotationMode shoulderRotationMode;
		float shoulderRotationWeight;
		float shoulderTwistWeight;
		float bendGoalWeight;
		float swivelOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 wristToPalmAxis;
		UnityEngine_CoreModule::UnityEngine::Vector3 palmToThumbAxis;
		float armLengthMlp;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* stretchCurve;
		UnityEngine_CoreModule::UnityEngine::Vector3 IKPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion IKRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 bendDirection;
		UnityEngine_CoreModule::UnityEngine::Vector3 handPositionOffset;
		UnityEngine_CoreModule::UnityEngine::Vector3 _position_k__BackingField;
		UnityEngine_CoreModule::UnityEngine::Quaternion _rotation_k__BackingField;
		bool hasShoulder;
		UnityEngine_CoreModule::UnityEngine::Vector3 chestForwardAxis;
		UnityEngine_CoreModule::UnityEngine::Vector3 chestUpAxis;
		UnityEngine_CoreModule::UnityEngine::Quaternion chestRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 chestForward;
		UnityEngine_CoreModule::UnityEngine::Vector3 chestUp;
		UnityEngine_CoreModule::UnityEngine::Quaternion forearmRelToUpperArm;
		struct StaticFields
		{
			float yawOffsetAngle;
			float pitchOffsetAngle;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::Vector3 get_position();
		void set_position(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Quaternion get_rotation();
		void set_rotation(UnityEngine_CoreModule::UnityEngine::Quaternion value);
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_shoulder();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_upperArm();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_forearm();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* get_hand();
		void OnRead(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasChest, bool hasNeck, bool hasShoulders, bool hasToes, bool hasLegs, int32_t rootIndex, int32_t index);
		void PreSolve();
		void ApplyOffsets();
		void Stretching();
		void Solve(bool isLeft);
		void ResetOffsets();
		void Write(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>& solvedPositions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>& solvedRotations);
		float DamperValue(float value, float min, float max, float weight);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetBendNormal(UnityEngine_CoreModule::UnityEngine::Vector3 dir);
		void Visualize(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* bone1, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* bone2, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* bone3, UnityEngine_CoreModule::UnityEngine::Color color);
		void _ctor();
	};
}

