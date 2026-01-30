#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_HitReactionVRIK_Offset.h"
#include "RootMotion_FinalIK_HitReactionVRIK.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReactionVRIK; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReactionVRIK_RotationOffset_RotationOffsetLink; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct Rigidbody; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct VRIK; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct HitReactionVRIK_RotationOffset : Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_Offset
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t curveIndex;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReactionVRIK_RotationOffset_RotationOffsetLink*>* offsetLinks;
		UnityEngine_PhysicsModule::UnityEngine::Rigidbody* rigidbody;
		float GetLength(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::AnimationCurve*>* curves);
		void CrossFadeStart();
		void OnApply(Assembly_CSharp_firstpass::RootMotion::FinalIK::VRIK* ik, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::AnimationCurve*>* curves, float weight);
		void _ctor();
	};
}

