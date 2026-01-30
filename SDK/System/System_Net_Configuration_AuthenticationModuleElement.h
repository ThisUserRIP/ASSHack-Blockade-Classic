#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };

namespace System::System::Net::Configuration
{
	struct AuthenticationModuleElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		void _ctor(mscorlib::System::String* typeName);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		mscorlib::System::String* get_Type();
		void set_Type(mscorlib::System::String* value);
	};
}

