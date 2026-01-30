#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlReader; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct XmlWriter; };
namespace mscorlib::System { struct String; };
#include "System_Configuration_ConfigurationSaveMode.h"

namespace System_Configuration::System::Configuration
{
	struct ConfigurationElement : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		void DeserializeElement(System_Xml::System::Xml::XmlReader* reader, bool serializeCollectionKey);
		void InitializeDefault();
		bool IsModified();
		void PostDeserialize();
		void Reset(System_Configuration::System::Configuration::ConfigurationElement* parentElement);
		void ResetModified();
		bool SerializeToXmlElement(System_Xml::System::Xml::XmlWriter* writer, mscorlib::System::String* elementName);
		void Unmerge(System_Configuration::System::Configuration::ConfigurationElement* sourceElement, System_Configuration::System::Configuration::ConfigurationElement* parentElement, System_Configuration::System::Configuration::ConfigurationSaveMode saveMode);
	};
}

