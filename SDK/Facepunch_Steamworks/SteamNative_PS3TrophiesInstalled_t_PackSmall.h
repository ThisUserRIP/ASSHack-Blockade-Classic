#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_PS3TrophiesInstalled_t.h"
namespace Facepunch_Steamworks::SteamNative { struct PS3TrophiesInstalled_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_Result.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct PS3TrophiesInstalled_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t GameID;
		Facepunch_Steamworks::SteamNative::Result Result;
		uint64_t RequiredDiskSpace;
		static Facepunch_Steamworks::SteamNative::PS3TrophiesInstalled_t op_Implicit(Facepunch_Steamworks::SteamNative::PS3TrophiesInstalled_t_PackSmall d);
	};
}

