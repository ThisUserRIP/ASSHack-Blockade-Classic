#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct RendererType : int32_t
	{
		Custom = static_cast<int32_t>(0x0),
		ForwardRenderer = static_cast<int32_t>(0x1),
		_2DRenderer = static_cast<int32_t>(0x2),
	};
}

