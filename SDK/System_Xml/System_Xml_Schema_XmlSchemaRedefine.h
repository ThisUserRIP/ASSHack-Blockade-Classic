#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaExternal.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnnotation; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaRedefine : System_Xml::System::Xml::Schema::XmlSchemaExternal
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* items;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* types;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* groups;
		void _ctor();
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeGroups();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_SchemaTypes();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_Groups();
		void AddAnnotation(System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation);
	};
}

