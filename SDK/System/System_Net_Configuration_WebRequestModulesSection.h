#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationSection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
namespace System::System::Net::Configuration { struct WebRequestModuleElementCollection; };

namespace System::System::Net::Configuration
{
	struct WebRequestModulesSection : System_Configuration::System::Configuration::ConfigurationSection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		System::Net::Configuration::WebRequestModuleElementCollection* get_WebRequestModules();
		void InitializeDefault();
		void PostDeserialize();
	};
}

