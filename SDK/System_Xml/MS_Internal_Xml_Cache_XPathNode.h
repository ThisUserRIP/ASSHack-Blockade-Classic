#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNodeInfoAtom; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { struct String; };
#include "System_Xml_XPath_XPathNodeType.h"
namespace System_Xml::System::Xml::XPath { struct XPathDocument; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNodePageInfo; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::MS::Internal::Xml::Cache
{
	struct XPathNode
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System_Xml::MS::Internal::Xml::Cache::XPathNodeInfoAtom* info;
		uint16_t idxSibling;
		uint16_t idxParent;
		uint16_t idxSimilar;
		uint16_t posOffset;
		uint32_t props;
		mscorlib::System::String* value;
		System_Xml::System::Xml::XPath::XPathNodeType get_NodeType();
		mscorlib::System::String* get_Prefix();
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_NamespaceUri();
		System_Xml::System::Xml::XPath::XPathDocument* get_Document();
		int32_t get_LineNumber();
		int32_t get_LinePosition();
		int32_t get_CollapsedLinePosition();
		System_Xml::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo();
		int32_t GetParent(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNode);
		int32_t GetSibling(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNode);
		bool get_IsXmlNamespaceNode();
		bool get_HasSibling();
		bool get_HasCollapsedText();
		bool get_IsText();
		bool get_HasNamespaceDecls();
		mscorlib::System::String* get_Value();
	};
}

