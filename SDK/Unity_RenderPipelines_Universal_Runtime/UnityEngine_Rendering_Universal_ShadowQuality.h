#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct ShadowQuality : int32_t
	{
		Disabled = static_cast<int32_t>(0x0),
		HardShadows = static_cast<int32_t>(0x1),
		SoftShadows = static_cast<int32_t>(0x2),
	};
}

