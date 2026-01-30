#pragma once
namespace Rewired_Core::Rewired
{
	enum struct ModifierKeyFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		LeftControl = static_cast<int32_t>(0x1),
		RightControl = static_cast<int32_t>(0x2),
		LeftAlt = static_cast<int32_t>(0x4),
		RightAlt = static_cast<int32_t>(0x8),
		LeftShift = static_cast<int32_t>(0x10),
		RightShift = static_cast<int32_t>(0x20),
		LeftCommand = static_cast<int32_t>(0x40),
		RightCommand = static_cast<int32_t>(0x80),
	};
}

