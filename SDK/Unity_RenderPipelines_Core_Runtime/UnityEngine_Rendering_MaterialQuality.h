#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct MaterialQuality : int32_t
	{
		Low = static_cast<int32_t>(0x1),
		Medium = static_cast<int32_t>(0x2),
		High = static_cast<int32_t>(0x4),
	};
}

