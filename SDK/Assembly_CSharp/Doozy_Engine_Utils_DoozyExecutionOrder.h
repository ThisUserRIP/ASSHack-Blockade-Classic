#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct DoozyExecutionOrder : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t COMPONENT;
			int32_t MANAGER;
			int32_t BACK_BUTTON;
			int32_t COLOR_TARGET_IMAGE;
			int32_t COLOR_TARGET_PARTICLE_SYSTEM;
			int32_t COLOR_TARGET_RAW_IMAGE;
			int32_t COLOR_TARGET_SPRITE_RENDERER;
			int32_t COLOR_TARGET_TEXT;
			int32_t COLOR_TARGET_TEXTMESHPRO;
			int32_t FONT_TARGET_TEXT;
			int32_t FONT_TARGET_TEXTMESHPRO;
			int32_t GAME_EVENT_LISTENER;
			int32_t GAME_EVENT_MANAGER;
			int32_t GESTURE_LISTENER;
			int32_t GRAPH_CONTROLLER;
			int32_t KEY_TO_ACTION;
			int32_t KEY_TO_GAME_EVENT;
			int32_t ORIENTATION_DETECTOR;
			int32_t PROGRESS_TARGET_ACTION;
			int32_t PROGRESS_TARGET_ANIMATOR;
			int32_t PROGRESS_TARGET_AUDIOMIXERGROUP;
			int32_t PROGRESS_TARGET_IMAGE;
			int32_t PROGRESS_TARGET_TEXT;
			int32_t PROGRESS_TARGET_TEXTMESHPRO;
			int32_t PROGRESSOR;
			int32_t PROGRESSOR_GROUP;
			int32_t RADIAL_LAYOUT;
			int32_t SCENE_DIRECTOR;
			int32_t SCENE_LOADER;
			int32_t SOUNDY_CONTROLLER;
			int32_t SOUNDY_MANAGER;
			int32_t SOUNDY_POOLER;
			int32_t SPRITE_TARGET_IMAGE;
			int32_t SPRITE_TARGET_SPRITE_RENDERER;
			int32_t TEXTURE_TARGET_RAW_IMAGE;
			int32_t THEME_MANAGER;
			int32_t TOUCH_DETECTOR;
			int32_t UIBUTTON;
			int32_t UIBUTTON_LISTENER;
			int32_t UICANVAS;
			int32_t UIDRAWER;
			int32_t UIDRAWER_LISTENER;
			int32_t UIIMAGE;
			int32_t UIPOPUP;
			int32_t UIPOPUP_MANAGER;
			int32_t UITOGGLE;
			int32_t UIVIEW;
			int32_t UIVIEW_LISTENER;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
	};
}

