#pragma once
namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	enum struct Networking_SessionError : uint8_t
	{
		None = static_cast<uint8_t>(0x0),
		NotRunningApp = static_cast<uint8_t>(0x1),
		NoRightsToApp = static_cast<uint8_t>(0x2),
		DestinationNotLoggedIn = static_cast<uint8_t>(0x3),
		Timeout = static_cast<uint8_t>(0x4),
		Max = static_cast<uint8_t>(0x5),
	};
}

