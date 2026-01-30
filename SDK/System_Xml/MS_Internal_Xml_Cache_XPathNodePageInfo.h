#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "MS_Internal_Xml_Cache_XPathNode.h"
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNode; };

namespace System_Xml::MS::Internal::Xml::Cache
{
	struct XPathNodePageInfo : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t pageNum;
		int32_t nodeCount;
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* pageNext;
		int32_t get_PageNumber();
		int32_t get_NodeCount();
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* get_NextPage();
	};
}

