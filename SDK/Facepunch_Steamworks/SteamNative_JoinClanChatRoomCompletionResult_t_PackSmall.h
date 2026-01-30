#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "SteamNative_JoinClanChatRoomCompletionResult_t.h"
namespace Facepunch_Steamworks::SteamNative { struct JoinClanChatRoomCompletionResult_t; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "SteamNative_ChatRoomEnterResponse.h"

namespace Facepunch_Steamworks::SteamNative
{
	struct JoinClanChatRoomCompletionResult_t_PackSmall
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint64_t SteamIDClanChat;
		Facepunch_Steamworks::SteamNative::ChatRoomEnterResponse ChatRoomEnterResponse;
		static Facepunch_Steamworks::SteamNative::JoinClanChatRoomCompletionResult_t op_Implicit(Facepunch_Steamworks::SteamNative::JoinClanChatRoomCompletionResult_t_PackSmall d);
	};
}

