#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaSimpleTypeContent.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaSimpleTypeList : System_Xml::System::Xml::Schema::XmlSchemaSimpleTypeContent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlQualifiedName* itemTypeName;
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* itemType;
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* baseItemType;
		System_Xml::System::Xml::XmlQualifiedName* get_ItemTypeName();
		void set_ItemTypeName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_ItemType();
		void set_ItemType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* value);
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_BaseItemType();
		void set_BaseItemType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* value);
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
		void _ctor();
	};
}

