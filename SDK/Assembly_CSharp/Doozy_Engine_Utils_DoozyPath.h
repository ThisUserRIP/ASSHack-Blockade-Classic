#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_Utils_DoozyPath_ComponentName.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::Doozy::Engine::Utils
{
	struct DoozyPath : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* ASSETS_PATH;
			mscorlib::System::String* DATA;
			mscorlib::System::String* DATABASE;
			mscorlib::System::String* DOOZY;
			mscorlib::System::String* EDITOR;
			mscorlib::System::String* ENGINE;
			mscorlib::System::String* FONTS;
			mscorlib::System::String* GUI;
			mscorlib::System::String* IMAGES;
			mscorlib::System::String* INTERNAL;
			mscorlib::System::String* NODY;
			mscorlib::System::String* RESOURCES;
			mscorlib::System::String* SETTINGS;
			mscorlib::System::String* SKINS;
			mscorlib::System::String* SOUNDY;
			mscorlib::System::String* THEMES;
			mscorlib::System::String* TEMPLATES;
			mscorlib::System::String* TOUCHY;
			mscorlib::System::String* UI;
			mscorlib::System::String* UIBUTTON;
			mscorlib::System::String* UICANVAS;
			mscorlib::System::String* UIDRAWER;
			mscorlib::System::String* UIPOPUP;
			mscorlib::System::String* UITOGGLE;
			mscorlib::System::String* UIVIEW;
			mscorlib::System::String* UTILS;
			mscorlib::System::String* UIANIMATIONS;
			mscorlib::System::String* HIDE;
			mscorlib::System::String* LOOP;
			mscorlib::System::String* PUNCH;
			mscorlib::System::String* SHOW;
			mscorlib::System::String* STATE;
			mscorlib::System::String* SOUNDY_DATABASE;
			mscorlib::System::String* THEMES_DATABASE;
			mscorlib::System::String* UIBUTTON_DATABASE;
			mscorlib::System::String* UICANVAS_DATABASE;
			mscorlib::System::String* UIDRAWER_DATABASE;
			mscorlib::System::String* UIPOPUP_DATABASE;
			mscorlib::System::String* UIVIEW_DATABASE;
			mscorlib::System::String* DOOZY_PATH;
			mscorlib::System::String* EDITOR_PATH;
			mscorlib::System::String* ENGINE_PATH;
			mscorlib::System::String* EDITOR_FONTS_PATH;
			mscorlib::System::String* EDITOR_GUI_PATH;
			mscorlib::System::String* EDITOR_IMAGES_PATH;
			mscorlib::System::String* EDITOR_INTERNAL_PATH;
			mscorlib::System::String* EDITOR_SETTINGS_PATH;
			mscorlib::System::String* EDITOR_SKINS_PATH;
			mscorlib::System::String* EDITOR_NODY_PATH;
			mscorlib::System::String* EDITOR_NODY_IMAGES_PATH;
			mscorlib::System::String* EDITOR_NODY_SKINS_PATH;
			mscorlib::System::String* EDITOR_NODY_SETTINGS_PATH;
			mscorlib::System::String* EDITOR_NODY_UTILS_PATH;
			mscorlib::System::String* ENGINE_NODY_PATH;
			mscorlib::System::String* ENGINE_NODY_RESOURCES_PATH;
			mscorlib::System::String* ENGINE_SOUNDY_PATH;
			mscorlib::System::String* ENGINE_SOUNDY_RESOURCES_PATH;
			mscorlib::System::String* ENGINE_TOUCHY_PATH;
			mscorlib::System::String* ENGINE_TOUCHY_RESOURCES_PATH;
			mscorlib::System::String* ENGINE_THEMES_PATH;
			mscorlib::System::String* ENGINE_THEMES_RESOURCES_PATH;
			mscorlib::System::String* ENGINE_RESOURCES_PATH;
			mscorlib::System::String* ENGINE_RESOURCES_DATA_PATH;
			mscorlib::System::String* ENGINE_RESOURCES_DATA_SOUNDY_PATH;
			mscorlib::System::String* ENGINE_RESOURCES_DATA_UIBUTTON_PATH;
			mscorlib::System::String* ENGINE_RESOURCES_DATA_UICANVAS_PATH;
			mscorlib::System::String* ENGINE_RESOURCES_DATA_UIDRAWER_PATH;
			mscorlib::System::String* ENGINE_RESOURCES_DATA_UIPOPUP_PATH;
			mscorlib::System::String* ENGINE_RESOURCES_DATA_UIVIEW_PATH;
			mscorlib::System::String* ENGINE_RESOURCES_DATA_THEMES_PATH;
			mscorlib::System::String* ENGINE_UI_PATH;
			mscorlib::System::String* ENGINE_UI_RESOURCES_PATH;
			mscorlib::System::String* UIANIMATIONS_RESOURCES_PATH;
			mscorlib::System::String* HIDE_UIANIMATIONS_RESOURCES_PATH;
			mscorlib::System::String* LOOP_UIANIMATIONS_RESOURCES_PATH;
			mscorlib::System::String* PUNCH_UIANIMATIONS_RESOURCES_PATH;
			mscorlib::System::String* SHOW_UIANIMATIONS_RESOURCES_PATH;
			mscorlib::System::String* STATE_UIANIMATIONS_RESOURCES_PATH;
			mscorlib::System::String* UIBUTTON_PATH;
			mscorlib::System::String* UIBUTTON_RESOURCES_PATH;
			mscorlib::System::String* UICANVAS_PATH;
			mscorlib::System::String* UICANVAS_RESOURCES_PATH;
			mscorlib::System::String* UIDRAWER_PATH;
			mscorlib::System::String* UIDRAWER_RESOURCES_PATH;
			mscorlib::System::String* UIPOPUP_PATH;
			mscorlib::System::String* UIPOPUP_RESOURCES_PATH;
			mscorlib::System::String* UIVIEW_PATH;
			mscorlib::System::String* UIVIEW_RESOURCES_PATH;
			mscorlib::System::String* UITOGGLE_PATH;
			mscorlib::System::String* UITOGGLE_RESOURCES_PATH;
			mscorlib::System::String* ENGINE_UTILS_PATH;
			mscorlib::System::String* s_basePath;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* GetDataPath(Assembly_CSharp::Doozy::Engine::Utils::DoozyPath_ComponentName componentName);
		static mscorlib::System::String* get_BasePath();
		static void CreateMissingFolders(bool silentMode);
		void _ctor();
		static void _cctor();
	};
}

