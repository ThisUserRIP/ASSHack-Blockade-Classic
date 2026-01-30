#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaSimpleTypeContent.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaSimpleTypeRestriction : System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeContent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* baseTypeName;
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* baseType;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* facets;
		System_Xml::System::Xml::XmlQualifiedName* get_BaseTypeName();
		void set_BaseTypeName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_BaseType();
		void set_BaseType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Facets();
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
		void _ctor();
	};
}

