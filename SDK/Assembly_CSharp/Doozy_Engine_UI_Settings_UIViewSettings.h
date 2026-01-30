#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct NamesDatabase; };
#include "Doozy_Engine_UI_TargetOrientation.h"
#include "Doozy_Engine_UI_UIViewStartBehavior.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIView; };

namespace Assembly_CSharp::Doozy::Engine::UI::Settings
{
	struct UIViewSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* database;
		Assembly_CSharp::Doozy::Engine::UI::TargetOrientation TargetOrientation;
		Assembly_CSharp::Doozy::Engine::UI::UIViewStartBehavior BehaviorAtStart;
		UnityEngine_CoreModule::UnityEngine::Vector3 CustomStartAnchoredPosition;
		bool DeselectAnyButtonSelectedOnHide;
		bool DeselectAnyButtonSelectedOnShow;
		bool DisableCanvasWhenHidden;
		bool DisableGameObjectWhenHidden;
		bool DisableGraphicRaycasterWhenHidden;
		bool UseCustomStartAnchoredPosition;
		mscorlib::System::String* RenamePrefix;
		mscorlib::System::String* RenameSuffix;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			Assembly_CSharp::Doozy::Engine::UI::Settings::UIViewSettings* s_instance;
			Assembly_CSharp::Doozy::Engine::UI::TargetOrientation TARGET_ORIENTATION_DEFAULT_VALUE;
			Assembly_CSharp::Doozy::Engine::UI::UIViewStartBehavior BEHAVIOUR_AT_START_DEFAULT_VALUE;
			bool DEFAULT_AUTO_HIDE_AFTER_SHOW;
			bool DEFAULT_AUTO_SELECT_BUTTON_AFTER_SHOW;
			bool DESELECT_ANY_BUTTON_SELECTED_ON_HIDE_DEFAULT_VALUE;
			bool DESELECT_ANY_BUTTON_SELECTED_ON_SHOW_DEFAULT_VALUE;
			bool DISABLE_CANVAS_WHEN_HIDDEN_DEFAULT_VALUE;
			bool DISABLE_GAME_OBJECT_WHEN_HIDDEN_DEFAULT_VALUE;
			bool DISABLE_GRAPHIC_RAYCASTER_WHEN_HIDDEN_DEFAULT_VALUE;
			bool USE_CUSTOM_START_ANCHORED_POSITION_DEFAULT_VALUE;
			float DEFAULT_AUTO_HIDE_AFTER_SHOW_DELAY;
			float DISABLE_WHEN_HIDDEN_TIME_BUFFER;
			mscorlib::System::String* RENAME_PREFIX_DEFAULT_VALUE;
			mscorlib::System::String* RENAME_SUFFIX_DEFAULT_VALUE;
			UnityEngine_CoreModule::UnityEngine::Vector3 CUSTOM_START_ANCHORED_POSITION_DEFAULT_VALUE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ResourcesPath();
		static Assembly_CSharp::Doozy::Engine::UI::Settings::UIViewSettings* get_Instance();
		static Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* get_Database();
		static void UpdateDatabase();
		void Reset();
		void Reset(bool saveAssets);
		void ResetComponent(Assembly_CSharp::Doozy::Engine::UI::UIView* view);
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
		static void _cctor();
	};
}

