#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "MS_Internal_Xml_Cache_XPathNode.h"
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNode; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace System_Xml::System::Xml { struct XmlNameTable; };
#include "MS_Internal_Xml_Cache_XPathNodeRef.h"
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNodeRef; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };

namespace System_Xml::System::Xml::XPath
{
	struct XPathDocument : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageXmlNmsp;
		int32_t idxXmlNmsp;
		System_Xml::System::Xml::XmlNameTable* nameTable;
		mscorlib::System::Collections::Generic::Dictionary_2<System_Xml::MS::Internal::Xml::Cache::XPathNodeRef, System_Xml::MS::Internal::Xml::Cache::XPathNodeRef>* mapNmsp;
		System_Xml::System::Xml::XmlNameTable* get_NameTable();
		int32_t GetXmlNamespaceNode(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageXmlNmsp);
		int32_t LookupNamespaces(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageElem, int32_t idxElem, IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNmsp);
	};
}

