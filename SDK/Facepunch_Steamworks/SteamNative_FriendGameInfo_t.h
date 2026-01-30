#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };

namespace Facepunch_Steamworks::SteamNative
{
	struct FriendGameInfo_t
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t GameID;
		uint32_t GameIP;
		uint16_t GamePort;
		uint16_t QueryPort;
		uint64_t SteamIDLobby;
	};
}

