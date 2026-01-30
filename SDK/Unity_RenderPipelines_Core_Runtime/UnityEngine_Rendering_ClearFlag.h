#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct ClearFlag : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Color = static_cast<int32_t>(0x1),
		Depth = static_cast<int32_t>(0x2),
		All = static_cast<int32_t>(0x3),
	};
}

