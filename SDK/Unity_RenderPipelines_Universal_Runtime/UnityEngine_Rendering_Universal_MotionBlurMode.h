#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct MotionBlurMode : int32_t
	{
		CameraOnly = static_cast<int32_t>(0x0),
		CameraAndObjects = static_cast<int32_t>(0x1),
	};
}

