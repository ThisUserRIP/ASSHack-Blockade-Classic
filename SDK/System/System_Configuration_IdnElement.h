#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_UriIdnScope.h"
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };

namespace System::System::Configuration
{
	struct IdnElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System::UriIdnScope get_Enabled();
		void set_Enabled(System::UriIdnScope value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
	};
}

