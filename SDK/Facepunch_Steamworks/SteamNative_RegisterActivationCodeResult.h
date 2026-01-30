#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct RegisterActivationCodeResult : int32_t
	{
		ResultOK = static_cast<int32_t>(0x0),
		ResultFail = static_cast<int32_t>(0x1),
		ResultAlreadyRegistered = static_cast<int32_t>(0x2),
		ResultTimeout = static_cast<int32_t>(0x3),
		AlreadyOwned = static_cast<int32_t>(0x4),
	};
}

