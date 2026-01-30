#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_SchemaDeclBase.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_Schema_SchemaAttDef_Reserve.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace mscorlib::System { struct Object; };
#include "System_Xml_XmlTokenizedType.h"
namespace System_Xml::System::Xml { struct IValidationEventHandling; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaAttDef : System_Xml::System::Xml::Schema::SchemaDeclBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* defExpanded;
		int32_t lineNum;
		int32_t linePos;
		int32_t valueLineNum;
		int32_t valueLinePos;
		System_Xml::System::Xml::Schema::SchemaAttDef_Reserve reserved;
		bool defaultValueChecked;
		System_Xml::System::Xml::Schema::XmlSchemaAttribute* schemaAttribute;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::SchemaAttDef* Empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::XmlQualifiedName* name, mscorlib::System::String* prefix);
		void _ctor(System_Xml::System::Xml::XmlQualifiedName* name);
		void _ctor();
		mscorlib::System::String* System_Xml_IDtdAttributeInfo_get_Prefix();
		mscorlib::System::String* System_Xml_IDtdAttributeInfo_get_LocalName();
		int32_t System_Xml_IDtdAttributeInfo_get_LineNumber();
		int32_t System_Xml_IDtdAttributeInfo_get_LinePosition();
		bool System_Xml_IDtdAttributeInfo_get_IsNonCDataType();
		bool System_Xml_IDtdAttributeInfo_get_IsDeclaredInExternal();
		bool System_Xml_IDtdAttributeInfo_get_IsXmlAttribute();
		mscorlib::System::String* System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueExpanded();
		mscorlib::System::Object* System_Xml_IDtdDefaultAttributeInfo_get_DefaultValueTyped();
		int32_t System_Xml_IDtdDefaultAttributeInfo_get_ValueLineNumber();
		int32_t System_Xml_IDtdDefaultAttributeInfo_get_ValueLinePosition();
		int32_t get_LinePosition();
		void set_LinePosition(int32_t value);
		int32_t get_LineNumber();
		void set_LineNumber(int32_t value);
		int32_t get_ValueLinePosition();
		void set_ValueLinePosition(int32_t value);
		int32_t get_ValueLineNumber();
		void set_ValueLineNumber(int32_t value);
		mscorlib::System::String* get_DefaultValueExpanded();
		void set_DefaultValueExpanded(mscorlib::System::String* value);
		System_Xml::System::Xml::XmlTokenizedType get_TokenizedType();
		void set_TokenizedType(System_Xml::System::Xml::XmlTokenizedType value);
		System_Xml::System::Xml::Schema::SchemaAttDef_Reserve get_Reserved();
		void set_Reserved(System_Xml::System::Xml::Schema::SchemaAttDef_Reserve value);
		bool get_DefaultValueChecked();
		System_Xml::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();
		void set_SchemaAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* value);
		void CheckXmlSpace(System_Xml::System::Xml::IValidationEventHandling* validationEventHandling);
		System_Xml::System::Xml::Schema::SchemaAttDef* Clone();
		static void _cctor();
	};
}

