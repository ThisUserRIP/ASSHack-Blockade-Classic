#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct LiftMeUp : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float timer;
		bool lift;
		UnityEngine_AudioModule::UnityEngine::AudioSource* audio_lift;
		UnityEngine_AudioModule::UnityEngine::AudioClip* lift_sound;
		UnityEngine_AudioModule::UnityEngine::AudioClip* lift_wait;
		void Awake();
		void PlaySound();
		void PlayWait();
		void Update();
		void BreakSound();
		void _ctor();
	};
}

