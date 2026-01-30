#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace System_Xml::System::Xml { struct XmlReaderSettings; };
#include "System_Xml_XmlNodeType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml::Schema { struct IXmlSchemaInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Xml_ReadState.h"
namespace System_Xml::System::Xml { struct XmlNameTable; };
namespace System_Xml::System::Xml { struct XmlNamespaceManager; };
namespace mscorlib::System { struct Exception; };
namespace System_Xml::System::Xml { struct IXmlLineInfo; };
namespace System_Xml::System::Xml { struct IDtdInfo; };
namespace mscorlib::System::IO { struct Stream; };
namespace mscorlib::System::IO { struct TextReader; };

namespace System_Xml::System::Xml
{
	struct XmlReader : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			uint32_t IsTextualNodeBitmap;
			uint32_t CanReadContentAsBitmap;
			uint32_t HasValueBitmap;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
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
		System_Xml::System::Xml::XmlNodeType MoveToContent();
		void ReadStartElement();
		void ReadStartElement(mscorlib::System::String* name);
		mscorlib::System::String* ReadElementString();
		void ReadEndElement();
		bool IsStartElement();
		bool IsStartElement(mscorlib::System::String* localname, mscorlib::System::String* ns);
		void Dispose();
		void Dispose(bool disposing);
		System_Xml::System::Xml::XmlNamespaceManager* get_NamespaceManager();
		static bool IsTextualNode(System_Xml::System::Xml::XmlNodeType nodeType);
		static bool CanReadContentAs(System_Xml::System::Xml::XmlNodeType nodeType);
		static bool HasValueInternal(System_Xml::System::Xml::XmlNodeType nodeType);
		bool SkipSubtree();
		mscorlib::System::Exception* CreateReadContentAsException(mscorlib::System::String* methodName);
		bool CanReadContentAs();
		static mscorlib::System::Exception* CreateReadContentAsException(mscorlib::System::String* methodName, System_Xml::System::Xml::XmlNodeType nodeType, System_Xml::System::Xml::IXmlLineInfo* lineInfo);
		static mscorlib::System::String* AddLineInfo(mscorlib::System::String* message, System_Xml::System::Xml::IXmlLineInfo* lineInfo);
		mscorlib::System::String* InternalReadContentAsString();
		System_Xml::System::Xml::IDtdInfo* get_DtdInfo();
		static System_Xml::System::Xml::XmlReader* Create(mscorlib::System::IO::Stream* input, System_Xml::System::Xml::XmlReaderSettings* settings, mscorlib::System::String* baseUri);
		static System_Xml::System::Xml::XmlReader* Create(mscorlib::System::IO::TextReader* input);
		static System_Xml::System::Xml::XmlReader* Create(mscorlib::System::IO::TextReader* input, System_Xml::System::Xml::XmlReaderSettings* settings, mscorlib::System::String* baseUri);
		static int32_t CalcBufferSize(mscorlib::System::IO::Stream* input);
		void _ctor();
		static void _cctor();
	};
}

