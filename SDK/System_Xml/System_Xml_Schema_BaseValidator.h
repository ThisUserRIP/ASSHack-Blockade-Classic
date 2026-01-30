#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollection; };
namespace System_Xml::System::Xml { struct IValidationEventHandling; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct SchemaNames; };
namespace System_Xml::System::Xml { struct PositionInfo; };
namespace System_Xml::System::Xml { struct XmlResolver; };
namespace System::System { struct Uri; };
namespace System_Xml::System::Xml::Schema { struct SchemaInfo; };
namespace System_Xml::System::Xml { struct XmlValidatingReaderImpl; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct ValidationState; };
namespace mscorlib::System::Text { struct StringBuilder; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml { struct IDtdInfo; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaException; };
#include "System_Xml_Schema_XmlSeverityType.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_ValidationType.h"

namespace System_Xml::System::Xml::Schema
{
	struct BaseValidator : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::Schema::XmlSchemaCollection* schemaCollection;
		System_Xml::System::Xml::IValidationEventHandling* eventHandling;
		System_Xml::System::Xml::XmlNameTable* nameTable;
		System_Xml::System::Xml::Schema::SchemaNames* schemaNames;
		System_Xml::System::Xml::PositionInfo* positionInfo;
		System_Xml::System::Xml::XmlResolver* xmlResolver;
		System::System::Uri* baseUri;
		System_Xml::System::Xml::Schema::SchemaInfo* schemaInfo;
		System_Xml::System::Xml::XmlValidatingReaderImpl* reader;
		System_Xml::System::Xml::XmlQualifiedName* elementName;
		System_Xml::System::Xml::Schema::ValidationState* context;
		mscorlib::System::Text::StringBuilder* textValue;
		mscorlib::System::String* textString;
		bool hasSibling;
		bool checkDatatype;
		void _ctor(System_Xml::System::Xml::Schema::BaseValidator* other);
		void _ctor(System_Xml::System::Xml::XmlValidatingReaderImpl* reader, System_Xml::System::Xml::Schema::XmlSchemaCollection* schemaCollection, System_Xml::System::Xml::IValidationEventHandling* eventHandling);
		System_Xml::System::Xml::XmlValidatingReaderImpl* get_Reader();
		System_Xml::System::Xml::Schema::XmlSchemaCollection* get_SchemaCollection();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		System_Xml::System::Xml::Schema::SchemaNames* get_SchemaNames();
		System_Xml::System::Xml::PositionInfo* get_PositionInfo();
		System_Xml::System::Xml::XmlResolver* get_XmlResolver();
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		System::System::Uri* get_BaseUri();
		void set_BaseUri(System::System::Uri* value);
		System_Xml::System::Xml::Schema::ValidationEventHandler* get_EventHandler();
		System_Xml::System::Xml::Schema::SchemaInfo* get_SchemaInfo();
		void set_DtdInfo(System_Xml::System::Xml::IDtdInfo* value);
		bool get_PreserveWhitespace();
		void Validate();
		void CompleteValidation();
		mscorlib::System::Object* FindId(mscorlib::System::String* name);
		void ValidateText();
		void ValidateWhitespace();
		void SaveTextValue(mscorlib::System::String* value);
		void SendValidationEvent(mscorlib::System::String* code);
		void SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* arg);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		void SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		static void ProcessEntity(System_Xml::System::Xml::Schema::SchemaInfo* sinfo, mscorlib::System::String* name, mscorlib::System::Object* sender, System_Xml::System::Xml::Schema::ValidationEventHandler* eventhandler, mscorlib::System::String* baseUri, int32_t lineNumber, int32_t linePosition);
		static void ProcessEntity(System_Xml::System::Xml::Schema::SchemaInfo* sinfo, mscorlib::System::String* name, System_Xml::System::Xml::IValidationEventHandling* eventHandling, mscorlib::System::String* baseUriStr, int32_t lineNumber, int32_t linePosition);
		static System_Xml::System::Xml::Schema::BaseValidator* CreateInstance(System_Xml::System::Xml::ValidationType valType, System_Xml::System::Xml::XmlValidatingReaderImpl* reader, System_Xml::System::Xml::Schema::XmlSchemaCollection* schemaCollection, System_Xml::System::Xml::IValidationEventHandling* eventHandling, bool processIdentityConstraints);
	};
}

