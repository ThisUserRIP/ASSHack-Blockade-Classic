#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml::Schema { struct SchemaNames; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCompilationSettings; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObjectTable; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
namespace mscorlib::System { struct Exception; };
#include "System_Xml_Schema_XmlSeverityType.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaException; };

namespace System_Xml::System::Xml::Schema
{
	struct BaseProcessor : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlNameTable* nameTable;
		System_Xml::System::Xml::Schema::SchemaNames* schemaNames;
		System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler;
		System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings;
		int32_t errorCount;
		mscorlib::System::String* NsXml;
		void _ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler);
		void _ctor(System_Xml::System::Xml::XmlNameTable* nameTable, System_Xml::System::Xml::Schema::SchemaNames* schemaNames, System_Xml::System::Xml::Schema::ValidationEventHandler* eventHandler, System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* compilationSettings);
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		System_Xml::System::Xml::Schema::SchemaNames* get_SchemaNames();
		System_Xml::System::Xml::Schema::ValidationEventHandler* get_EventHandler();
		System_Xml::System::Xml::Schema::XmlSchemaCompilationSettings* get_CompilationSettings();
		bool get_HasErrors();
		void AddToTable(System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table, System_Xml::System::Xml::XmlQualifiedName* qname, System_Xml::System::Xml::Schema::XmlSchemaObject* item);
		bool IsValidAttributeGroupRedefine(System_Xml::System::Xml::Schema::XmlSchemaObject* existingObject, System_Xml::System::Xml::Schema::XmlSchemaObject* item, System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table);
		bool IsValidGroupRedefine(System_Xml::System::Xml::Schema::XmlSchemaObject* existingObject, System_Xml::System::Xml::Schema::XmlSchemaObject* item, System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table);
		bool IsValidTypeRedefine(System_Xml::System::Xml::Schema::XmlSchemaObject* existingObject, System_Xml::System::Xml::Schema::XmlSchemaObject* item, System_Xml::System::Xml::Schema::XmlSchemaObjectTable* table);
		void SendValidationEvent(mscorlib::System::String* code, System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg, System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg1, mscorlib::System::String* msg2, System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		void SendValidationEvent(mscorlib::System::String* code, IL2CPP::Array<mscorlib::System::String*>* args, mscorlib::System::Exception* innerException, System_Xml::System::Xml::Schema::XmlSchemaObject* source);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg1, mscorlib::System::String* msg2, mscorlib::System::String* sourceUri, int32_t lineNumber, int32_t linePosition);
		void SendValidationEvent(mscorlib::System::String* code, System_Xml::System::Xml::Schema::XmlSchemaObject* source, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e);
		void SendValidationEvent(mscorlib::System::String* code, mscorlib::System::String* msg, System_Xml::System::Xml::Schema::XmlSchemaObject* source, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		void SendValidationEvent(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity);
		void SendValidationEventNoThrow(System_Xml::System::Xml::Schema::XmlSchemaException* e, System_Xml::System::Xml::Schema::XmlSeverityType severity);
	};
}

