#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlValidatingReaderImpl.h"
namespace System_Xml::System::Xml { struct XmlValidatingReaderImpl; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct Exception; };
#include "System_Xml_Schema_XmlSeverityType.h"

namespace System_Xml::System::Xml
{
	struct XmlValidatingReaderImpl_ValidationEventHandling : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlValidatingReaderImpl* reader;
		System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler;
		void _ctor(System_Xml::System::Xml::XmlValidatingReaderImpl* reader);
		mscorlib::System::Object* System_Xml_IValidationEventHandling_get_EventHandler();
		void System_Xml_IValidationEventHandling_SendEvent(mscorlib::System::Exception* exception, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		void AddHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* handler);
	};
}

