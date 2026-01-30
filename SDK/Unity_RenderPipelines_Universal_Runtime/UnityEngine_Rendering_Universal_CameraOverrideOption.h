#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct CameraOverrideOption : int32_t
	{
		Off = static_cast<int32_t>(0x0),
		On = static_cast<int32_t>(0x1),
		UsePipelineSettings = static_cast<int32_t>(0x2),
	};
}

