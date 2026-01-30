#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct LightRenderingMode : int32_t
	{
		Disabled = static_cast<int32_t>(0x0),
		PerVertex = static_cast<int32_t>(0x2),
		PerPixel = static_cast<int32_t>(0x1),
	};
}

