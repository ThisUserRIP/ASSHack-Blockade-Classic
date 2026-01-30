#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "System_Configuration_SettingsSerializeAs.h"
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
namespace System::System::Configuration { struct SettingValueElement; };

namespace System::System::Configuration
{
	struct SettingElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(mscorlib::System::String* name, System::Configuration::SettingsSerializeAs serializeAs);
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		System::Configuration::SettingsSerializeAs get_SerializeAs();
		void set_SerializeAs(System::Configuration::SettingsSerializeAs value);
		System::Configuration::SettingValueElement* get_Value();
		void set_Value(System::Configuration::SettingValueElement* value);
	};
}

