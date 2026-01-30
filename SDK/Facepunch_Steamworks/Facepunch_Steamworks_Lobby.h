#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Client; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Lobby_LobbyData; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "Facepunch_Steamworks_Lobby_Type.h"
namespace mscorlib::System { struct Action; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { template <typename T1, typename T2, typename T3> struct Action_3; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "Facepunch_Steamworks_Lobby_MemberStateChange.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct Lobby : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Facepunch_Steamworks::Facepunch::Steamworks::Client* client;
		uint64_t _CurrentLobby_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Lobby_LobbyData* _CurrentLobbyData_k__BackingField;
		mscorlib::System::Action_1<mscorlib::System::Boolean>* OnLobbyJoined;
		Facepunch_Steamworks::Facepunch::Steamworks::Lobby_Type createdLobbyType;
		mscorlib::System::Action_1<mscorlib::System::Boolean>* OnLobbyCreated;
		mscorlib::System::Action* OnLobbyDataUpdated;
		mscorlib::System::Action_1<mscorlib::System::UInt64>* OnLobbyMemberDataUpdated;
		mscorlib::System::Action_3<mscorlib::System::UInt64, IL2CPP::Array<mscorlib::System::Byte>, mscorlib::System::Int32>* OnChatMessageRecieved;
		mscorlib::System::Action_2<mscorlib::System::UInt64, mscorlib::System::String>* OnChatStringRecieved;
		mscorlib::System::Action_3<Facepunch_Steamworks::Facepunch::Steamworks::Lobby_MemberStateChange, mscorlib::System::UInt64, mscorlib::System::UInt64>* OnLobbyStateChanged;
		mscorlib::System::Action_2<mscorlib::System::UInt64, mscorlib::System::UInt64>* OnUserInvitedToLobby;
		mscorlib::System::Action_1<mscorlib::System::UInt64>* OnLobbyJoinRequested;
		struct StaticFields
		{
			IL2CPP::Array<uint8_t>* chatMessageData;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
	};
}

