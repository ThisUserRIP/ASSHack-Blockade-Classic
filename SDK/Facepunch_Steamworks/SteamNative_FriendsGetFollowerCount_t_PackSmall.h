#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_FriendsGetFollowerCount_t.h"
namespace Facepunch_Steamworks::SteamNative { struct FriendsGetFollowerCount_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct FriendsGetFollowerCount_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint64_t SteamID;
		int32_t Count;
		static Facepunch_Steamworks::SteamNative::FriendsGetFollowerCount_t op_Implicit(Facepunch_Steamworks::SteamNative::FriendsGetFollowerCount_t_PackSmall d);
	};
}

