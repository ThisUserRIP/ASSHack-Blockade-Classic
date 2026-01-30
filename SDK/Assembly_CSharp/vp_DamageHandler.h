#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\UnityEngine_CoreModule\UnityEngine_Quaternion.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Quaternion; };
namespace Assembly_CSharp { struct Sound; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_DamageHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float MaxHealth;
		UnityEngine_CoreModule::UnityEngine::GameObject* DeathEffect;
		float MinDeathDelay;
		float MaxDeathDelay;
		float m_CurrentHealth;
		bool Respawns;
		float MinRespawnTime;
		float MaxRespawnTime;
		float RespawnCheckRadius;
		UnityEngine_AudioModule::UnityEngine::AudioSource* m_Audio;
		UnityEngine_AudioModule::UnityEngine::AudioClip* DeathSound;
		UnityEngine_AudioModule::UnityEngine::AudioClip* RespawnSound;
		UnityEngine_CoreModule::UnityEngine::Vector3 m_StartPosition;
		UnityEngine_CoreModule::UnityEngine::Quaternion m_StartRotation;
		Assembly_CSharp::Sound* sound;
		void Awake();
		void Damage(float damage);
		void Die();
		void Respawn();
		void Reset();
		void Reactivate();
		void RemoveBulletHoles();
		void _ctor();
	};
}

