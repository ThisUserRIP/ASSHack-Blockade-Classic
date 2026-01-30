#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct Object; };
namespace System::Mono::Net { struct CFNetwork_GetProxyData; };
namespace System::System::Collections::Generic { template <typename T> struct Queue_1; };
namespace mscorlib::System::Threading { struct AutoResetEvent; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace System::Mono::Net { struct CFNetwork_CFProxyAutoConfigurationResultCallback; };
namespace System::Mono::Net { struct CFStreamClientContext; };
namespace System::Mono::Net { struct CFStreamClientContext; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::Mono::Net { struct CFArray; };
namespace System::Mono::Net { struct CFUrl; };
namespace System::Mono::Net { struct CFProxy; };
namespace System::System { struct Uri; };
namespace System::Mono::Net { struct CFDictionary; };
namespace System::Mono::Net { struct CFProxySettings; };
namespace System::System::Net { struct IWebProxy; };

namespace System::Mono::Net
{
	struct CFNetwork : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::Object* lock_obj;
			System::Collections::Generic::Queue_1<System::Mono::Net::CFNetwork_GetProxyData>* get_proxy_queue;
			mscorlib::System::Threading::AutoResetEvent* proxy_event;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static intptr_t CFNetworkCopyProxiesForAutoConfigurationScriptSequential(intptr_t proxyAutoConfigurationScript, intptr_t targetURL, intptr_t& error);
		static intptr_t CFNetworkExecuteProxyAutoConfigurationURL(intptr_t proxyAutoConfigURL, intptr_t targetURL, System::Mono::Net::CFNetwork_CFProxyAutoConfigurationResultCallback* cb, System::Mono::Net::CFStreamClientContext& clientContext);
		static void CFNetworkCopyProxiesForAutoConfigurationScriptThread();
		static intptr_t CFNetworkCopyProxiesForAutoConfigurationScript(intptr_t proxyAutoConfigurationScript, intptr_t targetURL, intptr_t& error);
		static System::Mono::Net::CFArray* CopyProxiesForAutoConfigurationScript(intptr_t proxyAutoConfigurationScript, System::Mono::Net::CFUrl* targetURL);
		static IL2CPP::Array<System::Mono::Net::CFProxy*>* GetProxiesForAutoConfigurationScript(intptr_t proxyAutoConfigurationScript, System::Mono::Net::CFUrl* targetURL);
		static IL2CPP::Array<System::Mono::Net::CFProxy*>* GetProxiesForAutoConfigurationScript(intptr_t proxyAutoConfigurationScript, System::Uri* targetUri);
		static IL2CPP::Array<System::Mono::Net::CFProxy*>* ExecuteProxyAutoConfigurationURL(intptr_t proxyAutoConfigURL, System::Uri* targetURL);
		static intptr_t CFNetworkCopyProxiesForURL(intptr_t url, intptr_t proxySettings);
		static System::Mono::Net::CFArray* CopyProxiesForURL(System::Mono::Net::CFUrl* url, System::Mono::Net::CFDictionary* proxySettings);
		static IL2CPP::Array<System::Mono::Net::CFProxy*>* GetProxiesForURL(System::Mono::Net::CFUrl* url, System::Mono::Net::CFProxySettings* proxySettings);
		static IL2CPP::Array<System::Mono::Net::CFProxy*>* GetProxiesForUri(System::Uri* uri, System::Mono::Net::CFProxySettings* proxySettings);
		static intptr_t CFNetworkCopySystemProxySettings();
		static System::Mono::Net::CFProxySettings* GetSystemProxySettings();
		static System::Net::IWebProxy* GetDefaultProxy();
		static void _cctor();
	};
}

