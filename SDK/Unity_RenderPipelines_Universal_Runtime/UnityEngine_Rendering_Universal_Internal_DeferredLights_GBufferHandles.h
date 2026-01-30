#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal
{
	enum struct DeferredLights_GBufferHandles : int32_t
	{
		DepthAsColor = static_cast<int32_t>(0x0),
		Albedo = static_cast<int32_t>(0x1),
		SpecularMetallic = static_cast<int32_t>(0x2),
		NormalSmoothness = static_cast<int32_t>(0x3),
		Lighting = static_cast<int32_t>(0x4),
		ShadowMask = static_cast<int32_t>(0x5),
		Count = static_cast<int32_t>(0x6),
	};
}

