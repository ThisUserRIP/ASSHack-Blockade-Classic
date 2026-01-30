#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolverHeuristic.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_IterationDelegate; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct RotationLimit; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_Bone; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverAim : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverHeuristic
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* transform;
		UnityEngine_CoreModule::UnityEngine::Vector3 axis;
		UnityEngine_CoreModule::UnityEngine::Vector3 poleAxis;
		UnityEngine_CoreModule::UnityEngine::Vector3 polePosition;
		float poleWeight;
		UnityEngine_CoreModule::UnityEngine::Transform* poleTarget;
		float clampWeight;
		int32_t clampSmoothing;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPreIteration;
		float step;
		UnityEngine_CoreModule::UnityEngine::Vector3 clampedIKPosition;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::RotationLimit* transformLimit;
		UnityEngine_CoreModule::UnityEngine::Transform* lastTransform;
		float GetAngle();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_transformAxis();
		UnityEngine_CoreModule::UnityEngine::Vector3 get_transformPoleAxis();
		void OnInitiate();
		void OnUpdate();
		int32_t get_minBones();
		void Solve();
		UnityEngine_CoreModule::UnityEngine::Vector3 GetClampedIKPosition();
		void RotateToTarget(UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition, Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Bone* bone, float weight);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_localDirection();
		void _ctor();
	};
}

