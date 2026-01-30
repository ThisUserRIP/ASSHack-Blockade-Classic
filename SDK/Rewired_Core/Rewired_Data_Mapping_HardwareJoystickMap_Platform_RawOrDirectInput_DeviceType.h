#pragma once
namespace Rewired_Core::Rewired::Data::Mapping
{
	enum struct HardwareJoystickMap_Platform_RawOrDirectInput_DeviceType : int32_t
	{
		Any = static_cast<int32_t>(0x0),
		Device = static_cast<int32_t>(0x11),
		Mouse = static_cast<int32_t>(0x12),
		Keyboard = static_cast<int32_t>(0x13),
		Joystick = static_cast<int32_t>(0x14),
		Gamepad = static_cast<int32_t>(0x15),
		Driving = static_cast<int32_t>(0x16),
		Flight = static_cast<int32_t>(0x17),
		FirstPerson = static_cast<int32_t>(0x18),
		ControlDevice = static_cast<int32_t>(0x19),
		ScreenPointer = static_cast<int32_t>(0x1A),
		Remote = static_cast<int32_t>(0x1B),
		Supplemental = static_cast<int32_t>(0x1C),
	};
}

