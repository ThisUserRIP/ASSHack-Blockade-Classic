#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_SchemaDeclBase.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace System_Xml::System::Xml { struct IDtdDefaultAttributeInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct ContentValidator; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnyAttribute; };
#include "System_Xml_Schema_XmlSchemaDerivationMethod.h"
namespace System_Xml::System::Xml::Schema { struct CompiledIdentityConstraint; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct IDtdAttributeInfo; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System::Collections { struct Hashtable; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaElementDecl : System_Xml::System::Xml::Schema::SchemaDeclBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaAttDef>* attdefs;
		mscorlib::System::Collections::Generic::List_1<System_Xml::System::Xml::IDtdDefaultAttributeInfo>* defaultAttdefs;
		bool isIdDeclared;
		bool hasNonCDataAttribute;
		bool isAbstract;
		bool isNillable;
		bool hasRequiredAttribute;
		bool isNotationDeclared;
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::XmlQualifiedName>* prohibitedAttributes;
		System_Xml::System::Xml::Schema::ContentValidator* contentValidator;
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod block;
		IL2CPP::Array<System_Xml::System::Xml::Schema::CompiledIdentityConstraint*>* constraints;
		System_Xml::System::Xml::Schema::XmlSchemaElement* schemaElement;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::SchemaElementDecl* Empty;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		void _ctor(System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtype);
		void _ctor(System_Xml::System::Xml::XmlQualifiedName* name, mscorlib::System::String* prefix);
		static System_Xml::System::Xml::Schema::SchemaElementDecl* CreateAnyTypeElementDecl();
		bool System_Xml_IDtdAttributeListInfo_get_HasNonCDataAttributes();
		System_Xml::System::Xml::IDtdAttributeInfo* System_Xml_IDtdAttributeListInfo_LookupAttribute(mscorlib::System::String* prefix, mscorlib::System::String* localName);
		mscorlib::System::Collections::Generic::IEnumerable_1<System_Xml::System::Xml::IDtdDefaultAttributeInfo>* System_Xml_IDtdAttributeListInfo_LookupDefaultAttributes();
		bool get_IsIdDeclared();
		void set_IsIdDeclared(bool value);
		bool get_HasNonCDataAttribute();
		void set_HasNonCDataAttribute(bool value);
		System_Xml::System::Xml::Schema::SchemaElementDecl* Clone();
		bool get_IsAbstract();
		void set_IsAbstract(bool value);
		bool get_IsNillable();
		void set_IsNillable(bool value);
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_Block();
		void set_Block(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		bool get_IsNotationDeclared();
		void set_IsNotationDeclared(bool value);
		bool get_HasDefaultAttribute();
		bool get_HasRequiredAttribute();
		System_Xml::System::Xml::Schema::ContentValidator* get_ContentValidator();
		void set_ContentValidator(System_Xml::System::Xml::Schema::ContentValidator* value);
		System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* get_AnyAttribute();
		void set_AnyAttribute(System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* value);
		IL2CPP::Array<System_Xml::System::Xml::Schema::CompiledIdentityConstraint*>* get_Constraints();
		void set_Constraints(IL2CPP::Array<System_Xml::System::Xml::Schema::CompiledIdentityConstraint*>* value);
		System_Xml::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();
		void set_SchemaElement(System_Xml::System::Xml::Schema::XmlSchemaElement* value);
		void AddAttDef(System_Xml::System::Xml::Schema::SchemaAttDef* attdef);
		System_Xml::System::Xml::Schema::SchemaAttDef* GetAttDef(System_Xml::System::Xml::XmlQualifiedName* qname);
		mscorlib::System::Collections::Generic::IList_1<System_Xml::System::Xml::IDtdDefaultAttributeInfo>* get_DefaultAttDefs();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaAttDef>* get_AttDefs();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::XmlQualifiedName>* get_ProhibitedAttributes();
		void CheckAttributes(mscorlib::System::Collections::Hashtable* presence, bool standalone);
		static void _cctor();
	};
}

