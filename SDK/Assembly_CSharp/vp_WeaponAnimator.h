#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_Component.h"
namespace Assembly_CSharp { struct WeaponSystem; };
namespace Assembly_CSharp { struct vp_FPInput; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
namespace Assembly_CSharp { struct vp_FPWeapon; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AnimationModule::UnityEngine { struct Animation; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_WeaponAnimator : Assembly_CSharp::vp_Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::WeaponSystem* m_WeaponSystem;
		Assembly_CSharp::vp_FPInput* m_Input;
		mscorlib::System::String* animation_name;
		float nextattack;
		UnityEngine_AudioModule::UnityEngine::AudioClip* soundattack;
		Assembly_CSharp::vp_FPWeapon* m_Weapon;
		float m_NextAllowedTime;
		bool m_ForceAttack;
		bool m_ForceExit;
		UnityEngine_AnimationModule::UnityEngine::Animation* MyAnimation;
		bool ROFSeted;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		Assembly_CSharp::vp_FPPlayerEventHandler* get_Player();
		void Start();
		void Update();
		void Activate();
		void UpdateAttack();
		void _ctor();
	};
}

