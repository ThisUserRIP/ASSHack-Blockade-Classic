#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct ChatEntryType : int32_t
	{
		Invalid = static_cast<int32_t>(0x0),
		ChatMsg = static_cast<int32_t>(0x1),
		Typing = static_cast<int32_t>(0x2),
		InviteGame = static_cast<int32_t>(0x3),
		Emote = static_cast<int32_t>(0x4),
		LeftConversation = static_cast<int32_t>(0x6),
		Entered = static_cast<int32_t>(0x7),
		WasKicked = static_cast<int32_t>(0x8),
		WasBanned = static_cast<int32_t>(0x9),
		Disconnected = static_cast<int32_t>(0xA),
		HistoricalChat = static_cast<int32_t>(0xB),
		LinkBlocked = static_cast<int32_t>(0xE),
	};
}

