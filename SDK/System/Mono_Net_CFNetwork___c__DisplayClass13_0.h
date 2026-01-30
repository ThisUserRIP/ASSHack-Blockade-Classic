#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Net_CFNetwork.h"
namespace System::Mono::Net { struct CFNetwork; };
namespace System::Mono::Net { struct CFProxy; };
namespace System::Mono::Net { struct CFRunLoop; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace System::Mono::Net
{
	struct CFNetwork___c__DisplayClass13_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		IL2CPP::Array<System::Mono::Net::CFProxy*>* proxies;
		System::Mono::Net::CFRunLoop* runLoop;
		void _ctor();
		void _ExecuteProxyAutoConfigurationURL_b__0(intptr_t client, intptr_t proxyList, intptr_t error);
	};
}

