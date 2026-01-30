#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Configuration_SettingsProvider.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System::System::Configuration { struct SettingsPropertyValue; };
namespace System::System::Configuration { struct SettingsContext; };
namespace System::System::Configuration { struct SettingsProperty; };
namespace System::System::Configuration { struct SettingsPropertyValueCollection; };
namespace System::System::Configuration { struct SettingsPropertyCollection; };
namespace System::System::Collections::Specialized { struct NameValueCollection; };

namespace System::System::Configuration
{
	struct LocalFileSettingsProvider : System::Configuration::SettingsProvider
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::String* get_ApplicationName();
		void set_ApplicationName(mscorlib::System::String* value);
		System::Configuration::SettingsPropertyValue* GetPreviousVersion(System::Configuration::SettingsContext* context, System::Configuration::SettingsProperty* property);
		System::Configuration::SettingsPropertyValueCollection* GetPropertyValues(System::Configuration::SettingsContext* context, System::Configuration::SettingsPropertyCollection* properties);
		void Initialize(mscorlib::System::String* name, System::Collections::Specialized::NameValueCollection* values);
		void Reset(System::Configuration::SettingsContext* context);
		void SetPropertyValues(System::Configuration::SettingsContext* context, System::Configuration::SettingsPropertyValueCollection* values);
		void Upgrade(System::Configuration::SettingsContext* context, System::Configuration::SettingsPropertyCollection* properties);
	};
}

