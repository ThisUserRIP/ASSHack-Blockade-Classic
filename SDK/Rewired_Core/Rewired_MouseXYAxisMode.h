#pragma once
namespace Rewired_Core::Rewired
{
	enum struct MouseXYAxisMode : int32_t
	{
		MouseAxis = static_cast<int32_t>(0x0),
		DigitalAxis = static_cast<int32_t>(0x1),
		ScreenPositionDelta = static_cast<int32_t>(0x3),
		Speed = static_cast<int32_t>(0x4),
	};
}

