#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct RemoteStoragePublishedFileVisibility : int32_t
	{
		Public = static_cast<int32_t>(0x0),
		FriendsOnly = static_cast<int32_t>(0x1),
		Private = static_cast<int32_t>(0x2),
	};
}

