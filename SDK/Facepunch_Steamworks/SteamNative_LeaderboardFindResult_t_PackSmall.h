#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_LeaderboardFindResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct LeaderboardFindResult_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };

namespace Facepunch_Steamworks::SteamNative
{
	struct LeaderboardFindResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamLeaderboard;
		uint8_t LeaderboardFound;
		static Facepunch_Steamworks::SteamNative::LeaderboardFindResult_t op_Implicit(Facepunch_Steamworks::SteamNative::LeaderboardFindResult_t_PackSmall d);
	};
}

