#pragma once
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel
{
	enum struct GlyphLoadFlags : int32_t
	{
		LOAD_DEFAULT = static_cast<int32_t>(0x0),
		LOAD_NO_SCALE = static_cast<int32_t>(0x1),
		LOAD_NO_HINTING = static_cast<int32_t>(0x2),
		LOAD_RENDER = static_cast<int32_t>(0x4),
		LOAD_NO_BITMAP = static_cast<int32_t>(0x8),
		LOAD_FORCE_AUTOHINT = static_cast<int32_t>(0x20),
		LOAD_MONOCHROME = static_cast<int32_t>(0x1000),
		LOAD_NO_AUTOHINT = static_cast<int32_t>(0x8000),
		LOAD_COMPUTE_METRICS = static_cast<int32_t>(0x200000),
		LOAD_BITMAP_METRICS_ONLY = static_cast<int32_t>(0x400000),
	};
}

