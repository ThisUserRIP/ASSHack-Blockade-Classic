#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct WorkshopFileType : int32_t
	{
		First = static_cast<int32_t>(0x0),
		Community = static_cast<int32_t>(0x0),
		Microtransaction = static_cast<int32_t>(0x1),
		Collection = static_cast<int32_t>(0x2),
		Art = static_cast<int32_t>(0x3),
		Video = static_cast<int32_t>(0x4),
		Screenshot = static_cast<int32_t>(0x5),
		Game = static_cast<int32_t>(0x6),
		Software = static_cast<int32_t>(0x7),
		Concept = static_cast<int32_t>(0x8),
		WebGuide = static_cast<int32_t>(0x9),
		IntegratedGuide = static_cast<int32_t>(0xA),
		Merch = static_cast<int32_t>(0xB),
		ControllerBinding = static_cast<int32_t>(0xC),
		SteamworksAccessInvite = static_cast<int32_t>(0xD),
		SteamVideo = static_cast<int32_t>(0xE),
		GameManagedItem = static_cast<int32_t>(0xF),
		Max = static_cast<int32_t>(0x10),
	};
}

