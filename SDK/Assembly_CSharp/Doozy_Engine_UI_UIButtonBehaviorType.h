#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI
{
	enum struct UIButtonBehaviorType : int32_t
	{
		OnClick = static_cast<int32_t>(0x0),
		OnDoubleClick = static_cast<int32_t>(0x1),
		OnLongClick = static_cast<int32_t>(0x2),
		OnPointerEnter = static_cast<int32_t>(0x3),
		OnPointerExit = static_cast<int32_t>(0x4),
		OnPointerDown = static_cast<int32_t>(0x5),
		OnPointerUp = static_cast<int32_t>(0x6),
		OnSelected = static_cast<int32_t>(0x7),
		OnDeselected = static_cast<int32_t>(0x8),
		OnRightClick = static_cast<int32_t>(0x9),
	};
}

