#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlReader; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
namespace System_Configuration::System::Configuration { struct ConfigurationElement; };
#include "System_Configuration_ConfigurationSaveMode.h"

namespace System_Configuration::System::Configuration
{
	struct ConfigurationSection : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void DeserializeSection(System_Xml::System::Xml::XmlReader* reader);
		bool IsModified();
		void ResetModified();
		mscorlib::System::String* SerializeSection(System_Configuration::System::Configuration::ConfigurationElement* parentElement, mscorlib::System::String* name, System_Configuration::System::Configuration::ConfigurationSaveMode saveMode);
	};
}

