#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System { struct Uri; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Int32; };

namespace System::System::Net
{
	struct AutoWebProxyScriptEngine : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool GetProxies(System::Uri* destination, mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>& proxyList);
		bool GetProxies(System::Uri* destination, mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>& proxyList, int32_t& syncStatus);
	};
}

