#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	enum struct RenderGraphResourceType : int32_t
	{
		Texture = static_cast<int32_t>(0x0),
		ComputeBuffer = static_cast<int32_t>(0x1),
		Count = static_cast<int32_t>(0x2),
	};
}

