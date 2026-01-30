#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaContent.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaParticle; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnyAttribute; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaComplexContentExtension : System_Xml::System::Xml::Schema::XmlSchemaContent
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaParticle* particle;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes;
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
		System_Xml::System::Xml::XmlQualifiedName* baseTypeName;
		System_Xml::System::Xml::XmlQualifiedName* get_BaseTypeName();
		void set_BaseTypeName(System_Xml::System::Xml::XmlQualifiedName* value);
		System_Xml::System::Xml::Schema::XmlSchemaParticle* get_Particle();
		void set_Particle(System_Xml::System::Xml::Schema::XmlSchemaParticle* value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Attributes();
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();
		void set_AnyAttribute(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* value);
		void SetAttributes(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* newAttributes);
		void _ctor();
	};
}

