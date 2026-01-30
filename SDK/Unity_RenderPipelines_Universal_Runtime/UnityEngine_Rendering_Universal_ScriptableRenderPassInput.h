#pragma once
namespace Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal
{
	enum struct ScriptableRenderPassInput : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Depth = static_cast<int32_t>(0x1),
		Normal = static_cast<int32_t>(0x2),
		Color = static_cast<int32_t>(0x4),
	};
}

