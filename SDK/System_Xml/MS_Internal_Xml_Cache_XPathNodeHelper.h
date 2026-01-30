#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "MS_Internal_Xml_Cache_XPathNode.h"
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNode; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace System_Xml::MS::Internal::Xml::Cache
{
	struct XPathNodeHelper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static int32_t GetLocalNamespaces(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageElem, int32_t idxElem, IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNmsp);
		static int32_t GetInScopeNamespaces(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageElem, int32_t idxElem, IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNmsp);
		static bool GetParent(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNode, int32_t& idxNode);
		static int32_t GetLocation(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageNode, int32_t idxNode);
		static bool GetTextFollowing(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageCurrent, int32_t& idxCurrent, IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageEnd, int32_t idxEnd);
		static bool GetNonDescendant(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>& pageNode, int32_t& idxNode);
	};
}

