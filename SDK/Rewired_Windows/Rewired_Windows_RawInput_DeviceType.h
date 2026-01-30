#pragma once
namespace Rewired_Windows::Rewired::Windows::RawInput
{
	enum struct DeviceType : int32_t
	{
		Joystick = static_cast<int32_t>(0x0),
		Gamepad = static_cast<int32_t>(0x1),
		Keyboard = static_cast<int32_t>(0x2),
		Mouse = static_cast<int32_t>(0x3),
		MultiAxisController = static_cast<int32_t>(0x4),
		Unknown = static_cast<int32_t>(0x5),
	};
}

