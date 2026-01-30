#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
#include "SteamNative_PersonaState.h"
#include "SteamNative_FriendRelationship.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct SteamFriend : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t _Id_k__BackingField;
		mscorlib::System::String* Name;
		uint64_t _CurrentAppId_k__BackingField;
		uint32_t _ServerIp_k__BackingField;
		int32_t _ServerGamePort_k__BackingField;
		int32_t _ServerQueryPort_k__BackingField;
		uint64_t _ServerLobbyId_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Client* _Client_k__BackingField;
		Facepunch_Steamworks::SteamNative::PersonaState personaState;
		Facepunch_Steamworks::SteamNative::FriendRelationship relationship;
		uint64_t get_Id();
		void set_Id(uint64_t value);
		bool get_IsFriend();
		bool get_IsPlayingThisGame();
		uint64_t get_CurrentAppId();
		void set_CurrentAppId(uint64_t value);
		void set_ServerIp(uint32_t value);
		void set_ServerGamePort(int32_t value);
		void set_ServerQueryPort(int32_t value);
		void set_ServerLobbyId(uint64_t value);
		Facepunch_Steamworks::Facepunch::Steamworks::Client* get_Client();
		void set_Client(Facepunch_Steamworks::Facepunch::Steamworks::Client* value);
		void Refresh();
		void _ctor();
	};
}

