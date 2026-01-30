#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_XmlSchemaObject.h"
#include "System_Xml_Schema_XmlSchemaForm.h"
#include "System_Xml_Schema_XmlSchemaDerivationMethod.h"
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectCollection; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System::System { struct Uri; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml { struct XmlDocument; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollection; };
namespace System_Xml::System::Xml { struct XmlResolver; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCompilationSettings; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAnnotation; };
namespace mscorlib::System::Collections { struct IList; };

namespace System_Xml::System::Xml::Schema
{
	struct XmlSchema : System_Xml::System::Xml::Schema::XmlSchemaObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaForm attributeFormDefault;
		System_Xml::System::Xml::Schema::XmlSchemaForm elementFormDefault;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod blockDefault;
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod finalDefault;
		mscorlib::System::String* targetNs;
		mscorlib::System::String* version;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* includes;
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* items;
		mscorlib::System::String* id;
		IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* moreAttributes;
		bool isCompiled;
		bool isCompiledBySet;
		bool isPreprocessed;
		bool isRedefined;
		int32_t errorCount;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* attributes;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* attributeGroups;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* elements;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* types;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* groups;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* notations;
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* identityConstraints;
		mscorlib::System::Collections::ArrayList* importedSchemas;
		mscorlib::System::Collections::ArrayList* importedNamespaces;
		int32_t schemaId;
		System::System::Uri* baseUri;
		bool isChameleon;
		mscorlib::System::Collections::Hashtable* ids;
		System_Xml::System::Xml::XmlDocument* document;
		struct StaticFields
		{
			int32_t globalIdCounter;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
		bool CompileSchema(System_Xml::System::Xml::Schema::XmlSchemaCollection* xsc, System_Xml::System::Xml::XmlResolver* resolver, System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo, mscorlib::System::String* ns, System_Xml::System::Xml::Schema::ValidationEventHandler* validationEventHandler, System_Xml::System::Xml::XmlNameTable* nameTable, bool CompileContentModel);
		void CompileSchemaInSet(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);
		System_Xml::System::Xml::Schema::XmlSchemaForm get_AttributeFormDefault();
		void set_AttributeFormDefault(System_Xml::System::Xml::Schema::XmlSchemaForm value);
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_BlockDefault();
		void set_BlockDefault(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod get_FinalDefault();
		void set_FinalDefault(System_Xml::System::Xml::Schema::XmlSchemaDerivationMethod value);
		System_Xml::System::Xml::Schema::XmlSchemaForm get_ElementFormDefault();
		void set_ElementFormDefault(System_Xml::System::Xml::Schema::XmlSchemaForm value);
		mscorlib::System::String* get_TargetNamespace();
		void set_TargetNamespace(mscorlib::System::String* value);
		mscorlib::System::String* get_Version();
		void set_Version(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Includes();
		System_Xml::System::Xml::Schema::XmlSchemaObjectCollection* get_Items();
		bool get_IsCompiledBySet();
		void set_IsCompiledBySet(bool value);
		bool get_IsPreprocessed();
		void set_IsPreprocessed(bool value);
		bool get_IsRedefined();
		void set_IsRedefined(bool value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_Attributes();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_AttributeGroups();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_SchemaTypes();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_Elements();
		mscorlib::System::String* get_Id();
		void set_Id(mscorlib::System::String* value);
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_Groups();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_Notations();
		System_Xml::System::Xml::Schema::XmlSchemaObjectTable* get_IdentityConstraints();
		System::System::Uri* get_BaseUri();
		void set_BaseUri(System::System::Uri* value);
		int32_t get_SchemaId();
		bool get_IsChameleon();
		void set_IsChameleon(bool value);
		mscorlib::System::Collections::Hashtable* get_Ids();
		System_Xml::System::Xml::XmlDocument* get_Document();
		int32_t get_ErrorCount();
		void set_ErrorCount(int32_t value);
		System_Xml::System::Xml::Schema::XmlSchema* Clone();
		System_Xml::System::Xml::Schema::XmlSchema* DeepClone();
		mscorlib::System::String* get_IdAttribute();
		void set_IdAttribute(mscorlib::System::String* value);
		void SetIsCompiled(bool isCompiled);
		void SetUnhandledAttributes(IL2CPP::Array<System_Xml::System::Xml::XmlAttribute*>* moreAttributes);
		void AddAnnotation(System_Xml::System::Xml::Schema::XmlSchemaAnnotation* annotation);
		mscorlib::System::Collections::ArrayList* get_ImportedSchemas();
		mscorlib::System::Collections::ArrayList* get_ImportedNamespaces();
		void GetExternalSchemasList(mscorlib::System::Collections::IList* extList, System_Xml::System::Xml::Schema::XmlSchema* schema);
		static void _cctor();
	};
}

