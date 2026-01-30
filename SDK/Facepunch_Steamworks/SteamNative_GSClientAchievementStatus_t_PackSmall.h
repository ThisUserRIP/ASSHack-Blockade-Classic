#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_GSClientAchievementStatus_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GSClientAchievementStatus_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::SteamNative
{
	struct GSClientAchievementStatus_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamID;
		mscorlib::System::String* PchAchievement;
		bool Unlocked;
		static Facepunch_Steamworks::SteamNative::GSClientAchievementStatus_t op_Implicit(Facepunch_Steamworks::SteamNative::GSClientAchievementStatus_t_PackSmall d);
	};
}

