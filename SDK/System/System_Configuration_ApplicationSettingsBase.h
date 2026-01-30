#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Configuration_SettingsBase.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::ComponentModel { struct IComponent; };
namespace mscorlib::System { struct String; };
namespace System::System::Configuration { struct SettingsContext; };
namespace mscorlib::System { struct Object; };
namespace System::System::Configuration { struct SettingsPropertyCollection; };
namespace System::System::Configuration { struct SettingsPropertyValueCollection; };
namespace System::System::Configuration { struct SettingsProviderCollection; };
namespace System::System::ComponentModel { struct PropertyChangedEventHandler; };
namespace System::System::Configuration { struct SettingChangingEventHandler; };
namespace System::System::Configuration { struct SettingsLoadedEventHandler; };
namespace System::System::Configuration { struct SettingsSavingEventHandler; };
namespace System::System::ComponentModel { struct PropertyChangedEventArgs; };
namespace System::System::Configuration { struct SettingChangingEventArgs; };
namespace System::System::Configuration { struct SettingsLoadedEventArgs; };
namespace System::System::ComponentModel { struct CancelEventArgs; };

namespace System::System::Configuration
{
	struct ApplicationSettingsBase : System::Configuration::SettingsBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(System::ComponentModel::IComponent* owner);
		void _ctor(System::ComponentModel::IComponent* owner, mscorlib::System::String* settingsKey);
		void _ctor(mscorlib::System::String* settingsKey);
		System::Configuration::SettingsContext* get_Context();
		mscorlib::System::Object* get_Item(mscorlib::System::String* propertyName);
		void set_Item(mscorlib::System::String* propertyName, mscorlib::System::Object* value);
		System::Configuration::SettingsPropertyCollection* get_Properties();
		System::Configuration::SettingsPropertyValueCollection* get_PropertyValues();
		System::Configuration::SettingsProviderCollection* get_Providers();
		mscorlib::System::String* get_SettingsKey();
		void set_SettingsKey(mscorlib::System::String* value);
		void add_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler* value);
		void remove_PropertyChanged(System::ComponentModel::PropertyChangedEventHandler* value);
		void add_SettingChanging(System::Configuration::SettingChangingEventHandler* value);
		void remove_SettingChanging(System::Configuration::SettingChangingEventHandler* value);
		void add_SettingsLoaded(System::Configuration::SettingsLoadedEventHandler* value);
		void remove_SettingsLoaded(System::Configuration::SettingsLoadedEventHandler* value);
		void add_SettingsSaving(System::Configuration::SettingsSavingEventHandler* value);
		void remove_SettingsSaving(System::Configuration::SettingsSavingEventHandler* value);
		mscorlib::System::Object* GetPreviousVersion(mscorlib::System::String* propertyName);
		void OnPropertyChanged(mscorlib::System::Object* sender, System::ComponentModel::PropertyChangedEventArgs* e);
		void OnSettingChanging(mscorlib::System::Object* sender, System::Configuration::SettingChangingEventArgs* e);
		void OnSettingsLoaded(mscorlib::System::Object* sender, System::Configuration::SettingsLoadedEventArgs* e);
		void OnSettingsSaving(mscorlib::System::Object* sender, System::ComponentModel::CancelEventArgs* e);
		void Reload();
		void Reset();
		void Save();
		void Upgrade();
	};
}

