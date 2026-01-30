#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct WeaponSystem; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct vp_FPWeapon; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace UnityEngine_AnimationModule::UnityEngine { struct AnimationClip; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace Assembly_CSharp { struct Sound; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp
{
	struct vp_FPWeaponReloader : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::WeaponSystem* m_WeaponSystem;
		Assembly_CSharp::PlayerControl* m_PlayerControl;
		Assembly_CSharp::vp_FPWeapon* m_Weapon;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_Audio;
		UnityEngine_AudioModule::UnityEngine::AudioClip* SoundReload;
		UnityEngine_AnimationModule::UnityEngine::AnimationClip* AnimationReload;
		float ReloadDuration;
		float ReloadStart;
		UnityEngine_CoreModule::UnityEngine::Texture2D* ReloadTex;
		float ReloadDuration2;
		float ReloadStart2;
		UnityEngine_CoreModule::UnityEngine::Texture2D* ReloadTex2;
		Assembly_CSharp::Sound* sound;
		void Awake();
		void Start();
		void OnEnable();
		void OnDisable();
		bool CanStart_Reload();
		void OnStart_Reload();
		void OnStop_Reload();
		float get_OnValue_CurrentWeaponReloadDuration();
		void OnGUI();
		void GUIDrawReload();
		void GUIDrawReload2();
		void _ctor();
	};
}

