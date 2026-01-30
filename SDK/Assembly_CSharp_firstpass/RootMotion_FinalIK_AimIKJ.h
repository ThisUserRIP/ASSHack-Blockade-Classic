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
#include "RootMotion_FinalIK_AimIKJob.h"
namespace Assembly_CSharp_firstpass::RootMotion::FinalIK { struct AimIKJob; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };

namespace Assembly_CSharp_firstpass::RootMotion::FinalIK
{
	struct AimIKJ : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		UnityEngine_CoreModule::UnityEngine::Transform* poleTarget;
		UnityEngine_CoreModule::UnityEngine::Transform* aimTransform;
		float axisX;
		float axisY;
		float axisZ;
		float poleAxisX;
		float poleAxisY;
		float poleAxisZ;
		float weight;
		float poleWeight;
		float tolerance;
		int32_t maxIterations;
		float clampWeight;
		int32_t clampSmoothing;
		bool useRotationLimits;
		bool XY;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Transform*>* bones;
		bool _initiated_k__BackingField;
		UnityEngine_AnimationModule::UnityEngine::Animator* animator;
		UnityEngine_CoreModule::UnityEngine::Playables::PlayableGraph graph;
		UnityEngine_AnimationModule::UnityEngine::Animations::AnimationScriptPlayable IKPlayable;
		Assembly_CSharp_firstpass::RootMotion::FinalIK::AimIKJob job;
		bool get_initiated();
		void set_initiated(bool value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_axis();
		void set_axis(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		UnityEngine_CoreModule::UnityEngine::Vector3 get_poleAxis();
		void set_poleAxis(UnityEngine_CoreModule::UnityEngine::Vector3 value);
		void OnEnable();
		void Update();
		void OnDisable();
		void _ctor();
	};
}

