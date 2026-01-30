#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaAnnotated.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_Schema_XmlSchemaDerivationMethod.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
#include "System_Xml_Schema_XmlSchemaContentType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
#include "System_Xml_Schema_XmlTypeCode.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaComplexType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlValueConverter; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaType : System_Xml::System::Xml::Schema::XmlSchemaAnnotated
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* name;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod final;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod derivedBy;
		System_Xml::System::Xml::Schema::XmlSchemaType* baseSchemaType;
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* datatype;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod finalResolved;
		System_Xml::System::Xml::Schema::SchemaElementDecl* elementDecl;
		System_Xml::System::Xml::XmlQualifiedName* qname;
		System_Xml::System::Xml::Schema::XmlSchemaType* redefined;
		System_Xml::System::Xml::Schema::XmlSchemaContentType contentType;
		static System_Xml::System::Xml::Schema::XmlSchemaSimpleType* GetBuiltInSimpleType(System_Xml::System::Xml::Schema::XmlTypeCode typeCode);
		static System_Xml::System::Xml::Schema::XmlSchemaComplexType* GetBuiltInComplexType(System_Xml::System::Xml::XmlQualifiedName* qualifiedName);
		mscorlib::System::String* get_Name();
		void set_Name(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_Final();
		void set_Final(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		System_Xml::System::Xml::XmlQualifiedName* get_QualifiedName();
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_FinalResolved();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_BaseXmlSchemaType();
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_DerivedBy();
		System_Xml::System::Xml::Schema::XmlSchemaDatatype* get_Datatype();
		bool get_IsMixed();
		void set_IsMixed(bool value);
		System_Xml::System::Xml::Schema::XmlTypeCode get_TypeCode();
		System_Xml::System::Xml::Schema::XmlValueConverter* get_ValueConverter();
		System_Xml::System::Xml::Schema::XmlSchemaContentType get_SchemaContentType();
		void SetQualifiedName(System_Xml::System::Xml::XmlQualifiedName* value);
		void SetFinalResolved(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		void SetBaseSchemaType(System_Xml::System::Xml::Schema::XmlSchemaType* value);
		void SetDerivedBy(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		void SetDatatype(System_Xml::System::Xml::Schema::XmlSchemaDatatype* value);
		System_Xml::System::Xml::Schema::SchemaElementDecl* get_ElementDecl();
		void set_ElementDecl(System_Xml::System::Xml::Schema::SchemaElementDecl* value);
		System_Xml::System::Xml::Schema::XmlSchemaType* get_Redefined();
		void set_Redefined(System_Xml::System::Xml::Schema::XmlSchemaType* value);
		void SetContentType(System_Xml::System::Xml::Schema::XmlSchemaContentType value);
		static bool IsDerivedFrom(System_Xml::System::Xml::Schema::XmlSchemaType* derivedType, System_Xml::System::Xml::Schema::XmlSchemaType* baseType, System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod except);
		static bool IsDerivedFromDatatype(System_Xml::System::Xml::Schema::XmlSchemaDatatype* derivedDataType, System_Xml::System::Xml::Schema::XmlSchemaDatatype* baseDataType, System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod except);
		mscorlib::System::String* get_NameAttribute();
		void set_NameAttribute(mscorlib::System::String* value);
		void _ctor();
	};
}

