#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_LobbyChatUpdate_t.h"
namespace Facepunch_Steamworks::SteamNative { struct LobbyChatUpdate_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct LobbyChatUpdate_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDLobby;
		uint64_t SteamIDUserChanged;
		uint64_t SteamIDMakingChange;
		uint32_t GfChatMemberStateChange;
		static Facepunch_Steamworks::SteamNative::LobbyChatUpdate_t op_Implicit(Facepunch_Steamworks::SteamNative::LobbyChatUpdate_t_PackSmall d);
	};
}

