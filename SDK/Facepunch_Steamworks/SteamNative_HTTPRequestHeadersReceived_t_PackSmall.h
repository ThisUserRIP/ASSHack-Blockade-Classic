#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_HTTPRequestHeadersReceived_t.h"
namespace Facepunch_Steamworks::SteamNative { struct HTTPRequestHeadersReceived_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Facepunch_Steamworks::SteamNative
{
	struct HTTPRequestHeadersReceived_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t Request;
		uint64_t ContextValue;
		static Facepunch_Steamworks::SteamNative::HTTPRequestHeadersReceived_t op_Implicit(Facepunch_Steamworks::SteamNative::HTTPRequestHeadersReceived_t_PackSmall d);
	};
}

