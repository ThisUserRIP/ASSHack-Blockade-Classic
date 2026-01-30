#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaValidity.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };

namespace System_Xml::System::Xml::Schema
{
	struct IXmlSchemaInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaValidity get_Validity();
		bool get_IsDefault();
		bool get_IsNil();
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_SchemaType();
		System_Xml::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();
		System_Xml::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();
	};
}

