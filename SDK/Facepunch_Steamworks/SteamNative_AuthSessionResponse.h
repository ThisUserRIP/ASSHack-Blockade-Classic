#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct AuthSessionResponse : int32_t
	{
		OK = static_cast<int32_t>(0x0),
		UserNotConnectedToSteam = static_cast<int32_t>(0x1),
		NoLicenseOrExpired = static_cast<int32_t>(0x2),
		VACBanned = static_cast<int32_t>(0x3),
		LoggedInElseWhere = static_cast<int32_t>(0x4),
		VACCheckTimedOut = static_cast<int32_t>(0x5),
		AuthTicketCanceled = static_cast<int32_t>(0x6),
		AuthTicketInvalidAlreadyUsed = static_cast<int32_t>(0x7),
		AuthTicketInvalid = static_cast<int32_t>(0x8),
		PublisherIssuedBan = static_cast<int32_t>(0x9),
	};
}

