#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct URPProfileId : int32_t
	{
		UniversalRenderTotal = static_cast<int32_t>(0x0),
		UpdateVolumeFramework = static_cast<int32_t>(0x1),
		RenderCameraStack = static_cast<int32_t>(0x2),
		AdditionalLightsShadow = static_cast<int32_t>(0x3),
		ColorGradingLUT = static_cast<int32_t>(0x4),
		CopyColor = static_cast<int32_t>(0x5),
		CopyDepth = static_cast<int32_t>(0x6),
		DepthNormalPrepass = static_cast<int32_t>(0x7),
		DepthPrepass = static_cast<int32_t>(0x8),
		DrawOpaqueObjects = static_cast<int32_t>(0x9),
		DrawTransparentObjects = static_cast<int32_t>(0xA),
		MainLightShadow = static_cast<int32_t>(0xB),
		ResolveShadows = static_cast<int32_t>(0xC),
		SSAO = static_cast<int32_t>(0xD),
		StopNaNs = static_cast<int32_t>(0xE),
		SMAA = static_cast<int32_t>(0xF),
		GaussianDepthOfField = static_cast<int32_t>(0x10),
		BokehDepthOfField = static_cast<int32_t>(0x11),
		MotionBlur = static_cast<int32_t>(0x12),
		PaniniProjection = static_cast<int32_t>(0x13),
		UberPostProcess = static_cast<int32_t>(0x14),
		Bloom = static_cast<int32_t>(0x15),
		FinalBlit = static_cast<int32_t>(0x16),
	};
}

