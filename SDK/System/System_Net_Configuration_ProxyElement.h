#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Net_Configuration_ProxyElement_AutoDetectValues.h"
#include "System_Net_Configuration_ProxyElement_BypassOnLocalValues.h"
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
namespace System::System { struct Uri; };
#include "System_Net_Configuration_ProxyElement_UseSystemDefaultValues.h"

namespace System::System::Net::Configuration
{
	struct ProxyElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Net::Configuration::ProxyElement_AutoDetectValues get_AutoDetect();
		void set_AutoDetect(System::Net::Configuration::ProxyElement_AutoDetectValues value);
		System::Net::Configuration::ProxyElement_BypassOnLocalValues get_BypassOnLocal();
		void set_BypassOnLocal(System::Net::Configuration::ProxyElement_BypassOnLocalValues value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		System::Uri* get_ProxyAddress();
		void set_ProxyAddress(System::Uri* value);
		System::Uri* get_ScriptLocation();
		void set_ScriptLocation(System::Uri* value);
		System::Net::Configuration::ProxyElement_UseSystemDefaultValues get_UseSystemDefault();
		void set_UseSystemDefault(System::Net::Configuration::ProxyElement_UseSystemDefaultValues value);
	};
}

