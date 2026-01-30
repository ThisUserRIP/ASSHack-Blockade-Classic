#pragma once
namespace Facepunch_Steamworks::SteamNative
{
	enum struct VoiceResult : int32_t
	{
		OK = static_cast<int32_t>(0x0),
		NotInitialized = static_cast<int32_t>(0x1),
		NotRecording = static_cast<int32_t>(0x2),
		NoData = static_cast<int32_t>(0x3),
		BufferTooSmall = static_cast<int32_t>(0x4),
		DataCorrupted = static_cast<int32_t>(0x5),
		Restricted = static_cast<int32_t>(0x6),
		UnsupportedCodec = static_cast<int32_t>(0x7),
		ReceiverOutOfDate = static_cast<int32_t>(0x8),
		ReceiverDidNotAnswer = static_cast<int32_t>(0x9),
	};
}

