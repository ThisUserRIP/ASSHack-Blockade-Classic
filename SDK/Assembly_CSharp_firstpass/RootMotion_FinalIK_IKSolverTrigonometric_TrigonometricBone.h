#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_IKSolver_Bone.h"
#include "RootMotion_FinalIK_IKSolverTrigonometric.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverTrigonometric; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct IKSolverTrigonometric_TrigonometricBone : Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolver_Bone
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Quaternion targetToLocalSpace;
		UnityEngine_CoreModule::UnityEngine::Vector3 defaultLocalBendNormal;
		void Initiate(UnityEngine_CoreModule::UnityEngine::Vector3 childPosition, UnityEngine_CoreModule::UnityEngine::Vector3 bendNormal);
		UnityEngine_CoreModule::UnityEngine::Quaternion GetRotation(UnityEngine_CoreModule::UnityEngine::Vector3 direction, UnityEngine_CoreModule::UnityEngine::Vector3 bendNormal);
		UnityEngine_CoreModule::UnityEngine::Vector3 GetBendNormalFromCurrentRotation();
		void _ctor();
	};
}

