#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Net_NetworkInformation_Win32_IP_ADDR_STRING.h"
namespace System::System::Net::NetworkInformation { struct Win32_IP_ADDR_STRING; };
#include "System_Net_NetworkInformation_NetBiosNodeType.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace System::System::Net::NetworkInformation
{
	struct Win32_FIXED_INFO
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* HostName;
		mscorlib::System::String* DomainName;
		intptr_t CurrentDnsServer;
		System::Net::NetworkInformation::Win32_IP_ADDR_STRING DnsServerList;
		System::Net::NetworkInformation::NetBiosNodeType NodeType;
		mscorlib::System::String* ScopeId;
		uint32_t EnableRouting;
		uint32_t EnableProxy;
		uint32_t EnableDns;
	};
}

