#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct FriendRelationship : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Blocked = static_cast<int32_t>(0x1),
		RequestRecipient = static_cast<int32_t>(0x2),
		Friend = static_cast<int32_t>(0x3),
		RequestInitiator = static_cast<int32_t>(0x4),
		Ignored = static_cast<int32_t>(0x5),
		IgnoredFriend = static_cast<int32_t>(0x6),
		Suggested_DEPRECATED = static_cast<int32_t>(0x7),
		Max = static_cast<int32_t>(0x8),
	};
}

