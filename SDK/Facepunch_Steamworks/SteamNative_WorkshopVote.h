#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct WorkshopVote : int32_t
	{
		Unvoted = static_cast<int32_t>(0x0),
		For = static_cast<int32_t>(0x1),
		Against = static_cast<int32_t>(0x2),
		Later = static_cast<int32_t>(0x3),
	};
}

