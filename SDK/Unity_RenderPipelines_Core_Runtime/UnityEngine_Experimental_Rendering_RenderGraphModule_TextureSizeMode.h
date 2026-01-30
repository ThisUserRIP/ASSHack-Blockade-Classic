#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Experimental::Rendering::RenderGraphModule
{
	enum struct TextureSizeMode : int32_t
	{
		Explicit = static_cast<int32_t>(0x0),
		Scale = static_cast<int32_t>(0x1),
		Functor = static_cast<int32_t>(0x2),
	};
}

