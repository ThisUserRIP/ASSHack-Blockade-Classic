#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_LobbyDataUpdate_t.h"
namespace Facepunch_Steamworks::SteamNative { struct LobbyDataUpdate_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Facepunch_Steamworks::SteamNative
{
	struct LobbyDataUpdate_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDLobby;
		uint64_t SteamIDMember;
		uint8_t Success;
		static Facepunch_Steamworks::SteamNative::LobbyDataUpdate_t op_Implicit(Facepunch_Steamworks::SteamNative::LobbyDataUpdate_t_PackSmall d);
	};
}

