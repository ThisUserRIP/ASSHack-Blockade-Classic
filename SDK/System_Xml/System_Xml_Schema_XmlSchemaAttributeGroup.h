#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaAnnotated.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnyAttribute; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaAttributeGroup : System_Xml::System::Xml::Schema::XmlSchemaAnnotated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes;
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
		System_Xml::System::Xml::XmlQualifiedName* qname;
		System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* redefined;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* attributeUses;
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* attributeWildcard;
		int32_t selfReferenceCount;
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();
		void set_AnyAttribute(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* value);
		System_Xml::System::Xml::XmlQualifiedName* get_QualifiedName();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeUses();
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* get_AttributeWildcard();
		void set_AttributeWildcard(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* value);
		System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* get_Redefined();
		void set_Redefined(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* value);
		int32_t get_SelfReferenceCount();
		void set_SelfReferenceCount(int32_t value);
		mscorlib::System::String* get_NameAttribute();
		void set_NameAttribute(mscorlib::System::String* value);
		void SetQualifiedName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::Schema::XmlSchemaObject* Clone();
		void _ctor();
	};
}

