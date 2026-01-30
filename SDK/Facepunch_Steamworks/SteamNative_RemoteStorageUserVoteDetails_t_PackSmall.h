#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_RemoteStorageUserVoteDetails_t.h"
namespace Facepunch_Steamworks::SteamNative { struct RemoteStorageUserVoteDetails_t; };
#include "SteamNative_Result.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_WorkshopVote.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct RemoteStorageUserVoteDetails_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Result Result;
		uint64_t PublishedFileId;
		Facepunch_Steamworks::SteamNative::WorkshopVote Vote;
		static Facepunch_Steamworks::SteamNative::RemoteStorageUserVoteDetails_t op_Implicit(Facepunch_Steamworks::SteamNative::RemoteStorageUserVoteDetails_t_PackSmall d);
	};
}

