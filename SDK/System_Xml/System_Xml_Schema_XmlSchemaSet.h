#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct SchemaNames; };
namespace mscorlib::System::Collections { struct SortedList; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml { struct XmlReaderSettings; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCompilationSettings; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlResolver; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlReader; };
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Collections_DictionaryEntry.h"
namespace mscorlib::System::Collections { struct DictionaryEntry; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSubstitutionGroup; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventArgs; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaException; };
#include "System_Xml_Schema_XmlSeverityType.h"

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchemaSet : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNameTable* nameTable;
		System_Xml::System::Xml::Schema::SchemaNames* schemaNames;
		mscorlib::System::Collections::SortedList* schemas;
		System_Xml::System::Xml::Schema::ValidationEventHandler* internalEventHandler;
		System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler;
		bool isCompiled;
		mscorlib::System::Collections::Hashtable* schemaLocations;
		mscorlib::System::Collections::Hashtable* chameleonSchemas;
		mscorlib::System::Collections::Hashtable* targetNamespaces;
		bool compileAll;
		System_Xml::System::Xml::Schema::SchemaInfo* cachedCompiledInfo;
		System_Xml::System::Xml::XmlReaderSettings* readerSettings;
		System_Xml::System::Xml::Schema::XmlSchema* schemaForSchema;
		System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* elements;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* attributes;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* schemaTypes;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroups;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* typeExtensions;
		mscorlib::System::Object* internalSyncObject;
		mscorlib::System::Object* get_InternalSyncObject();
		void _ctor();
		void _ctor(System_Xml::System::Xml::XmlNameTable* nameTable);
		void add_ValidationEventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value);
		void remove_ValidationEventHandler(System_Xml::System::Xml::Schema::ValidationEventHandler* value);
		bool get_IsCompiled();
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* get_CompilationSettings();
		void set_CompilationSettings(System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* value);
		int32_t get_Count();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalElements();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalAttributes();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_GlobalTypes();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_SubstitutionGroups();
		mscorlib::System::Collections::Hashtable* get_SchemaLocations();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_TypeExtensions();
		void Add(System_Xml::System::Xml::Schema::XmlSchemaSet* schemas);
		System_Xml::System::Xml::Schema::XmlSchema* Add(System_Xml::System::Xml::Schema::XmlSchema* schema);
		bool RemoveRecursive(System_Xml::System::Xml::Schema::XmlSchema* schemaToRemove);
		void Compile();
		void CopyTo(IL2CPP::Array<System_Xml::System::Xml::Schema::XmlSchema*>* schemas, int32_t index);
		mscorlib::System::Collections::ICollection* Schemas(mscorlib::System::String* targetNamespace);
		System_Xml::System::Xml::Schema::XmlSchema* Add(mscorlib::System::String* targetNamespace, System_Xml::System::Xml::Schema::XmlSchema* schema);
		void Add(mscorlib::System::String* targetNamespace, System_Xml::System::Xml::XmlReader* reader, mscorlib::System::Collections::Hashtable* validatedNamespaces);
		System_Xml::System::Xml::Schema::XmlSchema* FindSchemaByNSAndUrl(System::System::Uri* schemaUri, mscorlib::System::String* ns, IL2CPP::Array<mscorlib::System::Collections::DictionaryEntry>* locationsTable);
		void AddSchemaToSet(System_Xml::System::Xml::Schema::XmlSchema* schema);
		void ProcessNewSubstitutionGroups(System_Xml::System::Xml::Schema::XmlSchemaObjectTable* substitutionGroupsTable, bool resolve);
		void ResolveSubstitutionGroup(System_Xml::System::Xml::Schema::XmlSchemaSubstitutionGroup* substitutionGroup, System_Xml::System::Xml::Schema::XmlSchemaObjectTable* substTable);
		System_Xml::System::Xml::Schema::XmlSchema* Remove(System_Xml::System::Xml::Schema::XmlSchema* schema, bool forceCompile);
		void ClearTables();
		bool PreprocessSchema(System_Xml::System::Xml::Schema::XmlSchema& schema, mscorlib::System::String* targetNamespace);
		System_Xml::System::Xml::Schema::XmlSchema* ParseSchema(mscorlib::System::String* targetNamespace, System_Xml::System::Xml::XmlReader* reader);
		void CopyFromCompiledSet(System_Xml::System::Xml::Schema::XmlSchemaSet* otherSet);
		System_Xml::System::Xml::Schema::SchemaInfo* get_CompiledInfo();
		System_Xml::System::Xml::XmlReaderSettings* get_ReaderSettings();
		System_Xml::System::Xml::XmlResolver* GetResolver();
		System_Xml::System::Xml::Schema::ValidationEventHandler* GetEventHandler();
		System_Xml::System::Xml::Schema::SchemaNames* GetSchemaNames(System_Xml::System::Xml::XmlNameTable* nt);
		bool IsSchemaLoaded(System::System::Uri* schemaUri, mscorlib::System::String* targetNamespace, System_Xml::System::Xml::Schema::XmlSchema& schema);
		bool GetSchemaByUri(System::System::Uri* schemaUri, System_Xml::System::Xml::Schema::XmlSchema& schema);
		mscorlib::System::String* GetTargetNamespace(System_Xml::System::Xml::Schema::XmlSchema* schema);
		mscorlib::System::Collections::SortedList* get_SortedSchemas();
		void RemoveSchemaFromCaches(System_Xml::System::Xml::Schema::XmlSchema* schema);
		void RemoveSchemaFromGlobalTables(System_Xml::System::Xml::Schema::XmlSchema* schema);
		bool AddToTable(System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table, System_Xml::System::Xml::XmlQualifiedName* qname, System_Xml::System::Xml::Schema::XmlSchemaObject* item);
		void VerifyTables();
		void InternalValidationCallback(mscorlib::System::Object* sender, System_Xml::System::Xml::Schema::ValidationEventArgs* e);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity);
	};
}

