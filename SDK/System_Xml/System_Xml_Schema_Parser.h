#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_Xml_Schema_SchemaType.h"
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct SchemaNames; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
namespace System_Xml::System::Xml { struct XmlReader; };
namespace System_Xml::System::Xml { struct PositionInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct SchemaBuilder; };
namespace System_Xml::System::Xml::Schema { struct XmlSchema; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml { struct XmlResolver; };
namespace System_Xml::System::Xml { struct XmlDocument; };
namespace System_Xml::System::Xml { struct XmlNode; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlElement; };
namespace System_Xml::System::Xml { struct XmlAttribute; };
namespace System_Xml::System::Xml { struct XmlEntityReference; };

namespace System_Xml::System::Xml::Schema
{
	struct Parser : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::SchemaType schemaType;
		System_Xml::System::Xml::XmlNameTable* nameTable;
		System_Xml::System::Xml::Schema::SchemaNames* schemaNames;
		System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler;
		System_Xml::System::Xml::XmlNamespaceManager* namespaceManager;
		System_Xml::System::Xml::XmlReader* reader;
		System_Xml::System::Xml::PositionInfo* positionInfo;
		bool isProcessNamespaces;
		int32_t schemaXmlDepth;
		int32_t markupDepth;
		System_Xml::System::Xml::Schema::SchemaBuilder* builder;
		System_Xml::System::Xml::Schema::XmlSchema* schema;
		System_Xml::System::Xml::Schema::SchemaInfo* xdrSchema;
		System_Xml::System::Xml::XmlResolver* xmlResolver;
		System_Xml::System::Xml::XmlDocument* dummyDocument;
		bool processMarkup;
		System_Xml::System::Xml::XmlNode* parentNode;
		System_Xml::System::Xml::XmlNamespaceManager* annotationNSManager;
		mscorlib::System::String* xmlns;
		System_Xml::System::Xml::XmlCharType xmlCharType;
		void _ctor(System_Xml::System::Xml::Schema::SchemaType schemaType, System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler);
		System_Xml::System::Xml::Schema::SchemaType Parse(System_Xml::System::Xml::XmlReader* reader, mscorlib::System::String* targetNamespace);
		void StartParsing(System_Xml::System::Xml::XmlReader* reader, mscorlib::System::String* targetNamespace);
		bool CheckSchemaRoot(System_Xml::System::Xml::Schema::SchemaType rootType, mscorlib::System::String& code);
		System_Xml::System::Xml::Schema::SchemaType FinishParsing();
		System_Xml::System::Xml::Schema::XmlSchema* get_XmlSchema();
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		System_Xml::System::Xml::Schema::SchemaInfo* get_XdrSchema();
		bool ParseReaderNode();
		void ProcessAppInfoDocMarkup(bool root);
		System_Xml::System::Xml::XmlElement* LoadElementNode(bool root);
		System_Xml::System::Xml::XmlAttribute* CreateXmlNsAttribute(mscorlib::System::String* prefix, mscorlib::System::String* value);
		System_Xml::System::Xml::XmlAttribute* LoadAttributeNode();
		System_Xml::System::Xml::XmlEntityReference* LoadEntityReferenceInAttribute();
	};
}

