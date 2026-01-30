#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct DepthOfFieldMode : int32_t
	{
		Off = static_cast<int32_t>(0x0),
		Gaussian = static_cast<int32_t>(0x1),
		Bokeh = static_cast<int32_t>(0x2),
	};
}

