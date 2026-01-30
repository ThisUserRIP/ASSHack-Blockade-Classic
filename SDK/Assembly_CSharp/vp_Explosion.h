#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_Explosion : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float Radius;
		float Force;
		float UpForce;
		float Damage;
		float CameraShake;
		mscorlib::System::String* DamageMessageName;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_Audio;
		UnityEngine_AudioModule::UnityEngine::AudioClip* Sound;
		float SoundMinPitch;
		float SoundMaxPitch;
		mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::GameObject>* FXPrefabs;
		void Awake();
		void Update();
		void _ctor();
	};
}

