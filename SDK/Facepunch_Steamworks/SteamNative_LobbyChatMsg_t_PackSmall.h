#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_LobbyChatMsg_t.h"
namespace Facepunch_Steamworks::SteamNative { struct LobbyChatMsg_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct LobbyChatMsg_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDLobby;
		uint64_t SteamIDUser;
		uint8_t ChatEntryType;
		uint32_t ChatID;
		static Facepunch_Steamworks::SteamNative::LobbyChatMsg_t op_Implicit(Facepunch_Steamworks::SteamNative::LobbyChatMsg_t_PackSmall d);
	};
}

