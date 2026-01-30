#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolverHeuristic.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolver_IterationDelegate; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverCCD : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverHeuristic
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_IterationDelegate* OnPreIteration;
		void FadeOutBoneWeights();
		void OnInitiate();
		void OnUpdate();
		void Solve(UnityEngine_CoreModule::UnityEngine::Vector3 targetPosition);
		void _ctor();
	};
}

