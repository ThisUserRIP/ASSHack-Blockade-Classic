#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "..\UnityEngine_CoreModule\UnityEngine_Playables_PlayableGraph.h"
namespace UnityEngine_CoreModule::UnityEngine::Playables { struct PlayableGraph; };
#include "..\UnityEngine_AnimationModule\UnityEngine_Animations_AnimationScriptPlayable.h"
namespace UnityEngine_AnimationModule::UnityEngine::Animations { struct AnimationScriptPlayable; };
#include "RootMotion_FinalIK_CCDIKJob.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct CCDIKJob; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct CCDIKJ : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		float weight;
		float tolerance;
		int32_t maxIterations;
		bool useRotationLimits;
		bool XY;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones;
		bool _initiated_k__BackingField;
		UnityEngine_AnimationModule::UnityEngine::Animator* animator;
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph;
		UnityEngine_AnimationModule::UnityEngine::Animations::AnimationScriptPlayable IKPlayable;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::CCDIKJob job;
		bool get_initiated();
		void set_initiated(bool value);
		void OnEnable();
		void Update();
		void OnDisable();
		void _ctor();
	};
}

