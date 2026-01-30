#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlReader.h"
namespace System_Xml::System::Xml { struct XmlReader; };
namespace System_Xml::System::Xml { struct IXmlNamespaceResolver; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaValidator; };
namespace System_Xml::System::Xml { struct XmlResolver; };
namespace System_Xml::System::Xml::Schema { struct ValidationEventHandler; };
#include "System_Xml_XsdValidatingReader_ValidatingReaderState.h"
namespace System_Xml::System::Xml::Schema { struct XmlValueGetter; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct ValidatingReaderNodeData; };
namespace System_Xml::System::Xml { struct AttributePSVIInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections { struct ArrayList; };
namespace System_Xml::System::Xml::Schema { struct Parser; };
namespace mscorlib::System { struct Object; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaInfo; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct XsdCachingReader; };
#include "System_Xml_XmlCharType.h"
namespace System_Xml::System::Xml { struct XmlCharType; };
namespace System_Xml::System::Xml { struct IXmlLineInfo; };
namespace System_Xml::System::Xml { struct ReadContentAsBinaryHelper; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlReaderSettings; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaObject; };
#include "System_Xml_XmlNodeType.h"
namespace System_Xml::System::Xml::Schema { struct IXmlSchemaInfo; };
#include "System_Xml_ReadState.h"
#include "System_Xml_Schema_XmlSchemaValidity.h"
namespace System_Xml::System::Xml::Schema { struct XmlSchemaSimpleType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaType; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaElement; };
namespace System_Xml::System::Xml::Schema { struct XmlSchemaAttribute; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"

namespace System_Xml::System::Xml
{
	struct XsdValidatingReader : System_Xml::System::Xml::XmlReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlReader* coreReader;
		System_Xml::System::Xml::IXmlNamespaceResolver* coreReaderNSResolver;
		System_Xml::System::Xml::IXmlNamespaceResolver* thisNSResolver;
		System_Xml::System::Xml::Schema::XmlSchemaValidator* validator;
		System_Xml::System::Xml::XmlResolver* xmlResolver;
		System_Xml::System::Xml::Schema::ValidationEventHandler* validationEvent;
		System_Xml::System::Xml::XsdValidatingReader_ValidatingReaderState validationState;
		System_Xml::System::Xml::Schema::XmlValueGetter* valueGetter;
		System_Xml::System::Xml::XmlNamespaceManager* nsManager;
		bool manageNamespaces;
		bool processInlineSchema;
		bool replayCache;
		System_Xml::System::Xml::ValidatingReaderNodeData* cachedNode;
		System_Xml::System::Xml::AttributePSVIInfo* attributePSVI;
		int32_t attributeCount;
		int32_t coreReaderAttributeCount;
		int32_t currentAttrIndex;
		IL2CPP::Array<System_Xml::System::Xml::AttributePSVIInfo*>* attributePSVINodes;
		mscorlib::System::Collections::ArrayList* defaultAttributes;
		System_Xml::System::Xml::Schema::Parser* inlineSchemaParser;
		mscorlib::System::Object* atomicValue;
		System_Xml::System::Xml::Schema::XmlSchemaInfo* xmlSchemaInfo;
		mscorlib::System::String* originalAtomicValueString;
		System_Xml::System::Xml::XmlNameTable* coreReaderNameTable;
		System_Xml::System::Xml::XsdCachingReader* cachingReader;
		System_Xml::System::Xml::ValidatingReaderNodeData* textNode;
		mscorlib::System::String* NsXmlNs;
		mscorlib::System::String* NsXs;
		mscorlib::System::String* NsXsi;
		mscorlib::System::String* XsiType;
		mscorlib::System::String* XsiNil;
		mscorlib::System::String* XsdSchema;
		mscorlib::System::String* XsiSchemaLocation;
		mscorlib::System::String* XsiNoNamespaceSchemaLocation;
		System_Xml::System::Xml::XmlCharType xmlCharType;
		System_Xml::System::Xml::IXmlLineInfo* lineInfo;
		System_Xml::System::Xml::ReadContentAsBinaryHelper* readBinaryHelper;
		System_Xml::System::Xml::XsdValidatingReader_ValidatingReaderState savedState;
		struct StaticFields
		{
			mscorlib::System::Type* TypeOfString;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(System_Xml::System::Xml::XmlReader* reader, System_Xml::System::Xml::XmlResolver* xmlResolver, System_Xml::System::Xml::XmlReaderSettings* readerSettings, System_Xml::System::Xml::Schema::XmlSchemaObject* partialValidationType);
		void _ctor(System_Xml::System::Xml::XmlReader* reader, System_Xml::System::Xml::XmlResolver* xmlResolver, System_Xml::System::Xml::XmlReaderSettings* readerSettings);
		void Init();
		void SetupValidator(System_Xml::System::Xml::XmlReaderSettings* readerSettings, System_Xml::System::Xml::XmlReader* reader, System_Xml::System::Xml::Schema::XmlSchemaObject* partialValidationType);
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
		System_Xml::System::Xml::Schema::IXmlSchemaInfo* get_SchemaInfo();
		mscorlib::System::String* ReadContentAsString();
		int32_t get_AttributeCount();
		mscorlib::System::String* GetAttribute(mscorlib::System::String* name);
		mscorlib::System::String* GetAttribute(mscorlib::System::String* name, mscorlib::System::String* namespaceURI);
		bool MoveToAttribute(mscorlib::System::String* name);
		void MoveToAttribute(int32_t i);
		bool MoveToFirstAttribute();
		bool MoveToNextAttribute();
		bool MoveToElement();
		bool Read();
		bool get_EOF();
		void Close();
		System_Xml::System::Xml::ReadState get_ReadState();
		void Skip();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		void ResolveEntity();
		bool ReadAttributeValue();
		bool System_Xml_Schema_IXmlSchemaInfo_get_IsDefault();
		bool System_Xml_Schema_IXmlSchemaInfo_get_IsNil();
		System_Xml::System::Xml::Schema::XmlSchemaValidity System_Xml_Schema_IXmlSchemaInfo_get_Validity();
		System_Xml::System::Xml::Schema::XmlSchemaSimpleType* System_Xml_Schema_IXmlSchemaInfo_get_MemberType();
		System_Xml::System::Xml::Schema::XmlSchemaType* System_Xml_Schema_IXmlSchemaInfo_get_SchemaType();
		System_Xml::System::Xml::Schema::XmlSchemaElement* System_Xml_Schema_IXmlSchemaInfo_get_SchemaElement();
		System_Xml::System::Xml::Schema::XmlSchemaAttribute* System_Xml_Schema_IXmlSchemaInfo_get_SchemaAttribute();
		int32_t get_LineNumber();
		int32_t get_LinePosition();
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(mscorlib::System::String* namespaceName);
		mscorlib::System::Object* GetStringValue();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_ElementXmlType();
		System_Xml::System::Xml::Schema::XmlSchemaType* get_AttributeXmlType();
		System_Xml::System::Xml::Schema::XmlSchemaInfo* get_AttributeSchemaInfo();
		void ProcessReaderEvent();
		void ProcessElementEvent();
		void ProcessEndElementEvent();
		void ValidateAttributes();
		void ClearAttributesInfo();
		System_Xml::System::Xml::AttributePSVIInfo* GetAttributePSVI(mscorlib::System::String* name);
		System_Xml::System::Xml::AttributePSVIInfo* GetAttributePSVI(mscorlib::System::String* localName, mscorlib::System::String* ns);
		System_Xml::System::Xml::ValidatingReaderNodeData* GetDefaultAttribute(mscorlib::System::String* name, bool updatePosition);
		System_Xml::System::Xml::ValidatingReaderNodeData* GetDefaultAttribute(mscorlib::System::String* attrLocalName, mscorlib::System::String* ns, bool updatePosition);
		System_Xml::System::Xml::AttributePSVIInfo* AddAttributePSVI(int32_t attIndex);
		bool IsXSDRoot(mscorlib::System::String* localName, mscorlib::System::String* ns);
		void ProcessInlineSchema();
		mscorlib::System::Object* InternalReadContentAsObject();
		mscorlib::System::Object* InternalReadContentAsObject(bool unwrapTypedValue);
		mscorlib::System::Object* InternalReadContentAsObject(bool unwrapTypedValue, mscorlib::System::String& originalStringValue);
		mscorlib::System::Object* ReadTillEndElement();
		void SwitchReader();
		void ReadAheadForMemberType();
		void GetIsDefault();
		void GetMemberType();
		mscorlib::System::Object* ReturnBoxedValue(mscorlib::System::Object* typedValue, System_Xml::System::Xml::Schema::XmlSchemaType* xmlType, bool unWrap);
		System_Xml::System::Xml::XsdCachingReader* GetCachingReader();
		System_Xml::System::Xml::ValidatingReaderNodeData* CreateDummyTextNode(mscorlib::System::String* attributeValue, int32_t depth);
		void CachingCallBack(System_Xml::System::Xml::XsdCachingReader* cachingReader);
		mscorlib::System::String* GetOriginalAtomicValueStringOfElement();
	};
}

