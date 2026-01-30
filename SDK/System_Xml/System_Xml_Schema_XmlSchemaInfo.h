#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
#include "System_Xml_Schema_XmlSchemaValidity.h"
#include "System_Xml_Schema_XmlSchemaContentType.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool isDefault;
		bool isNil;
		System_Xml::System::Xml::Schema::XmlSchemaElement* schemaElement;
		System_Xml::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute;
		System_Xml::System::Xml::Schema::XmlSchemaType* schemaType;
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* memberType;
		System_Xml::System::Xml::Schema::XmlSchemaValidity validity;
		System_Xml::System::Xml::Schema::XmlSchemaContentType contentType;
		void _ctor();
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaValidity validity);
		System_Xml::System::Xml::Schema::XmlSchemaValidity get_Validity();
		void set_Validity(System_Xml::System::Xml::Schema::XmlSchemaValidity value);
		bool get_IsDefault();
		void set_IsDefault(bool value);
		bool get_IsNil();
		void set_IsNil(bool value);
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();
		void set_MemberType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* value);
		System_Xml::System::Xml::Schema::XmlSchemaType* get_SchemaType();
		void set_SchemaType(System_Xml::System::Xml::Schema::XmlSchemaType* value);
		System_Xml::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();
		void set_SchemaElement(System_Xml::System::Xml::Schema::XmlSchemaElement* value);
		System_Xml::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();
		void set_SchemaAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* value);
		System_Xml::System::Xml::Schema::XmlSchemaType* get_XmlType();
		bool get_HasDefaultValue();
		bool get_IsUnionType();
		void Clear();
	};
}

