#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationSectionGroup.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net::Configuration { struct AuthenticationModulesSection; };
namespace System::System::Net::Configuration { struct ConnectionManagementSection; };
namespace System::System::Net::Configuration { struct DefaultProxySection; };
namespace System::System::Net::Configuration { struct MailSettingsSectionGroup; };
namespace System::System::Net::Configuration { struct RequestCachingSection; };
namespace System::System::Net::Configuration { struct SettingsSection; };
namespace System::System::Net::Configuration { struct WebRequestModulesSection; };
namespace System_Configuration::System::Configuration { struct Configuration; };

namespace System::System::Net::Configuration
{
	struct NetSectionGroup : System_Configuration::System::Configuration::ConfigurationSectionGroup
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Net::Configuration::AuthenticationModulesSection* get_AuthenticationModules();
		System::Net::Configuration::ConnectionManagementSection* get_ConnectionManagement();
		System::Net::Configuration::DefaultProxySection* get_DefaultProxy();
		System::Net::Configuration::MailSettingsSectionGroup* get_MailSettings();
		System::Net::Configuration::RequestCachingSection* get_RequestCaching();
		System::Net::Configuration::SettingsSection* get_Settings();
		System::Net::Configuration::WebRequestModulesSection* get_WebRequestModules();
		static System::Net::Configuration::NetSectionGroup* GetSectionGroup(System_Configuration::System::Configuration::Configuration* config);
	};
}

