#pragma once
namespace UnityEngine_UI::UnityEngine::UI
{
	enum struct Selectable_SelectionState : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		Highlighted = static_cast<int32_t>(0x1),
		Pressed = static_cast<int32_t>(0x2),
		Selected = static_cast<int32_t>(0x3),
		Disabled = static_cast<int32_t>(0x4),
	};
}

