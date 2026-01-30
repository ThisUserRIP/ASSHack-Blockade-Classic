#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct FilmGrainLookup : int32_t
	{
		Thin1 = static_cast<int32_t>(0x0),
		Thin2 = static_cast<int32_t>(0x1),
		Medium1 = static_cast<int32_t>(0x2),
		Medium2 = static_cast<int32_t>(0x3),
		Medium3 = static_cast<int32_t>(0x4),
		Medium4 = static_cast<int32_t>(0x5),
		Medium5 = static_cast<int32_t>(0x6),
		Medium6 = static_cast<int32_t>(0x7),
		Large01 = static_cast<int32_t>(0x8),
		Large02 = static_cast<int32_t>(0x9),
		Custom = static_cast<int32_t>(0xA),
	};
}

