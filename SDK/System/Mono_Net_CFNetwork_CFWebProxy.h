#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Mono_Net_CFNetwork.h"
namespace System::Mono::Net { struct CFNetwork; };
namespace System::System::Net { struct ICredentials; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct Uri; };
namespace System::Mono::Net { struct CFProxy; };
namespace System::System::Net { struct NetworkCredential; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };

namespace System::Mono::Net
{
	struct CFNetwork_CFWebProxy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Net::ICredentials* credentials;
		bool userSpecified;
		void _ctor();
		System::Net::ICredentials* get_Credentials();
		static System::Uri* GetProxyUri(System::Mono::Net::CFProxy* proxy, System::Net::NetworkCredential& credentials);
		static System::Uri* GetProxyUriFromScript(intptr_t script, System::Uri* targetUri, System::Net::NetworkCredential& credentials);
		static System::Uri* ExecuteProxyAutoConfigurationURL(intptr_t proxyAutoConfigURL, System::Uri* targetUri, System::Net::NetworkCredential& credentials);
		static System::Uri* SelectProxy(IL2CPP::Array<System::Mono::Net::CFProxy*>* proxies, System::Uri* targetUri, System::Net::NetworkCredential& credentials);
		System::Uri* GetProxy(System::Uri* targetUri);
		bool IsBypassed(System::Uri* targetUri);
	};
}

