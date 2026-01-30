#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct E_Menu; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace Assembly_CSharp { struct WeaponSystem; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct Client; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
namespace Assembly_CSharp { struct MainGUI; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
namespace Assembly_CSharp { struct New_Select_Team_CSortedPlayer; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct New_Select_Team : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::E_Menu* EM;
		UnityEngine_CoreModule::UnityEngine::Texture* yellow_tex;
		UnityEngine_CoreModule::UnityEngine::Texture* Title_Background;
		UnityEngine_CoreModule::UnityEngine::Texture* Icon_Background;
		UnityEngine_CoreModule::UnityEngine::Texture* List_Background;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* New_Select_Teams_Icons_Background;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* New_Select_Teams_Icons;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture*>* New_Select_Teams_Icons_Tab;
		IL2CPP::Array<mscorlib::System::String*>* New_Select_Teams_Names;
		UnityEngine_CoreModule::UnityEngine::Rect Title_Rect;
		UnityEngine_CoreModule::UnityEngine::Rect Icon_Rect;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* New_Select_Teams;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* New_Select_Teams_List;
		UnityEngine_CoreModule::UnityEngine::Texture* Play_Button_Normal;
		UnityEngine_CoreModule::UnityEngine::Texture* Play_Button_Hover;
		UnityEngine_CoreModule::UnityEngine::Texture2D* Border;
		UnityEngine_CoreModule::UnityEngine::Rect Play_Button_Rect;
		Assembly_CSharp::WeaponSystem* csws;
		Assembly_CSharp::PlayerControl* cspc;
		Assembly_CSharp::Client* cscl;
		UnityEngine_CoreModule::UnityEngine::GameObject* Map;
		Assembly_CSharp::MainGUI* MGUI;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		IL2CPP::Array<Assembly_CSharp::New_Select_Team_CSortedPlayer*>* sorted;
		int32_t sortedCount;
		float showtime;
		bool can_team_select;
		int32_t x;
		int32_t y;
		float last_time;
		bool In_Play_Button_Rect;
		UnityEngine_CoreModule::UnityEngine::Vector2 mousePos;
		void OpenMenu();
		void CloseMenu();
		void Awake();
		void Update();
		void Draw_New_Select_Team();
		void Draw_New_Select_Zombie_Tab(int32_t i);
		void Draw_Tab(int32_t i);
		void Draw_Battle();
		void Draw_Contra();
		void Draw_Zombie();
		void Draw_Play_Button();
		void DrawPlayers(int32_t x, int32_t y, int32_t squadid, int32_t offset);
		void SortPlayers();
		void _ctor();
	};
}

