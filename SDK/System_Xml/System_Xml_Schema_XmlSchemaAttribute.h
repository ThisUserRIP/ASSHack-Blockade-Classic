#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaAnnotated.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_Schema_XmlSchemaForm.h"
#include "System_Xml_Schema_XmlSchemaUse.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaAttribute : System_Xml::System::Xml::Schema::XmlSchemaAnnotated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* defaultValue;
		mscorlib::System::String* fixedValue;
		mscorlib::System::String* name;
		System_Xml::System::Xml::Schema::XmlSchemaForm form;
		System_Xml::System::Xml::Schema::XmlSchemaUse use;
		System_Xml::System::Xml::XmlQualifiedName* refName;
		System_Xml::System::Xml::XmlQualifiedName* typeName;
		System_Xml::System::Xml::XmlQualifiedName* qualifiedName;
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* type;
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* attributeType;
		System_Xml::System::Xml::Schema::SchemaAttDef* attDef;
		mscorlib::System::String* get_DefaultValue();
		void set_DefaultValue(mscorlib::System::String* value);
		mscorlib::System::String* get_FixedValue();
		void set_FixedValue(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaForm get_Form();
		void set_Form(System_Xml::System::Xml::Schema::XmlSchemaForm value);
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		System_Xml::System::Xml::XmlQualifiedName* get_RefName();
		void set_RefName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::XmlQualifiedName* get_SchemaTypeName();
		void set_SchemaTypeName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_SchemaType();
		void set_SchemaType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* value);
		System_Xml::System::Xml::Schema::XmlSchemaUse get_Use();
		void set_Use(System_Xml::System::Xml::Schema::XmlSchemaUse value);
		System_Xml::System::Xml::XmlQualifiedName* get_QualifiedName();
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_AttributeSchemaType();
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();
		void SetQualifiedName(System_Xml::System::Xml::XmlQualifiedName* value);
		void SetAttributeType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* value);
		System_Xml::System::Xml::Schema::SchemaAttDef* get_AttDef();
		void set_AttDef(System_Xml::System::Xml::Schema::SchemaAttDef* value);
		mscorlib::System::String* get_NameAttribute();
		void set_NameAttribute(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
		void _ctor();
	};
}

