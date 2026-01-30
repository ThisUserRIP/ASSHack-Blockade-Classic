#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_HitReactionVRIK_PositionOffset.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReactionVRIK_PositionOffset; };
#include "RootMotion_FinalIK_IKSolverVR_PositionOffset.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct HitReactionVRIK_PositionOffset_PositionOffsetLink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverVR_PositionOffset positionOffset;
		float weight;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastValue;
		UnityEngine_CoreModule::UnityEngine::Vector3 current;
		void Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, UnityEngine_CoreModule::UnityEngine::Vector3 offset, float crossFader);
		void CrossFadeStart();
		void _ctor();
	};
}

