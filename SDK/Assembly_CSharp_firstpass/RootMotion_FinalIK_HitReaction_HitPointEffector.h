#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "RootMotion_FinalIK_HitReaction_HitPoint.h"
#include "RootMotion_FinalIK_HitReaction.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReaction; };
namespace UnityEngine_CoreModule::UnityEngine { struct AnimationCurve; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReaction_HitPointEffector_EffectorLink; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBodyBiped; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct HitReaction_HitPointEffector : Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReaction_HitPoint
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* offsetInForceDirection;
		UnityEngine_CoreModule::UnityEngine::AnimationCurve* offsetInUpDirection;
		IL2CPP::Array<Assembly_CSharp_firstpass::RootMotion::FinalIK::HitReaction_HitPointEffector_EffectorLink*>* effectorLinks;
		float GetLength();
		void CrossFadeStart();
		void OnApply(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, float weight);
		void _ctor();
	};
}

