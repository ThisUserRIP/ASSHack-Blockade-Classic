#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaObjectTable.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaObjectTable_XmlSchemaObjectEntry
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* qname;
		System_Xml::System::Xml::Schema::XmlSchemaObject* xso;
		void _ctor(System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::XmlSchemaObject* value);
	};
}

