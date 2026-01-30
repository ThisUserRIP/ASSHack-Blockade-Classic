#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct vp_FPPlayerEventHandler; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
namespace Assembly_CSharp { struct E_Menu; };
namespace Assembly_CSharp { struct New_Slots; };
namespace Assembly_CSharp { struct New_Select_Team; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct WeaponSystem; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct Client; };
namespace Assembly_CSharp { struct ZipLoader; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct MiniMap; };
namespace Assembly_CSharp { struct Block; };
namespace Assembly_CSharp { struct BlockSet; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct MainGUI : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::vp_FPPlayerEventHandler* Player;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollPosition;
		Assembly_CSharp::E_Menu* EM;
		Assembly_CSharp::New_Slots* NS;
		Assembly_CSharp::New_Select_Team* NST;
		Assembly_CSharp::WeaponSystem* csws;
		UnityEngine_CoreModule::UnityEngine::GameObject* block_face;
		UnityEngine_CoreModule::UnityEngine::GameObject* block_top;
		UnityEngine_CoreModule::UnityEngine::GameObject* goMap;
		UnityEngine_CoreModule::UnityEngine::GameObject* goPlayer;
		Assembly_CSharp::Client* cscl;
		Assembly_CSharp::ZipLoader* cszl;
		Assembly_CSharp::PlayerControl* cspc;
		Assembly_CSharp::MiniMap* csr;
		IL2CPP::Array<Assembly_CSharp::Block*>* teamblock;
		Assembly_CSharp::BlockSet* blockSet;
		UnityEngine_CoreModule::UnityEngine::Texture* tex_inv;
		int32_t last_block;
		Assembly_CSharp::Block* selectedBlock;
		Assembly_CSharp::Block* blocksel;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		float g_buycheck;
		bool g_canbuy;
		struct StaticFields
		{
			bool sel_team;
			bool e_menu;
			bool ForceCursor;
			bool ChatTyping;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Start();
		void SetTeamBlocks();
		void Update();
		void CloseAll();
		void CloseSelectTeam();
		void CloseEMenu(bool skipSetWeapon);
		void OpenSelectTeam();
		void OpenEMenu();
		void OnGUI();
		void SetBlockTextureTeam(UnityEngine_CoreModule::UnityEngine::GameObject* face, UnityEngine_CoreModule::UnityEngine::GameObject* top, int32_t team, bool self);
		void SetBlockTextureForBuild(UnityEngine_CoreModule::UnityEngine::GameObject* face, UnityEngine_CoreModule::UnityEngine::GameObject* top, int32_t flag);
		Assembly_CSharp::Block* GetBlockTextureTeam(int32_t team);
		void SetBlockTexture(Assembly_CSharp::Block* block);
		void DoInventoryWindow(int32_t windowID);
		Assembly_CSharp::Block* DrawInventory(Assembly_CSharp::BlockSet* blockSet, UnityEngine_CoreModule::UnityEngine::Vector2& scrollPosition, Assembly_CSharp::Block* selected);
		static bool DrawBlock(Assembly_CSharp::Block* block, bool selected);
		static void UpdateCursorLock();
		void _ctor();
		static void _cctor();
	};
}

