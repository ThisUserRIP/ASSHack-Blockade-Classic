#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GameConnectedFriendChatMsg_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GameConnectedFriendChatMsg_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GameConnectedFriendChatMsg_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDUser;
		int32_t MessageID;
		static Facepunch_Steamworks::SteamNative::GameConnectedFriendChatMsg_t op_Implicit(Facepunch_Steamworks::SteamNative::GameConnectedFriendChatMsg_t_PackSmall d);
	};
}

