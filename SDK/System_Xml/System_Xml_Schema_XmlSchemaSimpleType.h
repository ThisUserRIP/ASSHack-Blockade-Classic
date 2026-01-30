#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleTypeContent; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaSimpleType : System_Xml::System::Xml::Schema::XmlSchemaType
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeContent* content;
		void _ctor();
		System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeContent* get_Content();
		void set_Content(System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeContent* value);
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
	};
}

