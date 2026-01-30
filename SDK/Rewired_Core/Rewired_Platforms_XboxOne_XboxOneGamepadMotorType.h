#pragma once
namespace Rewired_Core::Rewired::Platforms::XboxOne
{
	enum struct XboxOneGamepadMotorType : int32_t
	{
		LeftMotor = static_cast<int32_t>(0x0),
		RightMotor = static_cast<int32_t>(0x1),
		LeftTriggerMotor = static_cast<int32_t>(0x2),
		RightTriggerMotor = static_cast<int32_t>(0x3),
	};
}

