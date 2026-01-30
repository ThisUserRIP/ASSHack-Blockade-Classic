#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Assembly_CSharp { struct WeaponSystem; };
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct Client; };
namespace UnityEngine_CoreModule::UnityEngine { struct GameObject; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct SelectTeam_CSortedPlayer; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Assembly_CSharp
{
	struct SelectTeam : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool show;
		bool show_teamselect;
		Assembly_CSharp::WeaponSystem* csws;
		Assembly_CSharp::PlayerControl* cspc;
		Assembly_CSharp::Client* cscl;
		UnityEngine_CoreModule::UnityEngine::GameObject* Map;
		UnityEngine_CoreModule::UnityEngine::Rect r;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_tabmenu;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_tabmenu2;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_tabmenu3;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_class_mp5;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_class_m3;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_class_m14;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_tabmenu2team;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_border;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		int32_t y_pos;
		int32_t x_pos;
		IL2CPP::Array<bool>* hover;
		UnityEngine_CoreModule::UnityEngine::Texture2D* redTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* blueTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* greenTexture;
		UnityEngine_CoreModule::UnityEngine::Texture2D* yellowTexture;
		IL2CPP::Array<Assembly_CSharp::SelectTeam_CSortedPlayer*>* sorted;
		int32_t sortedCount;
		float showtime;
		void OpenMenu();
		void CloseMenu();
		void Awake();
		void Update();
		void OnGUI();
		void TabBattle(int32_t windowID);
		void TabBuild(int32_t windowID);
		void TabZombie(int32_t windowID);
		void TabContra(int32_t windowID);
		void DrawSquad(int32_t x, int32_t y, mscorlib::System::String* text, uint8_t squadid, bool by_admin);
		void DrawClasses(uint8_t squadid);
		void DrawPlayers(int32_t x, int32_t y, int32_t squadid, bool by_admin, int32_t offset);
		void SortPlayers();
		void _ctor();
	};
}

