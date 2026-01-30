#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_XmlTokenizedType.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "System_Xml_Schema_XmlSchemaDatatypeVariety.h"
#include "System_Xml_Schema_XmlTypeCode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
namespace System_Xml::System::Xml::Schema { struct RestrictionFacets; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Exception; };
namespace System_Xml::System::Xml::Schema { struct FacetsChecker; };
#include "System_Xml_Schema_XmlSchemaWhiteSpace.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct SchemaNames; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaDatatype : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* get_ValueType();
		System_Xml::System::Xml::XmlTokenizedType get_TokenizedType();
		mscorlib::System::Object* ParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr);
		System_Xml::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		bool IsDerivedFrom(System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		bool get_HasLexicalFacets();
		bool get_HasValueFacets();
		System_Xml::System::Xml::Schema::XmlValueConverter* get_ValueConverter();
		System_Xml::System::Xml::Schema::RestrictionFacets* get_Restriction();
		int32_t Compare(mscorlib::System::Object* value1, mscorlib::System::Object* value2);
		mscorlib::System::Object* ParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, bool createAtomicValue);
		mscorlib::System::Exception* TryParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, mscorlib::System::Object& typedValue);
		mscorlib::System::Exception* TryParseValue(mscorlib::System::Object* value, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* namespaceResolver, mscorlib::System::Object& typedValue);
		System_Xml::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
		System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* DeriveByRestriction(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* facets, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		void VerifySchemaValid(System_Xml::System::Xml::Schema::XmlSchemaObjectTable* notations, System_Xml::System::Xml::Schema::XmlSchemaObject* caller);
		bool IsEqual(mscorlib::System::Object* o1, mscorlib::System::Object* o2);
		bool IsComparable(System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtype);
		mscorlib::System::String* get_TypeCodeString();
		mscorlib::System::String* TypeCodeToString(System_Xml::System::Xml::Schema::XmlTypeCode typeCode);
		static mscorlib::System::String* ConcatenatedToString(mscorlib::System::Object* value);
		static System_Xml::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedType(System_Xml::System::Xml::XmlTokenizedType token);
		static System_Xml::System::Xml::Schema::XmlSchemaDatatype* FromXmlTokenizedTypeXsd(System_Xml::System::Xml::XmlTokenizedType token);
		static System_Xml::System::Xml::Schema::XmlSchemaDatatype* FromXdrName(mscorlib::System::String* name);
		static System_Xml::System::Xml::Schema::XmlSchemaDatatype* DeriveByUnion(IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* types, System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		static mscorlib::System::String* XdrCanonizeUri(mscorlib::System::String* uri, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames);
		void _ctor();
	};
}

