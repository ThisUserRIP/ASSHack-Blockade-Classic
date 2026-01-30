#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "MS_Internal_Xml_Cache_XPathNode.h"
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNode; };
namespace System_Xml::System::Xml::XPath { struct XPathDocument; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNodePageInfo; };

namespace System_Xml::MS::Internal::Xml::Cache
{
	struct XPathNodeInfoAtom : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* localName;
		mscorlib::System::String* namespaceUri;
		mscorlib::System::String* prefix;
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageParent;
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageSibling;
		System_Xml::System::Xml::XPath::XPathDocument* doc;
		int32_t lineNumBase;
		int32_t linePosBase;
		System_Xml::MS::Internal::Xml::Cache::XPathNodePageInfo* pageInfo;
		System_Xml::MS::Internal::Xml::Cache::XPathNodePageInfo* get_PageInfo();
		mscorlib::System::String* get_LocalName();
		mscorlib::System::String* get_NamespaceUri();
		mscorlib::System::String* get_Prefix();
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* get_SiblingPage();
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* get_ParentPage();
		System_Xml::System::Xml::XPath::XPathDocument* get_Document();
		int32_t get_LineNumberBase();
		int32_t get_LinePositionBase();
	};
}

