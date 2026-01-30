#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace System_Xml::System::Xml::Schema { struct SchemaEntity; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_Schema_SchemaType.h"
namespace System_Xml::System::Xml::Schema { struct SchemaNotation; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
#include "System_Xml_Schema_AttributeMatchState.h"
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml { struct IDtdAttributeListInfo; };
namespace System_Xml::System::Xml { struct IDtdEntityInfo; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaElementDecl>* elementDecls;
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaElementDecl>* undeclaredElementDecls;
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaEntity>* generalEntities;
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaEntity>* parameterEntities;
		System_Xml::System::Xml::XmlQualifiedName* docTypeName;
		mscorlib::System::String* internalDtdSubset;
		bool hasNonCDataAttributes;
		bool hasDefaultAttributes;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* targetNamespaces;
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaAttDef>* attributeDecls;
		int32_t errorCount;
		System_Xml::System::Xml::Schema::SchemaType schemaType;
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaElementDecl>* elementDeclsByType;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, System_Xml::System::Xml::Schema::SchemaNotation>* notations;
		void _ctor();
		System_Xml::System::Xml::XmlQualifiedName* get_DocTypeName();
		void set_DocTypeName(System_Xml::System::Xml::XmlQualifiedName* value);
		void set_InternalDtdSubset(mscorlib::System::String* value);
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaElementDecl>* get_ElementDecls();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaElementDecl>* get_UndeclaredElementDecls();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaEntity>* get_GeneralEntities();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaEntity>* get_ParameterEntities();
		System_Xml::System::Xml::Schema::SchemaType get_SchemaType();
		void set_SchemaType(System_Xml::System::Xml::Schema::SchemaType value);
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Boolean>* get_TargetNamespaces();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaElementDecl>* get_ElementDeclsByType();
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::System::Xml::XmlQualifiedName, System_Xml::System::Xml::Schema::SchemaAttDef>* get_AttributeDecls();
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, System_Xml::System::Xml::Schema::SchemaNotation>* get_Notations();
		int32_t get_ErrorCount();
		void set_ErrorCount(int32_t value);
		System_Xml::System::Xml::Schema::SchemaElementDecl* GetElementDecl(System_Xml::System::Xml::XmlQualifiedName* qname);
		System_Xml::System::Xml::Schema::SchemaElementDecl* GetTypeDecl(System_Xml::System::Xml::XmlQualifiedName* qname);
		System_Xml::System::Xml::Schema::XmlSchemaElement* GetElement(System_Xml::System::Xml::XmlQualifiedName* qname);
		bool HasSchema(mscorlib::System::String* ns);
		bool Contains(mscorlib::System::String* ns);
		System_Xml::System::Xml::Schema::SchemaAttDef* GetAttributeXdr(System_Xml::System::Xml::Schema::SchemaElementDecl* ed, System_Xml::System::Xml::XmlQualifiedName* qname);
		System_Xml::System::Xml::Schema::SchemaAttDef* GetAttributeXsd(System_Xml::System::Xml::Schema::SchemaElementDecl* ed, System_Xml::System::Xml::XmlQualifiedName* qname, System_Xml::System::Xml::Schema::XmlSchemaObject* partialValidationType, System_Xml::System::Xml::Schema::AttributeMatchState& attributeMatchState);
		System_Xml::System::Xml::Schema::SchemaAttDef* GetAttributeXsd(System_Xml::System::Xml::Schema::SchemaElementDecl* ed, System_Xml::System::Xml::XmlQualifiedName* qname, bool& skip);
		void Add(System_Xml::System::Xml::Schema::SchemaInfo* sinfo, System_Xml::System::Xml::Schema::ValidationEventHandler* eventhandler);
		void Finish();
		bool System_Xml_IDtdInfo_get_HasDefaultAttributes();
		bool System_Xml_IDtdInfo_get_HasNonCDataAttributes();
		System_Xml::System::Xml::IDtdAttributeListInfo* System_Xml_IDtdInfo_LookupAttributeList(mscorlib::System::String* prefix, mscorlib::System::String* localName);
		System_Xml::System::Xml::IDtdEntityInfo* System_Xml_IDtdInfo_LookupEntity(mscorlib::System::String* name);
		System_Xml::System::Xml::XmlQualifiedName* System_Xml_IDtdInfo_get_Name();
		mscorlib::System::String* System_Xml_IDtdInfo_get_InternalDtdSubset();
	};
}

