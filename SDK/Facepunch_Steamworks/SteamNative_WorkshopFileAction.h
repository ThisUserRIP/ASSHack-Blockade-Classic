#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct WorkshopFileAction : int32_t
	{
		Played = static_cast<int32_t>(0x0),
		Completed = static_cast<int32_t>(0x1),
	};
}

