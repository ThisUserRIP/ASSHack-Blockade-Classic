#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
#include "System_Net_Configuration_UnicodeDecodingConformance.h"
#include "System_Net_Configuration_UnicodeEncodingConformance.h"

namespace System::System::Net::Configuration
{
	struct WebUtilityElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		System::Net::Configuration::UnicodeDecodingConformance get_UnicodeDecodingConformance();
		void set_UnicodeDecodingConformance(System::Net::Configuration::UnicodeDecodingConformance value);
		System::Net::Configuration::UnicodeEncodingConformance get_UnicodeEncodingConformance();
		void set_UnicodeEncodingConformance(System::Net::Configuration::UnicodeEncodingConformance value);
	};
}

