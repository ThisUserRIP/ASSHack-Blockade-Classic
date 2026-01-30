#pragma once
namespace Assembly_CSharp::Rewired::Demos
{
	enum struct ControlRemappingDemo1_QueueActionType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		JoystickAssignment = static_cast<int32_t>(0x1),
		ElementAssignment = static_cast<int32_t>(0x2),
		FallbackJoystickIdentification = static_cast<int32_t>(0x3),
		Calibrate = static_cast<int32_t>(0x4),
	};
}

