#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct XInputAxis : int32_t
	{
		None = static_cast<int32_t>(0x0),
		LeftThumbX = static_cast<int32_t>(0x1),
		LeftThumbY = static_cast<int32_t>(0x2),
		RightThumbX = static_cast<int32_t>(0x3),
		RightThumbY = static_cast<int32_t>(0x4),
		LeftTrigger = static_cast<int32_t>(0x5),
		RightTrigger = static_cast<int32_t>(0x6),
	};
}

