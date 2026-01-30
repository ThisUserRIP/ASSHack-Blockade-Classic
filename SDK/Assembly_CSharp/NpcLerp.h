#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp::AssemblyCSharp { struct CEnt; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animator; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct NpcLerp : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::AssemblyCSharp::CEnt* ent;
		UnityEngine_AnimationModule::UnityEngine::Animator* anim;
		bool roar;
		UnityEngine_AudioModule::UnityEngine::AudioSource* sound;
		UnityEngine_AudioModule::UnityEngine::AudioClip* roar_sound;
		UnityEngine_CoreModule::UnityEngine::Vector3 lookPoint;
		UnityEngine_CoreModule::UnityEngine::GameObject* TargetLaser;
		bool targeting;
		void Awake();
		void PlayAnimation(int32_t move);
		void FixedUpdate();
		void _ctor();
	};
}

