#pragma once
namespace Rewired_Core::Rewired
{
	enum struct JoystickType : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Gamepad = static_cast<int32_t>(0x1),
		DualAnalogGamepad = static_cast<int32_t>(0x2),
		SingleAnalogGamepad = static_cast<int32_t>(0x3),
		DigitalGamepad = static_cast<int32_t>(0x4),
		Joystick = static_cast<int32_t>(0xA),
		AnalogJoystick = static_cast<int32_t>(0xB),
		DigitalJoystick = static_cast<int32_t>(0xC),
		Throttle = static_cast<int32_t>(0x14),
		HOTAS = static_cast<int32_t>(0x15),
		FlightYoke = static_cast<int32_t>(0x16),
		FlightPedals = static_cast<int32_t>(0x17),
		ThrottleQuadrant = static_cast<int32_t>(0x18),
		TrimWheel = static_cast<int32_t>(0x19),
		DrivingWheel = static_cast<int32_t>(0x28),
		Pedals = static_cast<int32_t>(0x29),
		GearShifter = static_cast<int32_t>(0x2A),
		Guitar = static_cast<int32_t>(0x32),
		Drums = static_cast<int32_t>(0x33),
		DancePad = static_cast<int32_t>(0x46),
		Paddle = static_cast<int32_t>(0x50),
		Spinner = static_cast<int32_t>(0x51),
		Trackball = static_cast<int32_t>(0x52),
		Gun = static_cast<int32_t>(0x53),
		RemoteControl = static_cast<int32_t>(0x64),
		PointingDevice = static_cast<int32_t>(0x65),
		ShipController = static_cast<int32_t>(0x78),
		TrainController = static_cast<int32_t>(0x79),
		HelicopterController = static_cast<int32_t>(0x7A),
		FootController = static_cast<int32_t>(0x7B),
		ControlPanel = static_cast<int32_t>(0x8C),
		Keypad = static_cast<int32_t>(0x8D),
		VRController = static_cast<int32_t>(0x96),
	};
}

