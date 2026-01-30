#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct BlockSet; };
namespace Assembly_CSharp { struct Block; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct ZipLoader; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct MiniMap; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct InventoryGUI : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BlockSet* blockSet;
		IL2CPP::Array<Assembly_CSharp::Block*>* teamblock;
		bool show;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition;
		UnityEngine_CoreModule::UnityEngine::GameObject* goMap;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPlayer;
		UnityEngine_CoreModule::UnityEngine::GameObject* block_face;
		UnityEngine_CoreModule::UnityEngine::GameObject* block_top;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::ZipLoader* cszl;
		Assembly_CSharp::PlayerControl* cspc;
		Assembly_CSharp::MiniMap* csr;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_cube;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_medkit_w;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_mp5;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_m3;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_m14;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_ak47;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_svd;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_glock;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_deagle;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_asval;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_g36c;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_kriss;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_m4a1;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_m249;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_sps12;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_vintorez;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_vsk94;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_usp;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_barrett;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_tmp;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_shovel;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_knife;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_axe;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_bat;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_crowbar;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_caramel;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_auga3;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_sg552;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_m14ebr;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_l96a1;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_kord;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_nova;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_p90;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_scar;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_anaconda;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_rpk;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_hk416;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_ak102;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_sr25;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_mglmk1;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_mosin;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_ppsh;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_mp40;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_l96a1mod;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_kacpdw;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_famas;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_beretta;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_machete;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_repair_tool;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_aa12;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_fn57;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_fs2000;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_l85;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_mac10;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_pkp;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_pm;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_tar21;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_ump45;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_ntw20;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_vintorez_desert;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_tank_default;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_tank_light;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_tank_heavy;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_minigun;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_zaa12;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_zasval;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_zfn57;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_zkord;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_zm249;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_zminigun;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_zsps12;
		UnityEngine_CoreModule::UnityEngine::Texture2D* blackTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* yellowTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_inv;
		float x_pos;
		float y_pos;
		IL2CPP::Array<bool>* hover;
		Assembly_CSharp::Block* selectedBlock;
		Assembly_CSharp::Block* blocksel;
		float g_buycheck;
		bool g_canbuy;
		void Awake();
		void Update();
		void OnGUI();
		void DoInventoryWindow(int32_t windowID);
		Assembly_CSharp::Block* DrawInventory(Assembly_CSharp::BlockSet* blockSet, UnityEngine_CoreModule::UnityEngine::Vector2& scrollPosition, Assembly_CSharp::Block* selected);
		static bool DrawBlock(Assembly_CSharp::Block* block, bool selected);
		void SetBlockTexture(Assembly_CSharp::Block* block);
		void InventoryBattle();
		void InventoryCarnage();
		void InventoryClassic();
		void DrawItem(UnityEngine_CoreModule::UnityEngine::Texture2D* tex, mscorlib::System::String* name, int32_t cid, int32_t wid, int32_t id);
		void _ctor();
	};
}

