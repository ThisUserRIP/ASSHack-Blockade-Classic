#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct DebugUI_Flags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		EditorOnly = static_cast<int32_t>(0x2),
		RuntimeOnly = static_cast<int32_t>(0x4),
		EditorForceUpdate = static_cast<int32_t>(0x8),
	};
}

