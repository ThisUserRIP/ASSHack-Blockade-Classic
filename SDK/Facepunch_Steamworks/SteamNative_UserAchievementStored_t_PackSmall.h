#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_UserAchievementStored_t.h"
namespace Facepunch_Steamworks::SteamNative { struct UserAchievementStored_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct UserAchievementStored_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t GameID;
		bool GroupAchievement;
		mscorlib::System::String* AchievementName;
		uint32_t CurProgress;
		uint32_t MaxProgress;
		static Facepunch_Steamworks::SteamNative::UserAchievementStored_t op_Implicit(Facepunch_Steamworks::SteamNative::UserAchievementStored_t_PackSmall d);
	};
}

