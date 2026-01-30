#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_UserAchievementIconFetched_t.h"
namespace Facepunch_Steamworks::SteamNative { struct UserAchievementIconFetched_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct UserAchievementIconFetched_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t GameID;
		mscorlib::System::String* AchievementName;
		bool Achieved;
		int32_t IconHandle;
		static Facepunch_Steamworks::SteamNative::UserAchievementIconFetched_t op_Implicit(Facepunch_Steamworks::SteamNative::UserAchievementIconFetched_t_PackSmall d);
	};
}

