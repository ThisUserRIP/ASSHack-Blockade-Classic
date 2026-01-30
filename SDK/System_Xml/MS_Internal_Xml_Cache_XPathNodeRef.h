#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "MS_Internal_Xml_Cache_XPathNode.h"
namespace System_Xml::MS::Internal::Xml::Cache { struct XPathNode; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::MS::Internal::Xml::Cache
{
	struct XPathNodeRef
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* page;
		int32_t idx;
		void _ctor(IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* page, int32_t idx);
		IL2CPP::Array<System_Xml::MS::Internal::Xml::Cache::XPathNode>* get_Page();
		int32_t get_Index();
		int32_t GetHashCode();
	};
}

