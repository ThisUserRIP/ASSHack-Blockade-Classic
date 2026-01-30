#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };

namespace Assembly_CSharp
{
	struct Sound : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AudioModule::UnityEngine::AudioSource* csas;
		UnityEngine_AudioModule::UnityEngine::AudioSource* csas_loop;
		float currPitch;
		float currVolume;
		void Awake();
		void PlaySound_Weapon(int32_t weaponid);
		void PlaySound_Block(mscorlib::System::String* blockname);
		void PlaySound_Hit();
		void PlaySound_HitHelmet();
		void PlaySound_TraceHelmet();
		void PlaySound_Walk(int32_t type);
		void PlaySound_Animal(int32_t type);
		void PlaySound_Jetpack();
		void PlaySound_TankEnter(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_TankStand(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_TankMove(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_TankStart(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_TankStop(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_JeepStand(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_JeepMove(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_JeepStart(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_JeepStop(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_SnaryadFly(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_Pich(float koef, UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_TurretStart(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_TurretMove(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_TurretStop(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_Stop(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_Zoom();
		void PlaySound_TankZoom(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_ZM_Infected();
		void PlaySound_ZM_Ambient();
		void PlaySound_Death();
		void PlaySound_TNT();
		void PlaySound_C4_Detonator();
		void PlaySound_MinePlace();
		void PlaySound_GPLauncher();
		void PlaySound_WeaponTank(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_WeaponMGTank(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_UseModul(UnityEngine_AudioModule::UnityEngine::AudioSource* AS, int32_t module_index);
		void PlaySound_TankMGNoAmmo(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_TankMGReload(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_Present(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_TankHit(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_JavelinTargeting(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_JavelinAIM(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_JavelinMissleAIM(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_MinigunMotor(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		UnityEngine_AudioModule::UnityEngine::AudioClip* GetDryFire();
		UnityEngine_AudioModule::UnityEngine::AudioClip* GetReload();
		UnityEngine_AudioModule::UnityEngine::AudioClip* GetSnowballReload();
		UnityEngine_AudioModule::UnityEngine::AudioClip* GetMineFly();
		UnityEngine_AudioModule::UnityEngine::AudioClip* GetMolotovFly();
		UnityEngine_AudioModule::UnityEngine::AudioClip* GetMolotovBurn();
		UnityEngine_AudioModule::UnityEngine::AudioClip* GetMolotovExplosion();
		UnityEngine_AudioModule::UnityEngine::AudioClip* GetSelect();
		UnityEngine_AudioModule::UnityEngine::AudioClip* GetDeath();
		void PlaySound_SmokeGrenade(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_ShieldHit(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void PlaySound_SnowHit(UnityEngine_AudioModule::UnityEngine::AudioSource* AS);
		void _ctor();
	};
}

