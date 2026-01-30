#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopupDatabase; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Doozy_Engine_UI_PopupDisplayOn.h"
#include "Doozy_Engine_UI_VisibilityState.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIPopup; };

namespace Assembly_CSharp::Doozy::Engine::UI::Settings
{
	struct UIPopupSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::UIPopupDatabase* database;
		Assembly_CSharp::Doozy::Engine::UI::PopupDisplayOn DisplayTarget;
		bool AddToPopupQueue;
		bool AutoHideAfterShow;
		bool AutoSelectButtonAfterShow;
		bool BlockBackButton;
		bool CustomCanvasName;
		bool DestroyAfterHide;
		bool HideOnAnyButton;
		bool HideOnBackButton;
		bool HideOnClickAnywhere;
		bool HideOnClickContainer;
		bool HideOnClickOverlay;
		bool UpdateHideProgressorOnShow;
		bool UpdateShowProgressorOnHide;
		bool UseOverlay;
		float AutoHideAfterShowDelay;
		mscorlib::System::String* CanvasName;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			Assembly_CSharp::Doozy::Engine::UI::Settings::UIPopupSettings* s_instance;
			bool ADD_TO_POPUP_QUEUE_DEFAULT_VALUE;
			bool AUTO_HIDE_AFTER_SHOW_DEFAULT_VALUE;
			bool AUTO_SELECT_BUTTON_AFTER_SHOW_DEFAULT_VALUE;
			bool BLOCK_BACK_BUTTON_DEFAULT_VALUE;
			bool CUSTOM_CANVAS_NAME_DEFAULT_VALUE;
			bool DESTROY_AFTER_HIDE_DEFAULT_VALUE;
			bool HIDE_ON_ANY_BUTTON_DEFAULT_VALUE;
			bool HIDE_ON_BACK_BUTTON_DEFAULT_VALUE;
			bool HIDE_ON_CLICK_ANYWHERE_DEFAULT_VALUE;
			bool HIDE_ON_CLICK_CONTAINER_DEFAULT_VALUE;
			bool HIDE_ON_CLICK_OVERLAY_DEFAULT_VALUE;
			bool UPDATE_HIDE_PROGRESSOR_ON_SHOW_DEFAULT_VALUE;
			bool UPDATE_SHOW_PROGRESSOR_ON_HIDE_DEFAULT_VALUE;
			bool USE_OVERLAY_DEFAULT_VALUE;
			float AUTO_HIDE_AFTER_SHOW_DELAY_DEFAULT_VALUE;
			float DISABLE_WHEN_HIDDEN_TIME_BUFFER;
			Assembly_CSharp::Doozy::Engine::UI::PopupDisplayOn DISPLAY_ON_DEFAULT_VALUE;
			Assembly_CSharp::Doozy::Engine::UI::VisibilityState VISIBILITY_DEFAULT_VALUE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ResourcesPath();
		static Assembly_CSharp::Doozy::Engine::UI::Settings::UIPopupSettings* get_Instance();
		static Assembly_CSharp::Doozy::Engine::UI::UIPopupDatabase* get_Database();
		static void UpdateDatabase();
		void Reset();
		void Reset(bool saveAssets);
		void ResetComponent(Assembly_CSharp::Doozy::Engine::UI::UIPopup* popup);
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
	};
}

