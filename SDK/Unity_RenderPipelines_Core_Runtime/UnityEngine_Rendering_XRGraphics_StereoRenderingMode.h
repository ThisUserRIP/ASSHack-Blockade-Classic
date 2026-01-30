#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct XRGraphics_StereoRenderingMode : int32_t
	{
		MultiPass = static_cast<int32_t>(0x0),
		SinglePass = static_cast<int32_t>(0x1),
		SinglePassInstanced = static_cast<int32_t>(0x2),
		SinglePassMultiView = static_cast<int32_t>(0x3),
	};
}

