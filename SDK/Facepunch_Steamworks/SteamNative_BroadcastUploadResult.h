#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct BroadcastUploadResult : int32_t
	{
		None = static_cast<int32_t>(0x0),
		OK = static_cast<int32_t>(0x1),
		InitFailed = static_cast<int32_t>(0x2),
		FrameFailed = static_cast<int32_t>(0x3),
		Timeout = static_cast<int32_t>(0x4),
		BandwidthExceeded = static_cast<int32_t>(0x5),
		LowFPS = static_cast<int32_t>(0x6),
		MissingKeyFrames = static_cast<int32_t>(0x7),
		NoConnection = static_cast<int32_t>(0x8),
		RelayFailed = static_cast<int32_t>(0x9),
		SettingsChanged = static_cast<int32_t>(0xA),
		MissingAudio = static_cast<int32_t>(0xB),
		TooFarBehind = static_cast<int32_t>(0xC),
		TranscodeBehind = static_cast<int32_t>(0xD),
	};
}

