#pragma once
namespace Assembly_CSharp::Rewired::Demos
{
	enum struct ControlRemappingDemo1_DialogHelper_DialogType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		JoystickConflict = static_cast<int32_t>(0x1),
		ElementConflict = static_cast<int32_t>(0x2),
		KeyConflict = static_cast<int32_t>(0x3),
		DeleteAssignmentConfirmation = static_cast<int32_t>(0xA),
		AssignElement = static_cast<int32_t>(0xB),
	};
}

