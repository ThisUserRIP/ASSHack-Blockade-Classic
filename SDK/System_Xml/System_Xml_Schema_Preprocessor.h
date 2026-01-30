#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_BaseProcessor.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
#include "System_Xml_Schema_XmlSchemaForm.h"
#include "System_Xml_Schema_XmlSchemaDerivationMethod.h"
namespace mscorlib::System::Collections { struct Hashtable; };
namespace mscorlib::System::Collections { struct SortedList; };
namespace System_Xml::System::Xml { struct XmlReaderSettings; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml { struct XmlResolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct SchemaNames; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCompilationSettings; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaExternal; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace System_Xml::System::Xml::Schema { struct RedefineEntry; };
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
namespace System::System { struct Uri; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnnotation; };

namespace System_Xml::System::Xml::Schema
{
	struct Preprocessor : System_Xml::System::Xml::Schema::BaseProcessor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* Xmlns;
		mscorlib::System::String* NsXsi;
		mscorlib::System::String* targetNamespace;
		System_Xml::System::Xml::Schema::XmlSchema* rootSchema;
		System_Xml::System::Xml::Schema::XmlSchema* currentSchema;
		System_Xml::System::Xml::Schema::XmlSchemaForm elementFormDefault;
		System_Xml::System::Xml::Schema::XmlSchemaForm attributeFormDefault;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod blockDefault;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod finalDefault;
		mscorlib::System::Collections::Hashtable* schemaLocations;
		mscorlib::System::Collections::Hashtable* chameleonSchemas;
		mscorlib::System::Collections::Hashtable* referenceNamespaces;
		mscorlib::System::Collections::Hashtable* processedExternals;
		mscorlib::System::Collections::SortedList* lockList;
		System_Xml::System::Xml::XmlReaderSettings* readerSettings;
		System_Xml::System::Xml::Schema::XmlSchema* rootSchemaForRedefine;
		mscorlib::System::Collections::ArrayList* redefinedList;
		System_Xml::System::Xml::XmlResolver* xmlResolver;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::XmlSchema* builtInSchemaForXmlNS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);
		bool Execute(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::String* targetNamespace, bool loadExternals);
		void Cleanup(System_Xml::System::Xml::Schema::XmlSchema* schema);
		void CleanupRedefine(System_Xml::System::Xml::Schema::XmlSchemaExternal* include);
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		void set_ReaderSettings(System_Xml::System::Xml::XmlReaderSettings* value);
		void set_SchemaLocations(mscorlib::System::Collections::Hashtable* value);
		void set_ChameleonSchemas(mscorlib::System::Collections::Hashtable* value);
		System_Xml::System::Xml::Schema::XmlSchema* get_RootSchema();
		void BuildSchemaList(System_Xml::System::Xml::Schema::XmlSchema* schema);
		void LoadExternals(System_Xml::System::Xml::Schema::XmlSchema* schema);
		static System_Xml::System::Xml::Schema::XmlSchema* GetBuildInSchema();
		void BuildRefNamespaces(System_Xml::System::Xml::Schema::XmlSchema* schema);
		void ParseUri(mscorlib::System::String* uri, mscorlib::System::String* code, System_Xml::System::Xml::Schema::XmlSchemaObject* sourceSchemaObject);
		void Preprocess(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::String* targetNamespace, mscorlib::System::Collections::ArrayList* imports);
		void CopyIncludedComponents(System_Xml::System::Xml::Schema::XmlSchema* includedSchema, System_Xml::System::Xml::Schema::XmlSchema* schema);
		void PreprocessRedefine(System_Xml::System::Xml::Schema::RedefineEntry* redefineEntry);
		void GetIncludedSet(System_Xml::System::Xml::Schema::XmlSchema* schema, mscorlib::System::Collections::ArrayList* includesList);
		static System_Xml::System::Xml::Schema::XmlSchema* GetParentSchema(System_Xml::System::Xml::Schema::XmlSchemaObject* currentSchemaObject);
		void SetSchemaDefaults(System_Xml::System::Xml::Schema::XmlSchema* schema);
		int32_t CountGroupSelfReference(System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* items, System_Xml::System::Xml::XmlQualifiedName* name, System_Xml::System::Xml::Schema::XmlSchemaGroup* redefined);
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
		System::System::Uri* ResolveSchemaLocationUri(System_Xml::System::Xml::Schema::XmlSchema* enclosingSchema, mscorlib::System::String* location);
		mscorlib::System::Object* GetSchemaEntity(System::System::Uri* ruri);
		System_Xml::System::Xml::Schema::XmlSchema* GetChameleonSchema(mscorlib::System::String* targetNamespace, System_Xml::System::Xml::Schema::XmlSchema* schema);
		void SetParent(System_Xml::System::Xml::Schema::XmlSchemaObject* child, System_Xml::System::Xml::Schema::XmlSchemaObject* parent);
		void PreprocessAnnotation(System_Xml::System::Xml::Schema::XmlSchemaObject* schemaObject);
		void PreprocessAnnotation(System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation);
	};
}

