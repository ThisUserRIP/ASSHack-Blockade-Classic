#pragma once
namespace Rewired_Core::Rewired::ComponentControls
{
	enum struct TouchInteractable_MouseButtonFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		LeftButton = static_cast<int32_t>(0x1),
		RightButton = static_cast<int32_t>(0x2),
		MiddleButton = static_cast<int32_t>(0x4),
		AnyButton = static_cast<int32_t>(0xFFFFFFFF),
	};
}

