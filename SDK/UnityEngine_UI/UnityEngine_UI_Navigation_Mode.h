#pragma once
namespace UnityEngine_UI::UnityEngine::UI
{
	enum struct Navigation_Mode : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Horizontal = static_cast<int32_t>(0x1),
		Vertical = static_cast<int32_t>(0x2),
		Automatic = static_cast<int32_t>(0x3),
		Explicit = static_cast<int32_t>(0x4),
	};
}

