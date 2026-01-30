#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct PlayerControl; };
namespace Assembly_CSharp { struct MiniMap; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace Assembly_CSharp { struct Map; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "MODE.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct TeamScore : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::PlayerControl* pc;
		Assembly_CSharp::MiniMap* csMiniMap;
		UnityEngine_IMGUIModule::UnityEngine::GUIStyle* gui_style;
		int32_t y_pos;
		int32_t x_pos;
		IL2CPP::Array<int32_t>* score;
		float timerset;
		int32_t timer;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_limit;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_dot;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_score;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_topbar;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_topbar2;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_topbar3;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_topbar4;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_evacuation;
		UnityEngine_CoreModule::UnityEngine::Texture2D* tex_arrow_lvl_up;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Texture2D*>* Flags;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* battle_rect;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rect>* proriv_rect;
		Assembly_CSharp::Map* map;
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* c;
		IL2CPP::Array<int32_t>* oldFlagScores;
		IL2CPP::Array<bool>* mig;
		Assembly_CSharp::MODE g_mode;
		void Awake();
		void OnGUI();
		void OnResize();
		void DrawBattle();
		void DrawZombie();
		void DrawText(mscorlib::System::String* text);
		void UpdateScore(int32_t score1, int32_t score2, int32_t score3, int32_t score4, int32_t _timer);
		void SetTimer(int32_t val);
		void DrawCT();
		void DrawPR();
		int32_t DrawScoreCT(int32_t team, int32_t x, int32_t y, int32_t dots);
		void DrawCS();
		void DrawGG();
		void DrawML();
		void DrawFFA();
		void DrawTimer();
		void _ctor();
	};
}

