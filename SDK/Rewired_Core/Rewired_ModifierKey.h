#pragma once
namespace Rewired_Core::Rewired
{
	enum struct ModifierKey : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Control = static_cast<int32_t>(0x1),
		Alt = static_cast<int32_t>(0x2),
		Shift = static_cast<int32_t>(0x3),
		Command = static_cast<int32_t>(0x4),
	};
}

