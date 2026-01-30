#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GameLobbyJoinRequested_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GameLobbyJoinRequested_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GameLobbyJoinRequested_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDLobby;
		uint64_t SteamIDFriend;
		static Facepunch_Steamworks::SteamNative::GameLobbyJoinRequested_t op_Implicit(Facepunch_Steamworks::SteamNative::GameLobbyJoinRequested_t_PackSmall d);
	};
}

