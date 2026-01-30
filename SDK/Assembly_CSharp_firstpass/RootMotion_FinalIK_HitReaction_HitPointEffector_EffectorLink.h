#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "RootMotion_FinalIK_HitReaction_HitPointEffector.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct HitReaction_HitPointEffector; };
#include "RootMotion_FinalIK_FullBodyBipedEffector.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct IKSolverFullBodyBiped; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct HitReaction_HitPointEffector_EffectorLink : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp_firstpass::RootMotion::FinalIK::FullBodyBipedEffector effector;
		float weight;
		UnityEngine_CoreModule::UnityEngine::Vector3 lastValue;
		UnityEngine_CoreModule::UnityEngine::Vector3 current;
		void Apply(Assembly_CSharp_firstpass::RootMotion::FinalIK::IKSolverFullBodyBiped* solver, UnityEngine_CoreModule::UnityEngine::Vector3 offset, float crossFader);
		void CrossFadeStart();
		void _ctor();
	};
}

