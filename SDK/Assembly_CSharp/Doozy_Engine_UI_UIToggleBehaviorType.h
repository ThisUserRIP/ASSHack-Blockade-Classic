#pragma once
namespace Assembly_CSharp::Doozy::Engine::UI
{
	enum struct UIToggleBehaviorType : int32_t
	{
		OnClick = static_cast<int32_t>(0x0),
		OnPointerEnter = static_cast<int32_t>(0x1),
		OnPointerExit = static_cast<int32_t>(0x2),
		OnSelected = static_cast<int32_t>(0x3),
		OnDeselected = static_cast<int32_t>(0x4),
	};
}

