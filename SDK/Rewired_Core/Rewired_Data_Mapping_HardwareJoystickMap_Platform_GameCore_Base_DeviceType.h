#pragma once
namespace Rewired_Core::Rewired::Data::Mapping
{
	enum struct HardwareJoystickMap_Platform_GameCore_Base_DeviceType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Gamepad = static_cast<int32_t>(0x1),
		ArcadeStick = static_cast<int32_t>(0x2),
		FlightStick = static_cast<int32_t>(0x3),
		RacingWheel = static_cast<int32_t>(0x4),
		Raw = static_cast<int32_t>(0x6),
	};
}

