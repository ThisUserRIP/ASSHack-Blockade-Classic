#pragma once
namespace Rewired_Core::Rewired::Data::Mapping
{
	enum struct HardwareJoystickMap_Platform_GameCore_Base_GamepadSubType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Xbox360 = static_cast<int32_t>(0x1),
		XboxOne = static_cast<int32_t>(0x2),
		DualShock = static_cast<int32_t>(0x3),
		NintendoProController = static_cast<int32_t>(0x4),
		Unknown = static_cast<int32_t>(0x3E8),
	};
}

