#pragma once
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel
{
	enum struct GlyphRenderMode : int32_t
	{
		SMOOTH_HINTED = static_cast<int32_t>(0x1019),
		SMOOTH = static_cast<int32_t>(0x1015),
		RASTER_HINTED = static_cast<int32_t>(0x101A),
		RASTER = static_cast<int32_t>(0x1016),
		SDF = static_cast<int32_t>(0x1026),
		SDF8 = static_cast<int32_t>(0x2026),
		SDF16 = static_cast<int32_t>(0x4026),
		SDF32 = static_cast<int32_t>(0x8026),
		SDFAA_HINTED = static_cast<int32_t>(0x1049),
		SDFAA = static_cast<int32_t>(0x1045),
	};
}

