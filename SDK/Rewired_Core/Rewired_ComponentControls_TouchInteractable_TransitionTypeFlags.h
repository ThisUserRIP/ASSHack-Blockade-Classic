#pragma once
namespace Rewired_Core::Rewired::ComponentControls
{
	enum struct TouchInteractable_TransitionTypeFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ColorTint = static_cast<int32_t>(0x1),
		SpriteSwap = static_cast<int32_t>(0x2),
		Animation = static_cast<int32_t>(0x4),
	};
}

