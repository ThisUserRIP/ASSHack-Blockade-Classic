#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace System_Xml::System::Xml::Schema { struct IXmlSchemaInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_Schema_XmlSchemaValidity.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };

namespace System_Xml::System::Xml
{
	struct XmlName : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* prefix;
		mscorlib::System::String* localName;
		mscorlib::System::String* ns;
		mscorlib::System::String* name;
		int32_t hashCode;
		System_Xml::System::Xml::XmlDocument* ownerDoc;
		System_Xml::System::Xml::XmlName* next;
		static System_Xml::System::Xml::XmlName* Create(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns, int32_t hashCode, System_Xml::System::Xml::XmlDocument* ownerDoc, System_Xml::System::Xml::XmlName* next, System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
		void _ctor(mscorlib::System::String* prefix, mscorlib::System::String* localName, mscorlib::System::String* ns, int32_t hashCode, System_Xml::System::Xml::XmlDocument* ownerDoc, System_Xml::System::Xml::XmlName* next);
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_NamespaceURI();
		mscorlib::System::String* get_Prefix();
		int32_t get_HashCode();
		System_Xml::System::Xml::XmlDocument* get_OwnerDocument();
		mscorlib::System::String* get_Name();
		System_Xml::System::Xml::Schema::XmlSchemaValidity get_Validity();
		bool get_IsDefault();
		bool get_IsNil();
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_SchemaType();
		System_Xml::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();
		System_Xml::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();
		bool Equals(System_Xml::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);
		static int32_t GetHashCode(mscorlib::System::String* name);
	};
}

