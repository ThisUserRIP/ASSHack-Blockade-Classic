#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_ClientGameServerDeny_t.h"
namespace Facepunch_Steamworks::SteamNative { struct ClientGameServerDeny_t; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace Facepunch_Steamworks::SteamNative
{
	struct ClientGameServerDeny_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t AppID;
		uint32_t GameServerIP;
		uint16_t GameServerPort;
		uint16_t Secure;
		uint32_t Reason;
		static Facepunch_Steamworks::SteamNative::ClientGameServerDeny_t op_Implicit(Facepunch_Steamworks::SteamNative::ClientGameServerDeny_t_PackSmall d);
	};
}

