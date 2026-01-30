#pragma once
namespace Rewired_Core::Rewired::ComponentControls
{
	enum struct TouchInteractable_InteractionState : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		Highlighted = static_cast<int32_t>(0x1),
		Pressed = static_cast<int32_t>(0x2),
		Disabled = static_cast<int32_t>(0x3),
	};
}

