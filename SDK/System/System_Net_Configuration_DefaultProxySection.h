#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationSection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net::Configuration { struct BypassElementCollection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::Net::Configuration { struct ModuleElement; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
namespace System::System::Net::Configuration { struct ProxyElement; };
namespace System_Configuration::System::Configuration { struct ConfigurationElement; };

namespace System::System::Net::Configuration
{
	struct DefaultProxySection : System_Configuration::System::Configuration::ConfigurationSection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Net::Configuration::BypassElementCollection* get_BypassList();
		bool get_Enabled();
		void set_Enabled(bool value);
		System::Net::Configuration::ModuleElement* get_Module();
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		System::Net::Configuration::ProxyElement* get_Proxy();
		bool get_UseDefaultCredentials();
		void set_UseDefaultCredentials(bool value);
		void PostDeserialize();
		void Reset(System_Configuration::System::Configuration::ConfigurationElement* parentElement);
	};
}

