#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_BaseValidator.h"
namespace System_Xml::System::Xml { struct HWStack; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct IdRefNode; };
namespace System_Xml::System::Xml::Schema { struct Parser; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct BaseValidator; };
namespace System_Xml::System::Xml { struct XmlValidatingReaderImpl; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollection; };
namespace System_Xml::System::Xml { struct IValidationEventHandling; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XmlTokenizedType.h"
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System_Xml::System::Xml::Schema
{
	struct XdrValidator : System_Xml::System::Xml::Schema::BaseValidator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::HWStack* validationStack;
		mscorlib::System::Collections::Hashtable* attPresence;
		System_Xml::System::Xml::XmlQualifiedName* name;
		System_Xml::System::Xml::XmlNamespaceManager* nsManager;
		bool isProcessContents;
		mscorlib::System::Collections::Hashtable* IDs;
		System_Xml::System::Xml::Schema::IdRefNode* idRefListHead;
		System_Xml::System::Xml::Schema::Parser* inlineSchemaParser;
		void _ctor(System_Xml::System::Xml::Schema::BaseValidator* validator);
		void _ctor(System_Xml::System::Xml::XmlValidatingReaderImpl* reader, System_Xml::System::Xml::Schema::XmlSchemaCollection* schemaCollection, System_Xml::System::Xml::IValidationEventHandling* eventHandling);
		void Init();
		void Validate();
		void ValidateElement();
		void ValidateChildElement();
		bool get_IsInlineSchemaStarted();
		void ProcessInlineSchema();
		void ProcessElement();
		void ValidateEndElement();
		System_Xml::System::Xml::Schema::SchemaElementDecl* ThoroughGetElementDecl();
		void ValidateStartElement();
		void ValidateEndStartElement();
		void LoadSchemaFromLocation(mscorlib::System::String* uri);
		void LoadSchema(mscorlib::System::String* uri);
		bool get_HasSchema();
		bool get_PreserveWhitespace();
		void ProcessTokenizedType(System_Xml::System::Xml::XmlTokenizedType ttype, mscorlib::System::String* name);
		void CompleteValidation();
		void CheckValue(mscorlib::System::String* value, System_Xml::System::Xml::Schema::SchemaAttDef* attdef);
		static void CheckDefaultValue(mscorlib::System::String* value, System_Xml::System::Xml::Schema::SchemaAttDef* attdef, System_Xml::System::Xml::Schema::SchemaInfo* sinfo, System_Xml::System::Xml::XmlNamespaceManager* nsManager, System_Xml::System::Xml::XmlNameTable* NameTable, mscorlib::System::Object* sender, System_Xml::System::Xml::Schema::ValidationEventHandler* eventhandler, mscorlib::System::String* baseUri, int32_t lineNo, int32_t linePos);
		void AddID(mscorlib::System::String* name, mscorlib::System::Object* node);
		mscorlib::System::Object* FindId(mscorlib::System::String* name);
		void Push(System_Xml::System::Xml::XmlQualifiedName* elementName);
		void Pop();
		void CheckForwardRefs();
		System_Xml::System::Xml::XmlQualifiedName* QualifiedName(mscorlib::System::String* name, mscorlib::System::String* ns);
	};
}

