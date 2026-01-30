#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct vp_FPInput; };
namespace Assembly_CSharp { struct vp_FPCamera; };
namespace Assembly_CSharp { struct dummy; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct Crosshair; };
namespace Assembly_CSharp { struct Map; };
namespace Assembly_CSharp { struct ParticleManager; };
namespace Assembly_CSharp { struct MainGUI; };
namespace Assembly_CSharp { struct Ammo; };
namespace Assembly_CSharp { struct RagDollManager; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace UnityEngine_PhysicsModule::UnityEngine { struct CharacterController; };
namespace Assembly_CSharp { struct Health; };
namespace Assembly_CSharp { struct Switch; };
#include "..\UnityEngine_CoreModule\UnityEngine_LayerMask.h"
namespace UnityEngine_CoreModule::UnityEngine { struct LayerMask; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Transform; };
namespace Assembly_CSharp { struct Sound; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace Assembly_CSharp { struct Minigun; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp { struct vp_FPWeapon; };
namespace Assembly_CSharp { struct vp_FPWeaponShooter; };
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
#include "..\mscorlib\System_Nullable_1.h"
namespace mscorlib::System { template <typename T> struct Nullable_1; };
#include "..\UnityEngine_CoreModule\UnityEngine_Ray.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Ray; };
#include "ITEM.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp
{
	struct WeaponSystem : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		float m_NextAllowedFireTimeOwerride;
		Assembly_CSharp::vp_FPInput* m_Input;
		Assembly_CSharp::vp_FPCamera* m_FPCamera;
		Assembly_CSharp::dummy* myDummy;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::Crosshair* cscr;
		Assembly_CSharp::Map* csmap;
		Assembly_CSharp::ParticleManager* cspm;
		Assembly_CSharp::MainGUI* csig;
		Assembly_CSharp::Ammo* csam;
		Assembly_CSharp::RagDollManager* csrm;
		Assembly_CSharp::PlayerControl* cspc;
		UnityEngine_PhysicsModule::UnityEngine::CharacterController* cscc;
		Assembly_CSharp::Health* m_Health;
		Assembly_CSharp::Switch* cssw;
		UnityEngine_CoreModule::UnityEngine::LayerMask LM;
		int32_t mwid;
		int32_t pwid;
		int32_t swid;
		IL2CPP::Array<int32_t>* ammowid;
		IL2CPP::Array<int32_t>* ammocount;
		int32_t g1wid;
		int32_t g2wid;
		int32_t gren1count;
		int32_t gren2count;
		int32_t ammo_clip;
		int32_t ammo_fullclip;
		int32_t ammo_backpack;
		int32_t ammo_clip2;
		int32_t ammo_fullclip2;
		int32_t ammo_backpack2;
		int32_t ammo_block;
		int32_t ammo_medkit_w;
		int32_t ammo_medkit_g;
		int32_t ammo_medkit_o;
		int32_t ammo_gp;
		int32_t ammo_clip_rockets;
		int32_t ammo_zbk18m;
		int32_t ammo_zof26;
		int32_t ammo_snaryad;
		int32_t ammo_repair_kit;
		int32_t ammo_module_flash;
		int32_t ammo_module_smoke;
		int32_t ammo_tank_light;
		int32_t ammo_tank_heavy;
		int32_t MGammo_clip;
		int32_t MGammo;
		int32_t JeepMGammo;
		int32_t MGammo_backpack;
		int32_t firstFireCount;
		int32_t secondFireCount;
		int32_t CURRENT_WEAPON_ID;
		uint8_t MGitem;
		UnityEngine_CoreModule::UnityEngine::GameObject* goBlockSetup;
		UnityEngine_CoreModule::UnityEngine::GameObject* goBlockCrash;
		UnityEngine_CoreModule::UnityEngine::GameObject* goBlockTNT;
		float clientreload2;
		bool targetLock;
		UnityEngine_CoreModule::UnityEngine::Transform* target;
		UnityEngine_CoreModule::UnityEngine::Transform* lastTarget;
		bool targetLocked;
		Assembly_CSharp::Sound* _S;
		UnityEngine_AudioModule::UnityEngine::AudioSource* _AS;
		Assembly_CSharp::Minigun* MG;
		int32_t layerMask;
		int32_t ZlayerMask;
		struct StaticFields
		{
			Assembly_CSharp::WeaponSystem* THIS__;
			int32_t MAX_WEAPONS;
			int32_t MAX_ITEMS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void StartEquip(int32_t _mwid, int32_t _pwid, int32_t _swid, int32_t _a1wid, int32_t _a2wid, int32_t _a3wid, int32_t _g1wid, int32_t _g2wid, int32_t clipammo, int32_t backpack, int32_t clipammo2, int32_t backpack2, int32_t blockammo, int32_t ammo1, int32_t ammo2, int32_t ammo3, int32_t gren1, int32_t gren2, int32_t medkit_w, int32_t medkit_g, int32_t medkit_o, int32_t zbk18m, int32_t zof26, int32_t snaryad, int32_t repair_kit, int32_t tank_light, int32_t tank_medium, int32_t tank_heavy, uint8_t mg, int32_t gp, int32_t flash, int32_t smoke);
		void StartEquip(int32_t _pwid, int32_t clipammo, int32_t backpack);
		void FixedUpdate();
		void OnWeaponSelect(Assembly_CSharp::vp_FPWeapon* weapon);
		bool OnWeaponMeleeAttack(Assembly_CSharp::vp_FPWeapon* weapon);
		bool OnWeaponAttack(Assembly_CSharp::vp_FPWeaponShooter* weaponshooter);
		void UseVehicleModul(UnityEngine_AudioModule::UnityEngine::AudioSource* AS, int32_t module_index);
		bool TankFire(int32_t sid, UnityEngine_CoreModule::UnityEngine::Transform* FP);
		void TankMGFire();
		void JeepMGFire();
		bool OnWeaponReloadStart(Assembly_CSharp::vp_FPWeapon* weapon);
		void OnWeaponReloadEnd(Assembly_CSharp::vp_FPWeapon* weapon);
		void OnWeaponZoomStart(Assembly_CSharp::vp_FPWeapon* weapon);
		bool HasScope(int32_t WeaponID);
		void OnWeaponZoomEnd(Assembly_CSharp::vp_FPWeapon* weapon);
		bool WeaponCanReload(int32_t wid);
		void HideWeapons(bool val);
		void SetPrimaryWeapon(bool build_mode_and_block);
		void weapon_raycast(int32_t wid, float dist, int32_t blockdist, Assembly_CSharp::WeaponSystem* WS);
		void alter_weapon_raycast(int32_t wid, Assembly_CSharp::WeaponSystem* WS);
		mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i> GetCursor(bool inside, int32_t radius);
		mscorlib::System::Nullable_1<Assembly_CSharp::Vector3i> GetCursorUnderRay(bool inside, int32_t radius, UnityEngine_CoreModule::UnityEngine::Ray ray);
		void weapon_attack_block(int32_t wid, Assembly_CSharp::Vector3i pointvalue, float x1, float y1, float z1, float x2, float y2, float z2, bool alter_damage);
		bool isPrimaryWeapon(int32_t wid);
		int32_t GetAmmoWid(int32_t i);
		int32_t GetGAmmo();
		int32_t GetHAmmo();
		int32_t GetAmmo(int32_t i);
		int32_t GetPrimaryAmmo();
		int32_t GetAmmoGP();
		int32_t GetAmmoMedkit_w();
		int32_t GetAmmoMedkit_g();
		int32_t GetAmmoMedkit_o();
		int32_t GetModuleRepairKit();
		int32_t GetModuleFlash();
		int32_t GetModuleSmoke();
		int32_t GetJeepMGAmmo();
		int32_t GetMGAmmo();
		int32_t GetMGAmmoClip();
		int32_t GetMGAmmoBackpack();
		int32_t GetZBK18M();
		int32_t GetZOF26();
		int32_t GetSnaryad();
		void SetZombieWeapon();
		void SetAnimalWeapon(Assembly_CSharp::ITEM _wID);
		bool GetBlackSkin();
		void Shake(UnityEngine_CoreModule::UnityEngine::Vector3 epos, bool force);
		void SetMouseSensitivity(float val);
		void StartShake();
		void LiftMeUp();
		mscorlib::System::Collections::IEnumerator* ShakeLift(float timer);
		int32_t GetAmmoRPG7();
		int32_t GetAmmoMinefly();
		int32_t GetAmmoJavelin();
		int32_t GetAmmoRPGClip();
		void TankMGReload();
		void DetonateMyC4();
		void _ctor();
	};
}

