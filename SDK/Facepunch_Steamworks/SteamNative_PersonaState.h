#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct PersonaState : int32_t
	{
		Offline = static_cast<int32_t>(0x0),
		Online = static_cast<int32_t>(0x1),
		Busy = static_cast<int32_t>(0x2),
		Away = static_cast<int32_t>(0x3),
		Snooze = static_cast<int32_t>(0x4),
		LookingToTrade = static_cast<int32_t>(0x5),
		LookingToPlay = static_cast<int32_t>(0x6),
		Max = static_cast<int32_t>(0x7),
	};
}

