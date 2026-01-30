#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct Ammo : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_block;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_shotgun;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_machinegun;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_rifle;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_m61;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_shmel;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_medkit;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_tnt;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_gp;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_rpg;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_zbk18m;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_zof26;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_snaryad;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_repair_kit;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_arrows;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_flamethrower;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_gp_hud;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_javelin_hud;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_minefly_hud;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_rpg_hud;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_shmel_hud;
		UnityEngine_CoreModule::UnityEngine::Texture* ammo_snowball_hud;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_gun;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_m61;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_shmel;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_tnt;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_gp;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_rpg;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_zbk18m;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_zof26;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_snaryad;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_repair_kit;
		UnityEngine_CoreModule::UnityEngine::Rect r_ammo_snowball;
		int32_t weaponid;
		int32_t clip;
		int32_t backpack;
		int32_t g1count;
		int32_t g2count;
		int32_t a1count;
		int32_t a2count;
		int32_t a3count;
		int32_t gp;
		int32_t zbk18m;
		int32_t zof26;
		int32_t snaryad;
		int32_t repair_kit;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		bool draw;
		bool initialized;
		void Awake();
		void OnResize();
		void OnGUI();
		void SetWeapon(int32_t _weaponid, int32_t _clip, int32_t _backpack);
		void SetPrimaryAmmo(int32_t _ammo_clip);
		void SetAmmo(int32_t _g1, int32_t _g2, int32_t _a1, int32_t _a2, int32_t _a3, int32_t _gp, int32_t _zbk18m, int32_t _zof26, int32_t _snaryad);
		void _ctor();
	};
}

