#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace System::Mono::Net { struct CFDictionary; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::Mono::Net
{
	struct CFProxySettings : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Mono::Net::CFDictionary* settings;
		struct StaticFields
		{
			intptr_t kCFNetworkProxiesHTTPEnable;
			intptr_t kCFNetworkProxiesHTTPPort;
			intptr_t kCFNetworkProxiesHTTPProxy;
			intptr_t kCFNetworkProxiesProxyAutoConfigEnable;
			intptr_t kCFNetworkProxiesProxyAutoConfigJavaScript;
			intptr_t kCFNetworkProxiesProxyAutoConfigURLString;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(System::Mono::Net::CFDictionary* settings);
		System::Mono::Net::CFDictionary* get_Dictionary();
	};
}

