#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Configuration_ConfigurationSection.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
namespace System_Xml::System::Xml { struct XmlReader; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Configuration::System::Configuration { struct ConfigurationElement; };
namespace mscorlib::System { struct String; };
#include "System_Configuration_ConfigurationSaveMode.h"

namespace System_Configuration::System::Configuration
{
	struct IgnoreSection : System_Configuration::System::Configuration::ConfigurationSection
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		void DeserializeSection(System_Xml::System::Xml::XmlReader* xmlReader);
		bool IsModified();
		void Reset(System_Configuration::System::Configuration::ConfigurationElement* parentSection);
		void ResetModified();
		mscorlib::System::String* SerializeSection(System_Configuration::System::Configuration::ConfigurationElement* parentSection, mscorlib::System::String* name, System_Configuration::System::Configuration::ConfigurationSaveMode saveMode);
	};
}

