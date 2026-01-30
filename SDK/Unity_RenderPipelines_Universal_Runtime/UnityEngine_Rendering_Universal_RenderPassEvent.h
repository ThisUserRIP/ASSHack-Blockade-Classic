#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct RenderPassEvent : int32_t
	{
		BeforeRendering = static_cast<int32_t>(0x0),
		BeforeRenderingShadows = static_cast<int32_t>(0x32),
		AfterRenderingShadows = static_cast<int32_t>(0x64),
		BeforeRenderingPrepasses = static_cast<int32_t>(0x96),
		AfterRenderingPrePasses = static_cast<int32_t>(0xC8),
		BeforeRenderingOpaques = static_cast<int32_t>(0xFA),
		AfterRenderingOpaques = static_cast<int32_t>(0x12C),
		BeforeRenderingSkybox = static_cast<int32_t>(0x15E),
		AfterRenderingSkybox = static_cast<int32_t>(0x190),
		BeforeRenderingTransparents = static_cast<int32_t>(0x1C2),
		AfterRenderingTransparents = static_cast<int32_t>(0x1F4),
		BeforeRenderingPostProcessing = static_cast<int32_t>(0x226),
		AfterRenderingPostProcessing = static_cast<int32_t>(0x258),
		AfterRendering = static_cast<int32_t>(0x3E8),
	};
}

