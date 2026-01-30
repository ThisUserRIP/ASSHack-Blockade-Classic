#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace System::System::Net::Cache { struct RequestCache; };
namespace System::System::Net::Cache { struct RequestCacheValidator; };

namespace System::System::Net::Cache
{
	struct RequestCacheBinding : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::Cache::RequestCache* m_RequestCache;
		System::Net::Cache::RequestCacheValidator* m_CacheValidator;
		System::Net::Cache::RequestCache* get_Cache();
		System::Net::Cache::RequestCacheValidator* get_Validator();
	};
}

