#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct AntialiasingMode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		FastApproximateAntialiasing = static_cast<int32_t>(0x1),
		SubpixelMorphologicalAntiAliasing = static_cast<int32_t>(0x2),
	};
}

