#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct TweenButton; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioSource; };
namespace UnityEngine_TextRenderingModule::UnityEngine { struct Font; };
namespace UnityEngine_IMGUIModule::UnityEngine { struct GUIStyle; };
#include "GUIGS.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct MainMenu : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::TweenButton* questButton;
		UnityEngine_TextRenderingModule::UnityEngine::Font* MainFont;
		Assembly_CSharp::GUIGS last_state;
		UnityEngine_CoreModule::UnityEngine::Rect r;
		bool button_start_hover;
		bool button_settings_hover;
		bool button_name_hover;
		bool button_save_hover;
		bool button_sound_hover;
		bool button_help_hover;
		bool button_screen_hover;
		bool button_add_hover;
		bool button_exit_hover;
		bool editName;
		bool sound;
		IL2CPP::Array<bool>* menu;
		IL2CPP::Array<bool>* menu_hover;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		UnityEngine_CoreModule::UnityEngine::Vector2 mpos;
		struct StaticFields
		{
			Assembly_CSharp::MainMenu* THIS__;
			UnityEngine_AudioModule::UnityEngine::AudioSource* MainAS;
			UnityEngine_AudioModule::UnityEngine::AudioSource* SoundtrackAS;
			UnityEngine_IMGUIModule::UnityEngine::GUIStyle* MainGS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void myGlobalInit();
		void Start();
		void OnGUI();
		void DrawRules();
		void OpenServerList();
		void DrawButtonBar();
		bool DrawButton(UnityEngine_CoreModule::UnityEngine::Rect r, UnityEngine_CoreModule::UnityEngine::Texture2D* tex, bool a, int32_t id);
		void FixedUpdate();
		void Update();
		void HideAll();
		void ShowAll();
		void SetSound(bool val);
		void _ctor();
	};
}

