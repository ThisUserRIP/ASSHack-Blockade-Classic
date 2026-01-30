#pragma once
namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	enum struct Lobby_Type : int32_t
	{
		Private = static_cast<int32_t>(0x0),
		FriendsOnly = static_cast<int32_t>(0x1),
		Public = static_cast<int32_t>(0x2),
		Invisible = static_cast<int32_t>(0x3),
		Error = static_cast<int32_t>(0x4),
	};
}

