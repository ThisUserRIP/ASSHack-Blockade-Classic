#pragma once
namespace Rewired_Core::Rewired
{
	enum struct ControllerType : int32_t
	{
		Keyboard = static_cast<int32_t>(0x0),
		Mouse = static_cast<int32_t>(0x1),
		Joystick = static_cast<int32_t>(0x2),
		Custom = static_cast<int32_t>(0x14),
	};
}

