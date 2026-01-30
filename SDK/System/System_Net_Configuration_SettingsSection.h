#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationSection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net::Configuration { struct HttpListenerElement; };
namespace System::System::Net::Configuration { struct HttpWebRequestElement; };
namespace System::System::Net::Configuration { struct Ipv6Element; };
namespace System::System::Net::Configuration { struct PerformanceCountersElement; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
namespace System::System::Net::Configuration { struct ServicePointManagerElement; };
namespace System::System::Net::Configuration { struct SocketElement; };
namespace System::System::Net::Configuration { struct WebProxyScriptElement; };
namespace System::System::Net::Configuration { struct WebUtilityElement; };

namespace System::System::Net::Configuration
{
	struct SettingsSection : System_Configuration::System::Configuration::ConfigurationSection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Net::Configuration::HttpListenerElement* get_HttpListener();
		System::Net::Configuration::HttpWebRequestElement* get_HttpWebRequest();
		System::Net::Configuration::Ipv6Element* get_Ipv6();
		System::Net::Configuration::PerformanceCountersElement* get_PerformanceCounters();
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		System::Net::Configuration::ServicePointManagerElement* get_ServicePointManager();
		System::Net::Configuration::SocketElement* get_Socket();
		System::Net::Configuration::WebProxyScriptElement* get_WebProxyScript();
		System::Net::Configuration::WebUtilityElement* get_WebUtility();
	};
}

