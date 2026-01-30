#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct ChatRoomEnterResponse : int32_t
	{
		Success = static_cast<int32_t>(0x1),
		DoesntExist = static_cast<int32_t>(0x2),
		NotAllowed = static_cast<int32_t>(0x3),
		Full = static_cast<int32_t>(0x4),
		Error = static_cast<int32_t>(0x5),
		Banned = static_cast<int32_t>(0x6),
		Limited = static_cast<int32_t>(0x7),
		ClanDisabled = static_cast<int32_t>(0x8),
		CommunityBan = static_cast<int32_t>(0x9),
		MemberBlockedYou = static_cast<int32_t>(0xA),
		YouBlockedMember = static_cast<int32_t>(0xB),
		RatelimitExceeded = static_cast<int32_t>(0xF),
	};
}

