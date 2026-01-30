#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_IKSolverVR.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "RootMotion_InterpolationMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
namespace UnityEngine_CoreModule::UnityEngine::Events { struct UnityEvent; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Footstep; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_VirtualBone; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Spine; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Leg; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverVR_Arm; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverVR_Locomotion : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float weight;
		float footDistance;
		float stepThreshold;
		float angleThreshold;
		float comAngleMlp;
		float maxVelocity;
		float velocityFactor;
		float maxLegStretch;
		float rootSpeed;
		float stepSpeed;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* stepHeight;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* heelHeight;
		float relaxLegTwistMinAngle;
		float relaxLegTwistSpeed;
		Assembly_CSharp_firstpass::RootMotion::InterpolationMode stepInterpolation;
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		bool blockingEnabled;
		UnityEngine_CoreModule::UnityEngine::LayerMask blockingLayers;
		float raycastRadius;
		float raycastHeight;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* onLeftFootstep;
		UnityEngine_CoreModule::UnityEngine::Events::UnityEvent* onRightFootstep;
		UnityEngine_CoreModule::UnityEngine::Vector3 _centerOfMass_k__BackingField;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Footstep*>* footsteps;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastComPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 comVelocity;
		int32_t leftFootIndex;
		int32_t rightFootIndex;
		UnityEngine_CoreModule::UnityEngine::Vector3 get_centerOfMass();
		void set_centerOfMass(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void Initiate(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations, bool hasToes);
		void Reset(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* positions, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Quaternion>* rotations);
		void AddDeltaRotation(UnityEngine_CoreModule::UnityEngine::Quaternion delta, UnityEngine_CoreModule::UnityEngine::Vector3 pivot);
		void AddDeltaPosition(UnityEngine_CoreModule::UnityEngine::Vector3 delta);
		void Solve(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_VirtualBone* rootBone, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Spine* spine, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg* leftLeg, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Leg* rightLeg, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm* leftArm, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_Arm* rightArm, int32_t supportLegIndex, UnityEngine_CoreModule::UnityEngine::Vector3& leftFootPosition, UnityEngine_CoreModule::UnityEngine::Vector3& rightFootPosition, UnityEngine_CoreModule::UnityEngine::Quaternion& leftFootRotation, UnityEngine_CoreModule::UnityEngine::Quaternion& rightFootRotation, float& leftFootOffset, float& rightFootOffset, float& leftHeelOffset, float& rightHeelOffset);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_leftFootstepPosition();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_rightFootstepPosition();
		UnityEngine_CoreModule::UnityEngine::Quaternion get_leftFootstepRotation();
		UnityEngine_CoreModule::UnityEngine::Quaternion get_rightFootstepRotation();
		bool StepBlocked(UnityEngine_CoreModule::UnityEngine::Vector3 fromPosition, UnityEngine_CoreModule::UnityEngine::Vector3 toPosition, UnityEngine_CoreModule::UnityEngine::Vector3 rootPosition);
		bool CanStep();
		static bool GetLineSphereCollision(UnityEngine_CoreModule::UnityEngine::Vector3 lineStart, UnityEngine_CoreModule::UnityEngine::Vector3 lineEnd, UnityEngine_CoreModule::UnityEngine::Vector3 sphereCenter, float sphereRadius);
		void _ctor();
	};
}

