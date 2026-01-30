#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlReader.h"
namespace System_Xml::System::Xml { struct XmlReader; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct ValidatingReaderNodeData; };
#include "System_Xml_XsdCachingReader_CachingReaderState.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System_Xml::System::Xml { struct CachingEventHandler; };
namespace System_Xml::System::Xml { struct IXmlLineInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System_Xml::System::Xml { struct XmlReaderSettings; };
#include "System_Xml_XmlNodeType.h"
namespace mscorlib::System { struct String; };
#include "System_Xml_ReadState.h"

namespace System_Xml::System::Xml
{
	struct XsdCachingReader : System_Xml::System::Xml::XmlReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlReader* coreReader;
		System_Xml::System::Xml::XmlNameTable* coreReaderNameTable;
		IL2CPP::Array<System_Xml::System::Xml::ValidatingReaderNodeData*>* contentEvents;
		IL2CPP::Array<System_Xml::System::Xml::ValidatingReaderNodeData*>* attributeEvents;
		System_Xml::System::Xml::ValidatingReaderNodeData* cachedNode;
		System_Xml::System::Xml::XsdCachingReader_CachingReaderState cacheState;
		int32_t contentIndex;
		int32_t attributeCount;
		bool returnOriginalStringValues;
		System_Xml::System::Xml::CachingEventHandler* cacheHandler;
		int32_t currentAttrIndex;
		int32_t currentContentIndex;
		bool readAhead;
		System_Xml::System::Xml::IXmlLineInfo* lineInfo;
		System_Xml::System::Xml::ValidatingReaderNodeData* textNode;
		void _ctor(System_Xml::System::Xml::XmlReader* reader, System_Xml::System::Xml::IXmlLineInfo* lineInfo, System_Xml::System::Xml::CachingEventHandler* handlerMethod);
		void Init();
		void Reset(System_Xml::System::Xml::XmlReader* reader);
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
		int32_t get_AttributeCount();
		mscorlib::System::String* GetAttribute(mscorlib::System::String* name);
		mscorlib::System::String* GetAttribute(mscorlib::System::String* name, mscorlib::System::String* namespaceURI);
		bool MoveToAttribute(mscorlib::System::String* name);
		void MoveToAttribute(int32_t i);
		bool MoveToFirstAttribute();
		bool MoveToNextAttribute();
		bool MoveToElement();
		bool Read();
		System_Xml::System::Xml::ValidatingReaderNodeData* RecordTextNode(mscorlib::System::String* textValue, mscorlib::System::String* originalStringValue, int32_t depth, int32_t lineNo, int32_t linePos);
		void SwitchTextNodeAndEndElement(mscorlib::System::String* textValue, mscorlib::System::String* originalStringValue);
		void RecordEndElementNode();
		mscorlib::System::String* ReadOriginalContentAsString();
		bool get_EOF();
		void Close();
		System_Xml::System::Xml::ReadState get_ReadState();
		void Skip();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		void ResolveEntity();
		bool ReadAttributeValue();
		int32_t System_Xml_IXmlLineInfo_get_LineNumber();
		int32_t System_Xml_IXmlLineInfo_get_LinePosition();
		void SetToReplayMode();
		System_Xml::System::Xml::XmlReader* GetCoreReader();
		System_Xml::System::Xml::IXmlLineInfo* GetLineInfo();
		void ClearAttributesInfo();
		System_Xml::System::Xml::ValidatingReaderNodeData* AddAttribute(int32_t attIndex);
		System_Xml::System::Xml::ValidatingReaderNodeData* AddContent(System_Xml::System::Xml::XmlNodeType nodeType);
		void RecordAttributes();
		int32_t GetAttributeIndexWithoutPrefix(mscorlib::System::String* name);
		int32_t GetAttributeIndexWithPrefix(mscorlib::System::String* name);
		System_Xml::System::Xml::ValidatingReaderNodeData* CreateDummyTextNode(mscorlib::System::String* attributeValue, int32_t depth);
	};
}

