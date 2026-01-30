#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct ShaderVariantLogLevel : int32_t
	{
		Disabled = static_cast<int32_t>(0x0),
		OnlyUniversalRPShaders = static_cast<int32_t>(0x1),
		AllShaders = static_cast<int32_t>(0x2),
	};
}

