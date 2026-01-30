#pragma once
namespace Rewired_Core::Rewired
{
	enum struct MouseXYAxisDeltaCalc : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		ScreenWidth = static_cast<int32_t>(0x1),
		ScreenHeight = static_cast<int32_t>(0x2),
	};
}

