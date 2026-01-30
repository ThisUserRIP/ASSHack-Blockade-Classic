#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_LeaderboardScoreUploaded_t.h"
namespace Facepunch_Steamworks::SteamNative { struct LeaderboardScoreUploaded_t; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct LeaderboardScoreUploaded_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint8_t Success;
		uint64_t SteamLeaderboard;
		int32_t Score;
		uint8_t ScoreChanged;
		int32_t GlobalRankNew;
		int32_t GlobalRankPrevious;
		static Facepunch_Steamworks::SteamNative::LeaderboardScoreUploaded_t op_Implicit(Facepunch_Steamworks::SteamNative::LeaderboardScoreUploaded_t_PackSmall d);
	};
}

