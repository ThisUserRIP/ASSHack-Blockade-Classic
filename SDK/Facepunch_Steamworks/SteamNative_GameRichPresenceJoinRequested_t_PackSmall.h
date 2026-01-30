#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GameRichPresenceJoinRequested_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GameRichPresenceJoinRequested_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GameRichPresenceJoinRequested_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDFriend;
		mscorlib::System::String* Connect;
		static Facepunch_Steamworks::SteamNative::GameRichPresenceJoinRequested_t op_Implicit(Facepunch_Steamworks::SteamNative::GameRichPresenceJoinRequested_t_PackSmall d);
	};
}

