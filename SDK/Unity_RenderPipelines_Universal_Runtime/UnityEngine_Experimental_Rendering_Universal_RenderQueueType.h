#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Experimental::Rendering::Universal
{
	enum struct RenderQueueType : int32_t
	{
		Opaque = static_cast<int32_t>(0x0),
		Transparent = static_cast<int32_t>(0x1),
	};
}

