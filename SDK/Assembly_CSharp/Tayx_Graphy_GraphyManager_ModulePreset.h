#pragma once
namespace Assembly_CSharp::Tayx::Graphy
{
	enum struct GraphyManager_ModulePreset : int32_t
	{
		FPS_BASIC = static_cast<int32_t>(0x0),
		FPS_TEXT = static_cast<int32_t>(0x1),
		FPS_FULL = static_cast<int32_t>(0x2),
		FPS_TEXT_RAM_TEXT = static_cast<int32_t>(0x3),
		FPS_FULL_RAM_TEXT = static_cast<int32_t>(0x4),
		FPS_FULL_RAM_FULL = static_cast<int32_t>(0x5),
		FPS_TEXT_RAM_TEXT_AUDIO_TEXT = static_cast<int32_t>(0x6),
		FPS_FULL_RAM_TEXT_AUDIO_TEXT = static_cast<int32_t>(0x7),
		FPS_FULL_RAM_FULL_AUDIO_TEXT = static_cast<int32_t>(0x8),
		FPS_FULL_RAM_FULL_AUDIO_FULL = static_cast<int32_t>(0x9),
		FPS_FULL_RAM_FULL_AUDIO_FULL_ADVANCED_FULL = static_cast<int32_t>(0xA),
		FPS_BASIC_ADVANCED_FULL = static_cast<int32_t>(0xB),
	};
}

