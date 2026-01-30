#pragma once
namespace Rewired_Core::Rewired::Platforms::PS4
{
	enum struct PS4GamepadMotorType : int32_t
	{
		LeftMotor = static_cast<int32_t>(0x0),
		StrongMotor = static_cast<int32_t>(0x0),
		RightMotor = static_cast<int32_t>(0x1),
		WeakMotor = static_cast<int32_t>(0x1),
	};
}

