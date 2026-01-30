#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Xml_XmlReader.h"
namespace System_Xml::System::Xml { struct XmlTextReaderImpl; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System { struct String; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace mscorlib::System::IO { struct TextReader; };
#include "System_Xml_XmlNodeType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Xml_ReadState.h"
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
#include "System_Xml_XmlNamespaceScope.h"
#include "System_Xml_WhitespaceHandling.h"
#include "System_Xml_EntityHandling.h"
namespace System_Xml::System::Xml { struct XmlResolver; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
namespace System_Xml::System::Xml { struct IDtdInfo; };

namespace System_Xml::System::Xml
{
	struct XmlTextReader : System_Xml::System::Xml::XmlReader
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::System::Xml::XmlTextReaderImpl* impl;
		void _ctor(mscorlib::System::IO::Stream* input);
		void _ctor(mscorlib::System::String* url, mscorlib::System::IO::Stream* input, System_Xml::System::Xml::XmlNameTable* nt);
		void _ctor(mscorlib::System::IO::TextReader* input);
		void _ctor(mscorlib::System::IO::TextReader* input, System_Xml::System::Xml::XmlNameTable* nt);
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
		mscorlib::System::String* GetAttribute(mscorlib::System::String* localName, mscorlib::System::String* namespaceURI);
		bool MoveToAttribute(mscorlib::System::String* name);
		void MoveToAttribute(int32_t i);
		bool MoveToFirstAttribute();
		bool MoveToNextAttribute();
		bool MoveToElement();
		bool ReadAttributeValue();
		bool Read();
		bool get_EOF();
		void Close();
		System_Xml::System::Xml::ReadState get_ReadState();
		void Skip();
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		mscorlib::System::String* LookupNamespace(mscorlib::System::String* prefix);
		bool get_CanResolveEntity();
		void ResolveEntity();
		mscorlib::System::String* ReadString();
		int32_t get_LineNumber();
		int32_t get_LinePosition();
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* System_Xml_IXmlNamespaceResolver_GetNamespacesInScope(System_Xml::System::Xml::XmlNamespaceScope scope);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupNamespace(mscorlib::System::String* prefix);
		mscorlib::System::String* System_Xml_IXmlNamespaceResolver_LookupPrefix(mscorlib::System::String* namespaceName);
		void set_Normalization(bool value);
		void set_WhitespaceHandling(System_Xml::System::Xml::WhitespaceHandling value);
		void set_EntityHandling(System_Xml::System::Xml::EntityHandling value);
		void set_XmlResolver(System_Xml::System::Xml::XmlResolver* value);
		System_Xml::System::Xml::XmlTextReaderImpl* get_Impl();
		System_Xml::System::Xml::XmlNamespaceManager* get_NamespaceManager();
		void set_XmlValidatingReaderCompatibilityMode(bool value);
		System_Xml::System::Xml::IDtdInfo* get_DtdInfo();
	};
}

