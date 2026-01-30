#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\System_Configuration\System_Configuration_ConfigurationElement.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Net_Sockets_IPProtectionLevel.h"
namespace System_Configuration::System::Configuration { struct ConfigurationPropertyCollection; };

namespace System::System::Net::Configuration
{
	struct SocketElement : System_Configuration::System::Configuration::ConfigurationElement
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		bool get_AlwaysUseCompletionPortsForAccept();
		void set_AlwaysUseCompletionPortsForAccept(bool value);
		bool get_AlwaysUseCompletionPortsForConnect();
		void set_AlwaysUseCompletionPortsForConnect(bool value);
		System::Net::Sockets::IPProtectionLevel get_IPProtectionLevel();
		void set_IPProtectionLevel(System::Net::Sockets::IPProtectionLevel value);
		System_Configuration::System::Configuration::ConfigurationPropertyCollection* get_Properties();
		void PostDeserialize();
	};
}

