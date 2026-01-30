#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct SoundManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			UnityEngine_AudioModule::UnityEngine::AudioClip* Soundtrack;
			UnityEngine_AudioModule::UnityEngine::AudioClip* SoundHover;
			UnityEngine_AudioModule::UnityEngine::AudioClip* SoundClick;
			IL2CPP::Array<UnityEngine_AudioModule::UnityEngine::AudioClip*>* weapon_sounds;
			UnityEngine_AudioModule::UnityEngine::AudioClip* weapon_tank;
			UnityEngine_AudioModule::UnityEngine::AudioClip* shield_hit;
			UnityEngine_AudioModule::UnityEngine::AudioClip* snow_hit;
			UnityEngine_AudioModule::UnityEngine::AudioClip* weapon_flamethrower;
			UnityEngine_AudioModule::UnityEngine::AudioClip* weapon_flamethrower_start;
			UnityEngine_AudioModule::UnityEngine::AudioClip* weapon_flamethrower_end;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Shovel_Stoneend;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Shovel_Stone;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Shovel_Wood;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Shovel_Brick;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Shovel_Leaf;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Hit;
			UnityEngine_AudioModule::UnityEngine::AudioClip* HitHelmet;
			UnityEngine_AudioModule::UnityEngine::AudioClip* HitHelmet_trace;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankStand;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankMove;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankStart;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankStop;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankEnter;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankTurretMove;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankTurretStart;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankTurretStop;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankZoom;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankHit;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankDeath;
			UnityEngine_AudioModule::UnityEngine::AudioClip* JeepStand;
			UnityEngine_AudioModule::UnityEngine::AudioClip* JeepMove;
			UnityEngine_AudioModule::UnityEngine::AudioClip* JeepStart;
			UnityEngine_AudioModule::UnityEngine::AudioClip* JeepStop;
			UnityEngine_AudioModule::UnityEngine::AudioClip* SmokeGrenade;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Walk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* SnowWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* StoneWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* MetallWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* WaterWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* WoodWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Jetpack;
			UnityEngine_AudioModule::UnityEngine::AudioClip* BaranWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* ChickenWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* PigWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* BearWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* CowWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* PenguinWalk;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankMG;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TankRepairKit;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Zoom;
			UnityEngine_AudioModule::UnityEngine::AudioClip* ZM_Ambient;
			UnityEngine_AudioModule::UnityEngine::AudioClip* ZM_Infected;
			UnityEngine_AudioModule::UnityEngine::AudioClip* Death;
			UnityEngine_AudioModule::UnityEngine::AudioClip* TNT;
			UnityEngine_AudioModule::UnityEngine::AudioClip* gplauncher;
			UnityEngine_AudioModule::UnityEngine::AudioClip* javelinTargeting;
			UnityEngine_AudioModule::UnityEngine::AudioClip* javelinAIM;
			UnityEngine_AudioModule::UnityEngine::AudioClip* javelinMissleAIM;
			UnityEngine_AudioModule::UnityEngine::AudioClip* minigunMotor;
			UnityEngine_AudioModule::UnityEngine::AudioClip* snaryadFly;
			UnityEngine_AudioModule::UnityEngine::AudioClip* weapon_reload;
			UnityEngine_AudioModule::UnityEngine::AudioClip* snowball_reload;
			UnityEngine_AudioModule::UnityEngine::AudioClip* weapon_noammo;
			UnityEngine_AudioModule::UnityEngine::AudioClip* mine_fly;
			UnityEngine_AudioModule::UnityEngine::AudioClip* molotov_fly;
			UnityEngine_AudioModule::UnityEngine::AudioClip* molotov_birn;
			UnityEngine_AudioModule::UnityEngine::AudioClip* molotov_explosion;
			UnityEngine_AudioModule::UnityEngine::AudioClip* FlashLaunch;
			UnityEngine_AudioModule::UnityEngine::AudioClip* select;
			UnityEngine_AudioModule::UnityEngine::AudioClip* podarok;
			UnityEngine_AudioModule::UnityEngine::AudioClip* mine_place;
			UnityEngine_AudioModule::UnityEngine::AudioClip* c4_detonator;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Init();
		static UnityEngine_AudioModule::UnityEngine::AudioClip* ReturnSound_Weapon(int32_t weaponid);
		void _ctor();
	};
}

