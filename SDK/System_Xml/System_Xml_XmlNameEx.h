#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlName.h"
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace System_Xml::System::Xml { struct XmlName; };
namespace System_Xml::System::Xml::Schema { struct IXmlSchemaInfo; };
#include "System_Xml_Schema_XmlSchemaValidity.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };

namespace System_Xml::System::Xml
{
	struct XmlNameEx : System_Xml::System::Xml::XmlName
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t flags;
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* memberType;
		System_Xml::System::Xml::Schema::XmlSchemaType* schemaType;
		mscorlib::System::Object* decl;
		void _ctor(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns, int32_t hashCode, System_Xml::System::Xml::XmlDocument* ownerDoc, System_Xml::System::Xml::XmlName* next, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
		System_Xml::System::Xml::Schema::XmlSchemaValidity get_Validity();
		bool get_IsDefault();
		bool get_IsNil();
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_SchemaType();
		System_Xml::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();
		System_Xml::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();
		void SetValidity(System_Xml::System::Xml::Schema::XmlSchemaValidity value);
		void SetIsDefault(bool value);
		void SetIsNil(bool value);
		bool Equals(System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
	};
}

