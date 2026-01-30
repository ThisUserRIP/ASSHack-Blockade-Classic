#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct DenyReason : int32_t
	{
		Invalid = static_cast<int32_t>(0x0),
		InvalidVersion = static_cast<int32_t>(0x1),
		Generic = static_cast<int32_t>(0x2),
		NotLoggedOn = static_cast<int32_t>(0x3),
		NoLicense = static_cast<int32_t>(0x4),
		Cheater = static_cast<int32_t>(0x5),
		LoggedInElseWhere = static_cast<int32_t>(0x6),
		UnknownText = static_cast<int32_t>(0x7),
		IncompatibleAnticheat = static_cast<int32_t>(0x8),
		MemoryCorruption = static_cast<int32_t>(0x9),
		IncompatibleSoftware = static_cast<int32_t>(0xA),
		SteamConnectionLost = static_cast<int32_t>(0xB),
		SteamConnectionError = static_cast<int32_t>(0xC),
		SteamResponseTimedOut = static_cast<int32_t>(0xD),
		SteamValidationStalled = static_cast<int32_t>(0xE),
		SteamOwnerLeftGuestUser = static_cast<int32_t>(0xF),
	};
}

