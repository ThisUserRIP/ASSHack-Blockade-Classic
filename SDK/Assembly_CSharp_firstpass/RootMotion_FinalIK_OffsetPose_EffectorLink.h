#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_OffsetPose.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct OffsetPose; };
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBodyBiped; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct OffsetPose_EffectorLink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector;
		UnityEngine_CoreModule::UnityEngine::Vector3 offset;
		UnityEngine_CoreModule::UnityEngine::Vector3 pin;
		UnityEngine_CoreModule::UnityEngine::Vector3 pinWeight;
		void Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight, UnityEngine_CoreModule::UnityEngine::Quaternion rotation);
		void _ctor();
	};
}

