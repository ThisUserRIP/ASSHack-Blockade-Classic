#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
#include "Doozy_Engine_Language.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Doozy::Engine::Settings
{
	struct DoozySettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Doozy::Engine::Language SelectedLanguage;
		bool AutoDisableUIInteractions;
		bool DebugBackButton;
		bool DebugGameEventListener;
		bool DebugGameEventManager;
		bool DebugGestureListener;
		bool DebugGraphController;
		bool DebugKeyToAction;
		bool DebugKeyToGameEvent;
		bool DebugOrientationDetector;
		bool DebugProgressor;
		bool DebugProgressorGroup;
		bool DebugSceneDirector;
		bool DebugSceneLoader;
		bool DebugSoundyController;
		bool DebugSoundyManager;
		bool DebugSoundyPooler;
		bool DebugTouchDetector;
		bool DebugUIButton;
		bool DebugUIButtonListener;
		bool DebugUICanvas;
		bool DebugUIDrawer;
		bool DebugUIDrawerListener;
		bool DebugUIPopup;
		bool DebugUIPopupManager;
		bool DebugUIToggle;
		bool DebugUIView;
		bool DebugUIViewListener;
		bool DOTweenDetected;
		bool DoozyUIVersion3Detected;
		bool DoozyUIVersion2Detected;
		bool MasterAudioDetected;
		bool PlaymakerDetected;
		bool TextMeshProDetected;
		bool IgnoreUnityTimescale;
		bool SpeedBasedAnimations;
		bool UseBackButton;
		bool UseMasterAudio;
		bool UseOrientationDetector;
		bool UsePlaymaker;
		bool UseTextMeshPro;
		bool AssetDatabaseSaveAssetsNeeded;
		bool AssetDatabaseRefreshNeeded;
		struct StaticFields
		{
			mscorlib::System::String* FILE_NAME;
			Assembly_CSharp::Doozy::Engine::Settings::DoozySettings* s_instance;
			mscorlib::System::String* MAILTO;
			mscorlib::System::String* SUPPORT_EMAIL_ADDRESS;
			mscorlib::System::String* LINK_DISCORD_INVITE;
			mscorlib::System::String* LINK_FACEBOOK;
			mscorlib::System::String* LINK_TWITTER;
			mscorlib::System::String* LINK_WEBSITE_DOOZYUI;
			mscorlib::System::String* LINK_WEBSITE_DOOZYUI_DOCUMENTATION;
			mscorlib::System::String* LINK_WEBSITE_DOOZYUI_DOCUMENTATION_GETTING_STARTED;
			mscorlib::System::String* LINK_WEBSITE_DOOZYUI_FAQ;
			mscorlib::System::String* LINK_WEBSITE_DOOZYUI_LEARN;
			mscorlib::System::String* LINK_WEBSITE_DOOZYUI_SUPPORT_REQUEST;
			mscorlib::System::String* LINK_WEBSITE_DOTWEEN;
			mscorlib::System::String* LINK_WEBSITE_MICROSOFT_DOT_NET_API;
			mscorlib::System::String* LINK_WEBSITE_UNITY_MANUAL;
			mscorlib::System::String* LINK_WEBSITE_UNITY_SCRIPTING_API;
			mscorlib::System::String* LINK_YOUTUBE_CHANNEL;
			mscorlib::System::String* LINK_YOUTUBE_VIDEOS;
			mscorlib::System::String* LINK_ZENDESK_TICKET;
			mscorlib::System::String* DOOZYUI_ABOUT;
			mscorlib::System::String* SOUNDY_VERSION;
			mscorlib::System::String* SOUNDY_ABOUT;
			mscorlib::System::String* TOUCHY_VERSION;
			mscorlib::System::String* TOUCHY_ABOUT;
			mscorlib::System::String* NODY_VERSION;
			mscorlib::System::String* NODY_ABOUT;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static mscorlib::System::String* get_ResourcesPath();
		static Assembly_CSharp::Doozy::Engine::Settings::DoozySettings* get_Instance();
		void SaveAndRefreshAssetDatabase();
		void SetDirty(bool saveAssets);
		void UndoRecord(mscorlib::System::String* undoMessage);
		void _ctor();
	};
}

