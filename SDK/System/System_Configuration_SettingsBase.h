#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Configuration { struct SettingsContext; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace System::System::Configuration { struct SettingsPropertyCollection; };
namespace System::System::Configuration { struct SettingsPropertyValueCollection; };
namespace System::System::Configuration { struct SettingsProviderCollection; };

namespace System::System::Configuration
{
	struct SettingsBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Configuration::SettingsContext* get_Context();
		bool get_IsSynchronized();
		mscorlib::System::Object* get_Item(mscorlib::System::String* propertyName);
		void set_Item(mscorlib::System::String* propertyName, mscorlib::System::Object* value);
		System::Configuration::SettingsPropertyCollection* get_Properties();
		System::Configuration::SettingsPropertyValueCollection* get_PropertyValues();
		System::Configuration::SettingsProviderCollection* get_Providers();
		void Initialize(System::Configuration::SettingsContext* context, System::Configuration::SettingsPropertyCollection* properties, System::Configuration::SettingsProviderCollection* providers);
		void Save();
		static System::Configuration::SettingsBase* Synchronized(System::Configuration::SettingsBase* settingsBase);
	};
}

