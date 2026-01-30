#pragma once
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore::LowLevel
{
	enum struct GlyphPackingMode : int32_t
	{
		BestShortSideFit = static_cast<int32_t>(0x0),
		BestLongSideFit = static_cast<int32_t>(0x1),
		BestAreaFit = static_cast<int32_t>(0x2),
		BottomLeftRule = static_cast<int32_t>(0x3),
		ContactPointRule = static_cast<int32_t>(0x4),
	};
}

