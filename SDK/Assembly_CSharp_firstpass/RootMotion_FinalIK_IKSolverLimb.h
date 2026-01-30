#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolverTrigonometric.h"
#include "..\UnityEngine_AnimationModule\UnityEngine_AvatarIKGoal.h"
#include "RootMotion_FinalIK_IKSolverLimb_BendModifier.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "RootMotion_FinalIK_IKSolverLimb_AxisDirection.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverLimb_AxisDirection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverLimb : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverTrigonometric
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb_BendModifier bendModifier;
		float maintainRotationWeight;
		float bendModifierWeight;
		UnityEngine_CoreModule::UnityEngine::Transform* bendGoal;
		bool maintainBendFor1Frame;
		bool maintainRotationFor1Frame;
		UnityEngine_CoreModule::UnityEngine::Quaternion defaultRootRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion parentDefaultRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion bone3RotationBeforeSolve;
		UnityEngine_CoreModule::UnityEngine::Quaternion maintainRotation;
		UnityEngine_CoreModule::UnityEngine::Quaternion bone3DefaultRotation;
		UnityEngine_CoreModule::UnityEngine::Vector3 _bendNormal;
		UnityEngine_CoreModule::UnityEngine::Vector3 animationNormal;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb_AxisDirection>* axisDirectionsLeft;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb_AxisDirection>* axisDirectionsRight;
		void MaintainRotation();
		void MaintainBend();
		void OnInitiateVirtual();
		void OnUpdateVirtual();
		void OnPostSolveVirtual();
		void _ctor();
		void _ctor(UnityEngine_AnimationModule::UnityEngine::AvatarIKGoal goal);
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb_AxisDirection>* get_axisDirections();
		void StoreAxisDirections(IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverLimb_AxisDirection>& axisDirections);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetModifiedBendNormal();
	};
}

