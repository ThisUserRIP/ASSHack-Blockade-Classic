#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct NamesDatabase; };
#include "Doozy_Engine_UI_SingleClickMode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Doozy_Engine_UI_Input_InputMode.h"
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIButton; };

namespace Assembly_CSharp::Doozy::Engine::UI::Settings
{
	struct UIButtonSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* database;
		Assembly_CSharp::Doozy::Engine::UI::Input::InputMode InputMode;
		UnityEngine_CoreModule::UnityEngine::KeyCode KeyCode;
		UnityEngine_CoreModule::UnityEngine::KeyCode KeyCodeAlt;
		Assembly_CSharp::Doozy::Engine::UI::SingleClickMode ClickMode;
		bool AllowMultipleClicks;
		bool DeselectButtonAfterClick;
		bool EnableAlternateInputs;
		bool ShowNormalLoopAnimation;
		bool ShowOnButtonDeselected;
		bool ShowOnButtonSelected;
		bool ShowOnClick;
		bool ShowOnDoubleClick;
		bool ShowOnLongClick;
		bool ShowOnRightClick;
		bool ShowOnPointerDown;
		bool ShowOnPointerEnter;
		bool ShowOnPointerExit;
		bool ShowOnPointerUp;
		bool ShowSelectedLoopAnimation;
		float DisableButtonBetweenClicksInterval;
		mscorlib::System::String* RenamePrefix;
		mscorlib::System::String* RenameSuffix;
		mscorlib::System::String* VirtualButtonName;
		mscorlib::System::String* VirtualButtonNameAlt;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			Assembly_CSharp::Doozy::Engine::UI::Settings::UIButtonSettings* s_instance;
			Assembly_CSharp::Doozy::Engine::UI::SingleClickMode DEFAULT_SINGLE_CLICK_MODE;
			bool DEFAULT_ALLOW_MULTIPLE_CLICKS;
			bool DEFAULT_DESELECT_BUTTON_AFTER_CLICK;
			float BETWEEN_CLICKS_DISABLE_INTERVAL;
			float DEFAULT_BUTTON_HEIGHT;
			float DEFAULT_BUTTON_WIDTH;
			float DOUBLE_CLICK_REGISTER_INTERVAL;
			float LONG_CLICK_REGISTER_INTERVAL;
			mscorlib::System::String* DEFAULT_RENAME_PREFIX;
			mscorlib::System::String* DEFAULT_RENAME_SUFFIX;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ResourcesPath();
		static Assembly_CSharp::Doozy::Engine::UI::Settings::UIButtonSettings* get_Instance();
		static Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* get_Database();
		static void UpdateDatabase();
		void Reset();
		void Reset(bool saveAssets);
		void ResetComponent(Assembly_CSharp::Doozy::Engine::UI::UIButton* button);
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
	};
}

