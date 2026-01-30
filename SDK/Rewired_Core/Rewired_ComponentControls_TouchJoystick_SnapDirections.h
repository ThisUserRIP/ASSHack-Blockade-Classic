#pragma once
namespace Rewired_Core::Rewired::ComponentControls
{
	enum struct TouchJoystick_SnapDirections : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Four = static_cast<int32_t>(0x4),
		Eight = static_cast<int32_t>(0x8),
		Sixteen = static_cast<int32_t>(0x10),
		ThirtyTwo = static_cast<int32_t>(0x20),
		SixtyFour = static_cast<int32_t>(0x40),
	};
}

