#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::SteamNative { struct Platform_Interface; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct BaseSteamworks; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "SteamNative_CSteamID.h"
namespace Facepunch_Steamworks::SteamNative { struct CSteamID; };
namespace Facepunch_Steamworks::SteamNative { struct FriendGameInfo_t; };
namespace Facepunch_Steamworks::SteamNative { struct FriendGameInfo_t; };
#include "SteamNative_ChatEntryType.h"
namespace mscorlib::System { struct String; };
#include "SteamNative_PersonaState.h"
#include "SteamNative_FriendRelationship.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct SteamFriends : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::SteamNative::Platform_Interface* platform;
		Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::BaseSteamworks* steamworks, intptr_t pointer);
		void Dispose();
		uint64_t GetFriendByIndex(int32_t iFriend, int32_t iFriendFlags);
		int32_t GetFriendCount(int32_t iFriendFlags);
		bool GetFriendGamePlayed(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend, Facepunch_Steamworks::SteamNative::FriendGameInfo_t& pFriendGameInfo);
		int32_t GetFriendMessage(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend, int32_t iMessageID, intptr_t pvData, int32_t cubData, Facepunch_Steamworks::SteamNative::ChatEntryType& peChatEntryType);
		mscorlib::System::String* GetFriendPersonaName(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend);
		Facepunch_Steamworks::SteamNative::PersonaState GetFriendPersonaState(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend);
		Facepunch_Steamworks::SteamNative::FriendRelationship GetFriendRelationship(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend);
		int32_t GetLargeFriendAvatar(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend);
		int32_t GetMediumFriendAvatar(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend);
		mscorlib::System::String* GetPersonaName();
		int32_t GetSmallFriendAvatar(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend);
		void RequestFriendRichPresence(Facepunch_Steamworks::SteamNative::CSteamID steamIDFriend);
		bool RequestUserInformation(Facepunch_Steamworks::SteamNative::CSteamID steamIDUser, bool bRequireNameOnly);
	};
}

