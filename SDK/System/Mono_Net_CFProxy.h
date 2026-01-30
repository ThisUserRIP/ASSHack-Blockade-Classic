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
#include "Mono_Net_CFProxyType.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::Mono::Net
{
	struct CFProxy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::Mono::Net::CFDictionary* settings;
		struct StaticFields
		{
			intptr_t kCFProxyAutoConfigurationJavaScriptKey;
			intptr_t kCFProxyAutoConfigurationURLKey;
			intptr_t kCFProxyHostNameKey;
			intptr_t kCFProxyPasswordKey;
			intptr_t kCFProxyPortNumberKey;
			intptr_t kCFProxyTypeKey;
			intptr_t kCFProxyUsernameKey;
			intptr_t kCFProxyTypeAutoConfigurationURL;
			intptr_t kCFProxyTypeAutoConfigurationJavaScript;
			intptr_t kCFProxyTypeFTP;
			intptr_t kCFProxyTypeHTTP;
			intptr_t kCFProxyTypeHTTPS;
			intptr_t kCFProxyTypeSOCKS;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor(System::Mono::Net::CFDictionary* settings);
		static System::Mono::Net::CFProxyType CFProxyTypeToEnum(intptr_t type);
		intptr_t get_AutoConfigurationJavaScript();
		intptr_t get_AutoConfigurationUrl();
		mscorlib::System::String* get_HostName();
		mscorlib::System::String* get_Password();
		int32_t get_Port();
		System::Mono::Net::CFProxyType get_ProxyType();
		mscorlib::System::String* get_Username();
	};
}

