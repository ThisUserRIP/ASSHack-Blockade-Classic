#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Facebook_Unity_Settings::Facebook::Unity::Settings { struct FacebookSettings_OnChangeCallback; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facebook_Unity_Settings::Facebook::Unity::Settings { struct FacebookSettings_UrlSchemes; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facebook_Unity_Settings::Facebook::Unity::Settings
{
	struct FacebookSettings : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t selectedAppIndex;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* clientTokens;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* appIds;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* appLabels;
		bool cookie;
		bool logging;
		bool status;
		bool xfbml;
		bool frictionlessRequests;
		mscorlib::System::String* androidKeystorePath;
		mscorlib::System::String* iosURLSuffix;
		mscorlib::System::Collections::Generic::List_1<Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_UrlSchemes>* appLinkSchemes;
		mscorlib::System::String* uploadAccessToken;
		bool autoLogAppEventsEnabled;
		bool advertiserIDCollectionEnabled;
		struct StaticFields
		{
			mscorlib::System::String* FacebookSettingsAssetName;
			mscorlib::System::String* FacebookSettingsPath;
			mscorlib::System::String* FacebookSettingsAssetExtension;
			mscorlib::System::Collections::Generic::List_1<Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_OnChangeCallback>* onChangeCallbacks;
			Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings* instance;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static int32_t get_SelectedAppIndex();
		static void set_SelectedAppIndex(int32_t value);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_AppIds();
		static void set_AppIds(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_AppLabels();
		static void set_AppLabels(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
		static mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* get_ClientTokens();
		static void set_ClientTokens(mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* value);
		static mscorlib::System::String* get_AppId();
		static mscorlib::System::String* get_ClientToken();
		static bool get_IsValidAppId();
		static bool get_Cookie();
		static void set_Cookie(bool value);
		static bool get_Logging();
		static void set_Logging(bool value);
		static bool get_Status();
		static void set_Status(bool value);
		static bool get_Xfbml();
		static void set_Xfbml(bool value);
		static mscorlib::System::String* get_AndroidKeystorePath();
		static void set_AndroidKeystorePath(mscorlib::System::String* value);
		static mscorlib::System::String* get_IosURLSuffix();
		static void set_IosURLSuffix(mscorlib::System::String* value);
		static mscorlib::System::String* get_ChannelUrl();
		static bool get_FrictionlessRequests();
		static void set_FrictionlessRequests(bool value);
		static mscorlib::System::Collections::Generic::List_1<Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_UrlSchemes>* get_AppLinkSchemes();
		static void set_AppLinkSchemes(mscorlib::System::Collections::Generic::List_1<Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_UrlSchemes>* value);
		static mscorlib::System::String* get_UploadAccessToken();
		static void set_UploadAccessToken(mscorlib::System::String* value);
		static bool get_AutoLogAppEventsEnabled();
		static void set_AutoLogAppEventsEnabled(bool value);
		static bool get_AdvertiserIDCollectionEnabled();
		static void set_AdvertiserIDCollectionEnabled(bool value);
		static Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings* get_Instance();
		static Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings* get_NullableInstance();
		static void RegisterChangeEventCallback(Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_OnChangeCallback* callback);
		static void UnregisterChangeEventCallback(Facebook_Unity_Settings::Facebook::Unity::Settings::FacebookSettings_OnChangeCallback* callback);
		static void SettingsChanged();
		void _ctor();
		static void _cctor();
	};
}

