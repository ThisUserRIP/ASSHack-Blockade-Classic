#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct XInputDeviceSubType : int32_t
	{
		Gamepad = static_cast<int32_t>(0x1),
		Wheel = static_cast<int32_t>(0x2),
		ArcadeStick = static_cast<int32_t>(0x3),
		FlightSick = static_cast<int32_t>(0x4),
		DancePad = static_cast<int32_t>(0x5),
		Guitar = static_cast<int32_t>(0x6),
		GuitarAlternate = static_cast<int32_t>(0x7),
		DrumKit = static_cast<int32_t>(0x8),
		GuitarBass = static_cast<int32_t>(0xB),
		ArcadePad = static_cast<int32_t>(0x13),
	};
}

