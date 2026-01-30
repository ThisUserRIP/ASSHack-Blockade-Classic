#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_FriendsEnumerateFollowingList_t.h"
namespace Facepunch_Steamworks::SteamNative { struct FriendsEnumerateFollowingList_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Facepunch_Steamworks::SteamNative
{
	struct FriendsEnumerateFollowingList_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		IL2CPP::Array<uint64_t>* GSteamID;
		int32_t ResultsReturned;
		int32_t TotalResultCount;
		static Facepunch_Steamworks::SteamNative::FriendsEnumerateFollowingList_t op_Implicit(Facepunch_Steamworks::SteamNative::FriendsEnumerateFollowingList_t_PackSmall d);
	};
}

