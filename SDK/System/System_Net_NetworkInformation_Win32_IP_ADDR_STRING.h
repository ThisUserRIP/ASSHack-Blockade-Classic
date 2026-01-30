#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace System::System::Net::NetworkInformation
{
	struct Win32_IP_ADDR_STRING
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t Next;
		mscorlib::System::String* IpAddress;
		mscorlib::System::String* IpMask;
		uint32_t Context;
	};
}

