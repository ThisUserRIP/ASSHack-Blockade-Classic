#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_EventArgs.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaException; };
#include "System_Xml_Schema_XmlSeverityType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct ValidationEventArgs : mscorlib::System::EventArgs
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaException* ex;
		System_Xml::System::Xml::Schema::XmlSeverityType severity;
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaException* ex);
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaException* ex, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		System_Xml::System::Xml::Schema::XmlSeverityType get_Severity();
		System_Xml::System::Xml::Schema::XmlSchemaException* get_Exception();
	};
}

