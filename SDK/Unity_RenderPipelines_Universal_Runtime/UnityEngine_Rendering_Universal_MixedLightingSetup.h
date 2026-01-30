#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct MixedLightingSetup : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ShadowMask = static_cast<int32_t>(0x1),
		Subtractive = static_cast<int32_t>(0x2),
	};
}

