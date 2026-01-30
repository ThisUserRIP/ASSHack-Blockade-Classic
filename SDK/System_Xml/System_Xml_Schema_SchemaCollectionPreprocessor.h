#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_BaseProcessor.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_Schema_XmlSchemaForm.h"
#include "System_Xml_Schema_XmlSchemaDerivationMethod.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml { struct XmlResolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct SchemaNames; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollection; };
#include "System_Xml_Schema_SchemaCollectionPreprocessor_Compositor.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaRedefine; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaGroup; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttributeGroup; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaComplexType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaIdentityConstraint; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaNotation; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaParticle; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnyAttribute; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace System::System { struct Uri; };
namespace mscorlib::System::IO { struct Stream; };

namespace System_Xml::System::Xml::Schema
{
	struct SchemaCollectionPreprocessor : System_Xml::System::Xml::Schema::BaseProcessor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchema* schema;
		mscorlib::System::String* targetNamespace;
		bool buildinIncluded;
		System_Xml::System::Xml::Schema::XmlSchemaForm elementFormDefault;
		System_Xml::System::Xml::Schema::XmlSchemaForm attributeFormDefault;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod blockDefault;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod finalDefault;
		mscorlib::System::Collections::Hashtable* schemaLocations;
		mscorlib::System::Collections::Hashtable* referenceNamespaces;
		mscorlib::System::String* Xmlns;
		System_Xml::System::Xml::XmlResolver* xmlResolver;
		void _ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler);
		bool Execute(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::String* targetNamespace, bool loadExternals, System_Xml::System::Xml::Schema::XmlSchemaCollection* xsc);
		void Cleanup(System_Xml::System::Xml::Schema::XmlSchema* schema);
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		void LoadExternals(System_Xml::System::Xml::Schema::XmlSchema* schema, System_Xml::System::Xml::Schema::XmlSchemaCollection* xsc);
		void BuildRefNamespaces(System_Xml::System::Xml::Schema::XmlSchema* schema);
		void Preprocess(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::String* targetNamespace, System_Xml::System::Xml::Schema::SchemaCollectionPreprocessor_Compositor compositor);
		void PreprocessRedefine(System_Xml::System::Xml::Schema::XmlSchemaRedefine* redefine);
		int32_t CountGroupSelfReference(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* items, System_Xml::System::Xml::XmlQualifiedName* name);
		void CheckRefinedGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group);
		void CheckRefinedAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);
		void CheckRefinedSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* stype);
		void CheckRefinedComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* ctype);
		void PreprocessAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute);
		void PreprocessLocalAttribute(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute);
		void PreprocessAttributeContent(System_Xml::System::Xml::Schema::XmlSchemaAttribute* attribute);
		void PreprocessAttributeGroup(System_Xml::System::Xml::Schema::XmlSchemaAttributeGroup* attributeGroup);
		void PreprocessElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element);
		void PreprocessLocalElement(System_Xml::System::Xml::Schema::XmlSchemaElement* element);
		void PreprocessElementContent(System_Xml::System::Xml::Schema::XmlSchemaElement* element);
		void PreprocessIdentityConstraint(System_Xml::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint);
		void PreprocessSimpleType(System_Xml::System::Xml::Schema::XmlSchemaSimpleType* simpleType, bool local);
		void PreprocessComplexType(System_Xml::System::Xml::Schema::XmlSchemaComplexType* complexType, bool local);
		void PreprocessGroup(System_Xml::System::Xml::Schema::XmlSchemaGroup* group);
		void PreprocessNotation(System_Xml::System::Xml::Schema::XmlSchemaNotation* notation);
		void PreprocessParticle(System_Xml::System::Xml::Schema::XmlSchemaParticle* particle);
		void PreprocessAttributes(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* attributes, System_Xml::System::Xml::Schema::XmlSchemaAnyAttribute* anyAttribute, System_Xml::System::Xml::Schema::XmlSchemaObject* parent);
		void ValidateIdAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* xso);
		void ValidateNameAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* xso);
		void ValidateQNameAttribute(System_Xml::System::Xml::Schema::XmlSchemaObject* xso, mscorlib::System::String* attributeName, System_Xml::System::Xml::XmlQualifiedName* value);
		void SetParent(System_Xml::System::Xml::Schema::XmlSchemaObject* child, System_Xml::System::Xml::Schema::XmlSchemaObject* parent);
		void PreprocessAnnotation(System_Xml::System::Xml::Schema::XmlSchemaObject* schemaObject);
		System::System::Uri* ResolveSchemaLocationUri(System_Xml::System::Xml::Schema::XmlSchema* enclosingSchema, mscorlib::System::String* location);
		mscorlib::System::IO::Stream* GetSchemaEntity(System::System::Uri* ruri);
	};
}

