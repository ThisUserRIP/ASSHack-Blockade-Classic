#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_TimeSpan.h"
namespace mscorlib::System { struct TimeSpan; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };

namespace System::System::Net::Configuration
{
	struct WebProxyScriptElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		mscorlib::System::TimeSpan get_DownloadTimeout();
		void set_DownloadTimeout(mscorlib::System::TimeSpan value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		void PostDeserialize();
	};
}

