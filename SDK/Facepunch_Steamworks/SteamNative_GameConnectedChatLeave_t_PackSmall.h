#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GameConnectedChatLeave_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GameConnectedChatLeave_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GameConnectedChatLeave_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDClanChat;
		uint64_t SteamIDUser;
		bool Kicked;
		bool Dropped;
		static Facepunch_Steamworks::SteamNative::GameConnectedChatLeave_t op_Implicit(Facepunch_Steamworks::SteamNative::GameConnectedChatLeave_t_PackSmall d);
	};
}

