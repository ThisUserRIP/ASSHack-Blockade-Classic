#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_Schema_BaseValidator.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct HWStack; };
namespace mscorlib::System::Collections { struct Hashtable; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml::Schema { struct IdRefNode; };
namespace System_Xml::System::Xml::Schema { struct Parser; };
#include "System_Xml_Schema_XmlSchemaContentProcessing.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaDatatype; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct BaseValidator; };
namespace System_Xml::System::Xml { struct XmlValidatingReaderImpl; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollection; };
namespace System_Xml::System::Xml { struct IValidationEventHandling; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml { struct XmlQualifiedName; };
namespace System_Xml::System::Xml::Schema { struct SchemaElementDecl; };
#include "System_Xml_XmlTokenizedType.h"
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };

namespace System_Xml::System::Xml::Schema
{
	struct XsdValidator : System_Xml::System::Xml::Schema::BaseValidator
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t startIDConstraint;
		System_Xml::System::Xml::HWStack* validationStack;
		mscorlib::System::Collections::Hashtable* attPresence;
		System_Xml::System::Xml::XmlNamespaceManager* nsManager;
		bool bManageNamespaces;
		mscorlib::System::Collections::Hashtable* IDs;
		System_Xml::System::Xml::Schema::IdRefNode* idRefListHead;
		System_Xml::System::Xml::Schema::Parser* inlineSchemaParser;
		System_Xml::System::Xml::Schema::XmlSchemaContentProcessing processContents;
		mscorlib::System::String* NsXmlNs;
		mscorlib::System::String* NsXs;
		mscorlib::System::String* NsXsi;
		mscorlib::System::String* XsiType;
		mscorlib::System::String* XsiNil;
		mscorlib::System::String* XsiSchemaLocation;
		mscorlib::System::String* XsiNoNamespaceSchemaLocation;
		mscorlib::System::String* XsdSchema;
		struct StaticFields
		{
			System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtCDATA;
			System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtQName;
			System_Xml::System::Xml::Schema::XmlSchemaDatatype* dtStringArray;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::Schema::BaseValidator* validator);
		void _ctor(System_Xml::System::Xml::XmlValidatingReaderImpl* reader, System_Xml::System::Xml::Schema::XmlSchemaCollection* schemaCollection, System_Xml::System::Xml::IValidationEventHandling* eventHandling);
		void Init();
		void Validate();
		void CompleteValidation();
		bool get_IsInlineSchemaStarted();
		void ProcessInlineSchema();
		void ValidateElement();
		mscorlib::System::Object* ValidateChildElement();
		void ProcessElement(mscorlib::System::Object* particle);
		void ProcessXsiAttributes(System_Xml::System::Xml::XmlQualifiedName& xsiType, mscorlib::System::String& xsiNil);
		void ValidateEndElement();
		System_Xml::System::Xml::Schema::SchemaElementDecl* FastGetElementDecl(mscorlib::System::Object* particle);
		System_Xml::System::Xml::Schema::SchemaElementDecl* ThoroughGetElementDecl(System_Xml::System::Xml::Schema::SchemaElementDecl* elementDecl, System_Xml::System::Xml::XmlQualifiedName* xsiType, mscorlib::System::String* xsiNil);
		void ValidateStartElement();
		void ValidateEndStartElement();
		void LoadSchemaFromLocation(mscorlib::System::String* uri, mscorlib::System::String* url);
		void LoadSchema(mscorlib::System::String* uri, mscorlib::System::String* url);
		bool get_HasSchema();
		bool get_PreserveWhitespace();
		void ProcessTokenizedType(System_Xml::System::Xml::XmlTokenizedType ttype, mscorlib::System::String* name);
		void CheckValue(mscorlib::System::String* value, System_Xml::System::Xml::Schema::SchemaAttDef* attdef);
		void AddID(mscorlib::System::String* name, mscorlib::System::Object* node);
		mscorlib::System::Object* FindId(mscorlib::System::String* name);
		bool IsXSDRoot(mscorlib::System::String* localName, mscorlib::System::String* ns);
		void Push(System_Xml::System::Xml::XmlQualifiedName* elementName);
		void Pop();
		void CheckForwardRefs();
		void ValidateStartElementIdentityConstraints();
		bool get_HasIdentityConstraints();
		void AddIdentityConstraints();
		void ElementIdentityConstraints();
		void AttributeIdentityConstraints(mscorlib::System::String* name, mscorlib::System::String* ns, mscorlib::System::Object* obj, mscorlib::System::String* sobj, System_Xml::System::Xml::Schema::SchemaAttDef* attdef);
		mscorlib::System::Object* UnWrapUnion(mscorlib::System::Object* typedValue);
		void EndElementIdentityConstraints();
		static void _cctor();
	};
}

