#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationSection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System::Net::Configuration { struct ConnectionManagementElementCollection; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };

namespace System::System::Net::Configuration
{
	struct ConnectionManagementSection : System_Configuration::System::Configuration::ConfigurationSection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::Net::Configuration::ConnectionManagementElementCollection* get_ConnectionManagement();
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
	};
}

