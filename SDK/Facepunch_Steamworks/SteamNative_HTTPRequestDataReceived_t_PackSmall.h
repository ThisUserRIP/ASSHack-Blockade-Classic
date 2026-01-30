#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_HTTPRequestDataReceived_t.h"
namespace Facepunch_Steamworks::SteamNative { struct HTTPRequestDataReceived_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Facepunch_Steamworks::SteamNative
{
	struct HTTPRequestDataReceived_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t Request;
		uint64_t ContextValue;
		uint32_t COffset;
		uint32_t CBytesReceived;
		static Facepunch_Steamworks::SteamNative::HTTPRequestDataReceived_t op_Implicit(Facepunch_Steamworks::SteamNative::HTTPRequestDataReceived_t_PackSmall d);
	};
}

