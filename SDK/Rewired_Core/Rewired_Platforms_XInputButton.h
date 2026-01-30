#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct XInputButton : int32_t
	{
		None = static_cast<int32_t>(0x0),
		A = static_cast<int32_t>(0x1),
		B = static_cast<int32_t>(0x2),
		X = static_cast<int32_t>(0x3),
		Y = static_cast<int32_t>(0x4),
		LeftShoulder = static_cast<int32_t>(0x5),
		RightShoulder = static_cast<int32_t>(0x6),
		LeftThumb = static_cast<int32_t>(0x7),
		RightThumb = static_cast<int32_t>(0x8),
		Start = static_cast<int32_t>(0x9),
		Back = static_cast<int32_t>(0xA),
		DPadUp = static_cast<int32_t>(0xB),
		DPadRight = static_cast<int32_t>(0xC),
		DPadDown = static_cast<int32_t>(0xD),
		DPadLeft = static_cast<int32_t>(0xE),
		Guide = static_cast<int32_t>(0xF),
	};
}

