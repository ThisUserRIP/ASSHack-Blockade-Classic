#pragma once
namespace Rewired_Core::Rewired
{
	enum struct MouseInputElement : int32_t
	{
		AxisX = static_cast<int32_t>(0x0),
		AxisY = static_cast<int32_t>(0x1),
		Axis3 = static_cast<int32_t>(0x2),
		Button0 = static_cast<int32_t>(0x3),
		Button1 = static_cast<int32_t>(0x4),
		Button2 = static_cast<int32_t>(0x5),
		Button3 = static_cast<int32_t>(0x6),
		Button4 = static_cast<int32_t>(0x7),
		Button5 = static_cast<int32_t>(0x8),
		Button6 = static_cast<int32_t>(0x9),
		Axis4 = static_cast<int32_t>(0xA),
	};
}

