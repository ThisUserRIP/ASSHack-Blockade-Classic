#pragma once
namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	enum struct Lobby_MemberStateChange : int32_t
	{
		Entered = static_cast<int32_t>(0x1),
		Left = static_cast<int32_t>(0x2),
		Disconnected = static_cast<int32_t>(0x4),
		Kicked = static_cast<int32_t>(0x8),
		Banned = static_cast<int32_t>(0x10),
	};
}

