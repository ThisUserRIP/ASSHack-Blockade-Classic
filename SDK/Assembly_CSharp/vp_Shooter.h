#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "vp_Component.h"
namespace UnityEngine_PhysicsModule::UnityEngine { struct CharacterController; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp { struct vp_FPWeapon; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
namespace Assembly_CSharp { struct Sound; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct vp_Shooter : Assembly_CSharp::vp_Component
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_PhysicsModule::UnityEngine::CharacterController* m_CharacterController;
		UnityEngine_CoreModule::UnityEngine::Transform* m_OperatorTransform;
		Assembly_CSharp::vp_FPWeapon* m_FPSWeapon;
		UnityEngine_CoreModule::UnityEngine::GameObject* ProjectilePrefab;
		float ProjectileScale;
		float ProjectileFiringRate;
		float ProjectileROF;
		float ProjectileSpawnDelay;
		int32_t ProjectileCount;
		float ProjectileSpread;
		float m_NextAllowedFireTime;
		float m_SecondNextAllowedFireTime;
		bool secondFire;
		int32_t currentFiringWeaponID;
		float flameFiringTimer;
		UnityEngine_CoreModule::UnityEngine::Vector3 MuzzleFlashPosition;
		UnityEngine_CoreModule::UnityEngine::Vector3 MuzzleFlashScale;
		float MuzzleFlashFadeSpeed;
		UnityEngine_CoreModule::UnityEngine::GameObject* MuzzleFlashPrefab;
		float MuzzleFlashDelay;
		UnityEngine_CoreModule::UnityEngine::GameObject* m_MuzzleFlash;
		UnityEngine_CoreModule::UnityEngine::Transform* MuzzleFlashTransformPosition;
		UnityEngine_CoreModule::UnityEngine::Transform* ShellTransformPosition;
		UnityEngine_CoreModule::UnityEngine::GameObject* ShellPrefab;
		float ShellScale;
		UnityEngine_CoreModule::UnityEngine::Vector3 ShellEjectDirection;
		UnityEngine_CoreModule::UnityEngine::Vector3 ShellEjectPosition;
		float ShellEjectVelocity;
		float ShellEjectDelay;
		float ShellEjectSpin;
		UnityEngine_AudioModule::UnityEngine::AudioClip* SoundFire;
		float SoundFireDelay;
		UnityEngine_CoreModule::UnityEngine::Vector2 SoundFirePitch;
		Assembly_CSharp::vp_FPPlayerEventHandler* m_Player;
		Assembly_CSharp::Sound* sound;
		UnityEngine_CoreModule::UnityEngine::GameObject* get_MuzzleFlash();
		Assembly_CSharp::vp_FPPlayerEventHandler* get_Player();
		void Awake();
		void Start();
		void TryFire();
		void Fire();
		void PlayFireSound();
		void Update();
		void SpawnProjectiles();
		void ShowMuzzleFlash();
		void EjectShell();
		void DisableFiring(float seconds);
		void EnableFiring();
		void Refresh();
		void Activate();
		void Deactivate();
		void _ctor();
		void _Update_b__44_0();
	};
}

