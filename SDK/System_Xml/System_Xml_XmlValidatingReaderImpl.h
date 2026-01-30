#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlReader.h"
namespace System_Xml::System::Xml { struct XmlReader; };
namespace System_Xml::System::Xml { struct XmlTextReaderImpl; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
#include "System_Xml_ValidationType.h"
namespace System_Xml::System::Xml::Schema { struct BaseValidator; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaCollection; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Xml_XmlValidatingReaderImpl_ParsingFunction.h"
namespace System_Xml::System::Xml { struct XmlValidatingReaderImpl_ValidationEventHandling; };
namespace System_Xml::System::Xml { struct XmlParserContext; };
namespace System_Xml::System::Xml { struct ReadContentAsBinaryHelper; };
namespace System_Xml::System::Xml { struct XmlResolver; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
namespace System_Xml::System::Xml { struct XmlReaderSettings; };
#include "System_Xml_XmlNodeType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_ReadState.h"
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct SchemaAttDef; };
namespace System_Xml::System::Xml { struct IDtdInfo; };
namespace System_Xml::System::Xml { struct IDtdDefaultAttributeInfo; };

namespace System_Xml::System::Xml
{
	struct XmlValidatingReaderImpl : System_Xml::System::Xml::XmlReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlReader* coreReader;
		System_Xml::System::Xml::XmlTextReaderImpl* coreReaderImpl;
		System_Xml::System::Xml::IXmlNamespaceResolver* coreReaderNSResolver;
		System_Xml::System::Xml::ValidationType validationType;
		System_Xml::System::Xml::Schema::BaseValidator* validator;
		System_Xml::System::Xml::Schema::XmlSchemaCollection* schemaCollection;
		bool processIdentityConstraints;
		System_Xml::System::Xml::XmlValidatingReaderImpl_ParsingFunction parsingFunction;
		System_Xml::System::Xml::XmlValidatingReaderImpl_ValidationEventHandling* eventHandling;
		System_Xml::System::Xml::XmlParserContext* parserContext;
		System_Xml::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper;
		System_Xml::System::Xml::XmlReader* outerReader;
		struct StaticFields
		{
			System_Xml::System::Xml::XmlResolver* s_tempResolver;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::XmlReader* reader, System_Xml::System::Xml::Schema::ValidationEventHandler* settingsEventHandler, bool processIdentityConstraints);
		System_Xml::System::Xml::XmlReaderSettings* get_Settings();
		System_Xml::System::Xml::XmlNodeType get_NodeType();
		mscorlib::System::String* get_Name();
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_NamespaceURI();
		mscorlib::System::String* get_Prefix();
		bool get_HasValue();
		mscorlib::System::String* get_Value();
		int32_t get_Depth();
		mscorlib::System::String* get_BaseURI();
		bool get_IsEmptyElement();
		bool get_IsDefault();
		System_Xml::System::Xml::ReadState get_ReadState();
		bool get_EOF();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		int32_t get_AttributeCount();
		mscorlib::System::String* GetAttribute(mscorlib::System::String* name);
		mscorlib::System::String* GetAttribute(mscorlib::System::String* localName, mscorlib::System::String* namespaceURI);
		bool MoveToAttribute(mscorlib::System::String* name);
		void MoveToAttribute(int32_t i);
		bool MoveToFirstAttribute();
		bool MoveToNextAttribute();
		bool MoveToElement();
		bool Read();
		void Close();
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		bool ReadAttributeValue();
		bool get_CanResolveEntity();
		void ResolveEntity();
		void MoveOffEntityReference();
		mscorlib::System::String* ReadString();
		int32_t get_LineNumber();
		int32_t get_LinePosition();
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(mscorlib::System::String* namespaceName);
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		mscorlib::System::String* LookupPrefix(mscorlib::System::String* namespaceName);
		System_Xml::System::Xml::ValidationType get_ValidationType();
		System_Xml::System::Xml::Schema::XmlSchemaCollection* get_Schemas();
		void ParseDtdFromParserContext();
		void ValidateDtd();
		void ResolveEntityInternally();
		void SetupValidation(System_Xml::System::Xml::ValidationType valType);
		System_Xml::System::Xml::XmlResolver* GetResolver();
		void ProcessCoreReaderEvent();
		System_Xml::System::Xml::Schema::BaseValidator* get_Validator();
		void set_Validator(System_Xml::System::Xml::Schema::BaseValidator* value);
		System_Xml::System::Xml::XmlNamespaceManager* get_NamespaceManager();
		bool get_StandAlone();
		void set_SchemaTypeObject(mscorlib::System::Object* value);
		mscorlib::System::Object* get_TypedValueObject();
		void set_TypedValueObject(mscorlib::System::Object* value);
		bool AddDefaultAttribute(System_Xml::System::Xml::Schema::SchemaAttDef* attdef);
		System_Xml::System::Xml::IDtdInfo* get_DtdInfo();
		void ValidateDefaultAttributeOnUse(System_Xml::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, System_Xml::System::Xml::XmlTextReaderImpl* coreReader);
	};
}

