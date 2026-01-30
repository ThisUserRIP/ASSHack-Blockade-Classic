#pragma once
namespace Unity_RenderPipelines_Core_Runtime::UnityEngine::Rendering
{
	enum struct DebugAction : int32_t
	{
		EnableDebugMenu = static_cast<int32_t>(0x0),
		PreviousDebugPanel = static_cast<int32_t>(0x1),
		NextDebugPanel = static_cast<int32_t>(0x2),
		Action = static_cast<int32_t>(0x3),
		MakePersistent = static_cast<int32_t>(0x4),
		MoveVertical = static_cast<int32_t>(0x5),
		MoveHorizontal = static_cast<int32_t>(0x6),
		Multiplier = static_cast<int32_t>(0x7),
		ResetAll = static_cast<int32_t>(0x8),
		DebugActionCount = static_cast<int32_t>(0x9),
	};
}

