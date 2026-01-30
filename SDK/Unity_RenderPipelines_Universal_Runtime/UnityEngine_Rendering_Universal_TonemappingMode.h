#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct TonemappingMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Neutral = static_cast<int32_t>(0x1),
		ACES = static_cast<int32_t>(0x2),
	};
}

