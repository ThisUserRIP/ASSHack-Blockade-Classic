#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_Provider_ProviderBase.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System::System::Configuration { struct SettingsPropertyValueCollection; };
namespace System::System::Configuration { struct SettingsContext; };
namespace System::System::Configuration { struct SettingsPropertyCollection; };

namespace System::System::Configuration
{
	struct SettingsProvider : System_Configuration::System::Configuration::Provider::ProviderBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::String* get_ApplicationName();
		void set_ApplicationName(mscorlib::System::String* value);
		System::Configuration::SettingsPropertyValueCollection* GetPropertyValues(System::Configuration::SettingsContext* context, System::Configuration::SettingsPropertyCollection* collection);
		void SetPropertyValues(System::Configuration::SettingsContext* context, System::Configuration::SettingsPropertyValueCollection* collection);
	};
}

