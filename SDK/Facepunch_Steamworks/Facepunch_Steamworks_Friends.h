#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Friends_ChatMessageDelegate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Friends_JoinRequestedDelegate; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct SteamFriend; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Friends_PersonaCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "SteamNative_GameConnectedFriendChatMsg_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GameConnectedFriendChatMsg_t; };
#include "SteamNative_GameRichPresenceJoinRequested_t.h"
namespace Facepunch_Steamworks::SteamNative { struct GameRichPresenceJoinRequested_t; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Image; };
#include "Facepunch_Steamworks_Friends_AvatarSize.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "SteamNative_PersonaStateChange_t.h"
namespace Facepunch_Steamworks::SteamNative { struct PersonaStateChange_t; };
#include "SteamNative_AvatarImageLoaded_t.h"
namespace Facepunch_Steamworks::SteamNative { struct AvatarImageLoaded_t; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Friends : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		IL2CPP::Array<uint8_t>* buffer;
		Facepunch_Steamworks::Facepunch::Steamworks::Friends_ChatMessageDelegate* OnChatMessage;
		bool _listenForFriendsMessages;
		Facepunch_Steamworks::Facepunch::Steamworks::Friends_JoinRequestedDelegate* OnInvitedToGame;
		mscorlib::System::Collections::Generic::List_1<Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend>* _allFriends;
		mscorlib::System::Collections::Generic::List_1<Facepunch_Steamworks::Facepunch::Steamworks::Friends_PersonaCallback>* PersonaCallbacks;
		void _ctor(Facepunch_Steamworks::Facepunch::Steamworks::Client* c);
		void OnFriendChatMessage(Facepunch_Steamworks::SteamNative::GameConnectedFriendChatMsg_t data);
		void OnGameJoinRequested(Facepunch_Steamworks::SteamNative::GameRichPresenceJoinRequested_t data);
		mscorlib::System::Collections::Generic::IEnumerable_1<Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend>* get_All();
		mscorlib::System::Collections::Generic::IEnumerable_1<Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend>* get_AllFriends();
		void Refresh();
		Facepunch_Steamworks::Facepunch::Steamworks::Image* GetCachedAvatar(Facepunch_Steamworks::Facepunch::Steamworks::Friends_AvatarSize size, uint64_t steamid);
		void GetAvatar(Facepunch_Steamworks::Facepunch::Steamworks::Friends_AvatarSize size, uint64_t steamid, mscorlib::System::Action_1<Facepunch_Steamworks::Facepunch::Steamworks::Image>* callback);
		Facepunch_Steamworks::Facepunch::Steamworks::SteamFriend* Get(uint64_t steamid);
		void Cycle();
		void OnPersonaStateChange(Facepunch_Steamworks::SteamNative::PersonaStateChange_t data);
		void LoadAvatarForSteamId(uint64_t Steamid);
		void OnAvatarImageLoaded(Facepunch_Steamworks::SteamNative::AvatarImageLoaded_t data);
	};
}

