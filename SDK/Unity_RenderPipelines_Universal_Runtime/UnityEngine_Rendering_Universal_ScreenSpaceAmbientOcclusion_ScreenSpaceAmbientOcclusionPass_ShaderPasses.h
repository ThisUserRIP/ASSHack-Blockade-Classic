#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct ScreenSpaceAmbientOcclusion_ScreenSpaceAmbientOcclusionPass_ShaderPasses : int32_t
	{
		AO = static_cast<int32_t>(0x0),
		BlurHorizontal = static_cast<int32_t>(0x1),
		BlurVertical = static_cast<int32_t>(0x2),
		BlurFinal = static_cast<int32_t>(0x3),
	};
}

