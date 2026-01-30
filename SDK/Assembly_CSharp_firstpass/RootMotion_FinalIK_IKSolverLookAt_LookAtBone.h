#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver_Bone.h"
#include "RootMotion_FinalIK_IKSolverLookAt.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverLookAt; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverLookAt_LookAtBone : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Bone
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(UnityEngine_CoreModule::UnityEngine::Transform* transform);
		void Initiate(UnityEngine_CoreModule::UnityEngine::Transform* root);
		void LookAt(UnityEngine_CoreModule::UnityEngine::Vector3 direction, float weight);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_forward();
	};
}

