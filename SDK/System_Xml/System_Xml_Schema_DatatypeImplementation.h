#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaDatatype.h"
#include "System_Xml_Schema_XmlSchemaDatatypeVariety.h"
namespace System_Xml::System::Xml::Schema { struct RestrictionFacets; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct FacetsChecker; };
namespace System_Xml::System::Xml::Schema { struct DatatypeImplementation; };
namespace System_Xml::System::Xml::Schema { struct DatatypeImplementation_SchemaDatatypeMap; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_XmlTokenizedType.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
#include "System_Xml_Schema_XmlTypeCode.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Xml_Schema_RestrictionFlags.h"
#include "System_Xml_Schema_XmlSchemaWhiteSpace.h"
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace mscorlib::System { struct Exception; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace System_Xml::System::Xml::Schema
{
	struct DatatypeImplementation : System_Xml::System::Xml::Schema::XmlSchemaDatatype
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaDatatypeVariety variety;
		System_Xml::System::Xml::Schema::RestrictionFacets* restriction;
		System_Xml::System::Xml::Schema::DatatypeImplementation* baseType;
		System_Xml::System::Xml::Schema::XmlValueConverter* valueConverter;
		System_Xml::System::Xml::Schema::XmlSchemaType* parentSchemaType;
		struct StaticFields
		{
			mscorlib::System::Collections::Hashtable* builtinTypes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* enumToTypeCode;
			System_Xml::System::Xml::Schema::XmlSchemaSimpleType* anySimpleType;
			System_Xml::System::Xml::Schema::XmlSchemaSimpleType* anyAtomicType;
			System_Xml::System::Xml::Schema::XmlSchemaSimpleType* untypedAtomicType;
			System_Xml::System::Xml::Schema::XmlSchemaSimpleType* yearMonthDurationType;
			System_Xml::System::Xml::Schema::XmlSchemaSimpleType* dayTimeDurationType;
			System_Xml::System::Xml::Schema::XmlSchemaSimpleType* normalizedStringTypeV1Compat;
			System_Xml::System::Xml::Schema::XmlSchemaSimpleType* tokenTypeV1Compat;
			System_Xml::System::Xml::XmlQualifiedName* QnAnySimpleType;
			System_Xml::System::Xml::XmlQualifiedName* QnAnyType;
			System_Xml::System::Xml::Schema::FacetsChecker* stringFacetsChecker;
			System_Xml::System::Xml::Schema::FacetsChecker* miscFacetsChecker;
			System_Xml::System::Xml::Schema::FacetsChecker* numeric2FacetsChecker;
			System_Xml::System::Xml::Schema::FacetsChecker* binaryFacetsChecker;
			System_Xml::System::Xml::Schema::FacetsChecker* dateTimeFacetsChecker;
			System_Xml::System::Xml::Schema::FacetsChecker* durationFacetsChecker;
			System_Xml::System::Xml::Schema::FacetsChecker* listFacetsChecker;
			System_Xml::System::Xml::Schema::FacetsChecker* qnameFacetsChecker;
			System_Xml::System::Xml::Schema::FacetsChecker* unionFacetsChecker;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_anySimpleType;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_anyURI;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_base64Binary;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_boolean;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_byte;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_char;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_date;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_dateTime;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_dateTimeNoTz;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_dateTimeTz;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_day;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_decimal;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_double;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_doubleXdr;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_duration;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_ENTITY;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_ENTITIES;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_ENUMERATION;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_fixed;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_float;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_floatXdr;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_hexBinary;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_ID;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_IDREF;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_IDREFS;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_int;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_integer;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_language;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_long;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_month;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_monthDay;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_Name;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_NCName;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_negativeInteger;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_NMTOKEN;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_NMTOKENS;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_nonNegativeInteger;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_nonPositiveInteger;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_normalizedString;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_NOTATION;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_positiveInteger;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_QName;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_QNameXdr;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_short;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_string;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_time;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_timeNoTz;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_timeTz;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_token;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_unsignedByte;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_unsignedInt;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_unsignedLong;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_unsignedShort;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_uuid;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_year;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_yearMonth;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_normalizedStringV1Compat;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_tokenV1Compat;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_anyAtomicType;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_dayTimeDuration;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_untypedAtomicType;
			System_Xml::System::Xml::Schema::DatatypeImplementation* c_yearMonthDuration;
			IL2CPP::Array<System_Xml::System::Xml::Schema::DatatypeImplementation*>* c_tokenizedTypes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::DatatypeImplementation*>* c_tokenizedTypesXsd;
			IL2CPP::Array<System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>* c_XdrTypes;
			IL2CPP::Array<System_Xml::System::Xml::Schema::DatatypeImplementation_SchemaDatatypeMap*>* c_XsdTypes;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_AnySimpleType();
		static System_Xml::System::Xml::Schema::XmlSchemaSimpleType* get_UntypedAtomicType();
		static System_Xml::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedType(System_Xml::System::Xml::XmlTokenizedType token);
		static System_Xml::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedTypeXsd(System_Xml::System::Xml::XmlTokenizedType token);
		static System_Xml::System::Xml::Schema::DatatypeImplementation* FromXdrName(mscorlib::System::String* name);
		static System_Xml::System::Xml::Schema::DatatypeImplementation* FromTypeName(mscorlib::System::String* name);
		static System_Xml::System::Xml::Schema::XmlSchemaSimpleType* StartBuiltinType(System_Xml::System::Xml::XmlQualifiedName* qname, System_Xml::System::Xml::Schema::XmlSchemaDatatype* dataType);
		static void FinishBuiltinType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* derivedType, System_Xml::System::Xml::Schema::XmlSchemaSimpleType* baseType);
		static void CreateBuiltinTypes();
		static System_Xml::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromTypeCode(System_Xml::System::Xml::Schema::XmlTypeCode typeCode);
		static System_Xml::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromXsdType(System_Xml::System::Xml::XmlQualifiedName* qname);
		static System_Xml::System::Xml::Schema::XmlSchemaSimpleType* GetNormalizedStringTypeV1Compat();
		static System_Xml::System::Xml::Schema::XmlSchemaSimpleType* GetTokenTypeV1Compat();
		static IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* GetBuiltInTypes();
		static System_Xml::System::Xml::Schema::XmlTypeCode GetPrimitiveTypeCode(System_Xml::System::Xml::Schema::XmlTypeCode typeCode);
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* DeriveByRestriction(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* facets, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(int32_t minSize, System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		static System_Xml::System::Xml::Schema::DatatypeImplementation* DeriveByUnion(IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchemaSimpleType*>* types, System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		void VerifySchemaValid(System_Xml::System::Xml::Schema::XmlSchemaObjectTable* notations, System_Xml::System::Xml::Schema::XmlSchemaObject* caller);
		bool IsDerivedFrom(System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype);
		bool IsEqual(mscorlib::System::Object* o1, mscorlib::System::Object* o2);
		bool IsComparable(System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtype);
		System_Xml::System::Xml::Schema::XmlValueConverter* CreateValueConverter(System_Xml::System::Xml::Schema::XmlSchemaType* schemaType);
		System_Xml::System::Xml::Schema::FacetsChecker* get_FacetsChecker();
		System_Xml::System::Xml::Schema::XmlValueConverter* get_ValueConverter();
		System_Xml::System::Xml::XmlTokenizedType get_TokenizedType();
		mscorlib::System::Type* get_ValueType();
		System_Xml::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety();
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		System_Xml::System::Xml::Schema::RestrictionFacets* get_Restriction();
		bool get_HasLexicalFacets();
		bool get_HasValueFacets();
		System_Xml::System::Xml::Schema::DatatypeImplementation* get_Base();
		mscorlib::System::Type* get_ListValueType();
		System_Xml::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();
		System_Xml::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();
		mscorlib::System::Object* ParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr);
		mscorlib::System::Object* ParseValue(mscorlib::System::String* s, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* nsmgr, bool createAtomicValue);
		mscorlib::System::Exception* TryParseValue(mscorlib::System::Object* value, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::IXmlNamespaceResolver* namespaceResolver, mscorlib::System::Object& typedValue);
		mscorlib::System::String* GetTypeName();
		int32_t Compare(IL2CPP::Array<uint8_t>* value1, IL2CPP::Array<uint8_t>* value2);
		void _ctor();
	};
}

