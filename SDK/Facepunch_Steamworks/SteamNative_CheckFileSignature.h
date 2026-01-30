#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct CheckFileSignature : int32_t
	{
		InvalidSignature = static_cast<int32_t>(0x0),
		ValidSignature = static_cast<int32_t>(0x1),
		FileNotFound = static_cast<int32_t>(0x2),
		NoSignaturesFoundForThisApp = static_cast<int32_t>(0x3),
		NoSignaturesFoundForThisFile = static_cast<int32_t>(0x4),
	};
}

