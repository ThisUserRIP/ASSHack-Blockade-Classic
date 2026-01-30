#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct MsaaQuality : int32_t
	{
		Disabled = static_cast<int32_t>(0x1),
		_2x = static_cast<int32_t>(0x2),
		_4x = static_cast<int32_t>(0x4),
		_8x = static_cast<int32_t>(0x8),
	};
}

