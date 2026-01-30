#pragma once
namespace Rewired_Core::Rewired::ComponentControls
{
	enum struct TouchPad_ValueFormat : int32_t
	{
		Pixels = static_cast<int32_t>(0x0),
		Screen = static_cast<int32_t>(0x1),
		Physical = static_cast<int32_t>(0x2),
		Direction = static_cast<int32_t>(0x3),
	};
}

