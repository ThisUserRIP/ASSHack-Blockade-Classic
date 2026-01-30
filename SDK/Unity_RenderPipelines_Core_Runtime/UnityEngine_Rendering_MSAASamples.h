#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct MSAASamples : int32_t
	{
		None = static_cast<int32_t>(0x1),
		MSAA2x = static_cast<int32_t>(0x2),
		MSAA4x = static_cast<int32_t>(0x4),
		MSAA8x = static_cast<int32_t>(0x8),
	};
}

