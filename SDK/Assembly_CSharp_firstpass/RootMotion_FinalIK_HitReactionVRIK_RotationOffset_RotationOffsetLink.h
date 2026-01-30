#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_HitReactionVRIK_RotationOffset.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReactionVRIK_RotationOffset; };
#include "RootMotion_FinalIK_IKSolverVR_RotationOffset.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct HitReactionVRIK_RotationOffset_RotationOffsetLink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_RotationOffset rotationOffset;
		float weight;
		UnityEngine_CoreModule::UnityEngine::Quaternion lastValue;
		UnityEngine_CoreModule::UnityEngine::Quaternion current;
		void Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, UnityEngine_CoreModule::UnityEngine::Quaternion offset, float crossFader);
		void CrossFadeStart();
		void _ctor();
	};
}

