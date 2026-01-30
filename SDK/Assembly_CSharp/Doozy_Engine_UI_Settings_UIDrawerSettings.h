#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::Doozy::Engine::UI::Base { struct NamesDatabase; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Doozy_Engine_Touchy_SimpleSwipe.h"
#include "..\UnityEngine_CoreModule\UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::Doozy::Engine::UI { struct UIDrawer; };

namespace Assembly_CSharp::Doozy::Engine::UI::Settings
{
	struct UIDrawerSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* database;
		Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe CloseDirection;
		UnityEngine_CoreModule::UnityEngine::Vector3 CustomStartAnchoredPosition;
		bool BlockBackButton;
		bool HideOnBackButton;
		bool DetectGestures;
		bool UseCustomStartAnchoredPosition;
		float CloseSpeed;
		float OpenSpeed;
		mscorlib::System::String* RenamePrefix;
		mscorlib::System::String* RenameSuffix;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			Assembly_CSharp::Doozy::Engine::UI::Settings::UIDrawerSettings* s_instance;
			bool BLOCK_BACK_BUTTON_DEFAULT_VALUE;
			bool DETECT_GESTURES_DEFAULT_VALUE;
			bool HIDE_ON_BACK_BUTTON_DEFAULT_VALUE;
			bool USE_CUSTOM_START_ANCHORED_POSITION_DEFAULT_VALUE;
			float CLOSE_SPEED_DEFAULT_VALUE;
			float OPEN_SPEED_DEFAULT_VALUE;
			Assembly_CSharp::Doozy::Engine::Touchy::SimpleSwipe CLOSE_DIRECTION_DEFAULT_VALUE;
			mscorlib::System::String* RENAME_PREFIX_DEFAULT_VALUE;
			mscorlib::System::String* RENAME_SUFFIX_DEFAULT_VALUE;
			UnityEngine_CoreModule::UnityEngine::Vector3 CUSTOM_START_ANCHORED_POSITION_DEFAULT_VALUE;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ResourcesPath();
		static Assembly_CSharp::Doozy::Engine::UI::Settings::UIDrawerSettings* get_Instance();
		static Assembly_CSharp::Doozy::Engine::UI::Base::NamesDatabase* get_Database();
		static void UpdateDatabase();
		void Reset();
		void Reset(bool saveAssets);
		void ResetComponent(Assembly_CSharp::Doozy::Engine::UI::UIDrawer* drawer);
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
		static void _cctor();
	};
}

