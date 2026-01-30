#pragma once
namespace Assembly_CSharp::Rewired::UI::ControlMapper
{
	enum struct ControlMapper_WindowType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ChooseJoystick = static_cast<int32_t>(0x1),
		JoystickAssignmentConflict = static_cast<int32_t>(0x2),
		ElementAssignment = static_cast<int32_t>(0x3),
		ElementAssignmentPrePolling = static_cast<int32_t>(0x4),
		ElementAssignmentPolling = static_cast<int32_t>(0x5),
		ElementAssignmentResult = static_cast<int32_t>(0x6),
		ElementAssignmentConflict = static_cast<int32_t>(0x7),
		Calibration = static_cast<int32_t>(0x8),
		CalibrateStep1 = static_cast<int32_t>(0x9),
		CalibrateStep2 = static_cast<int32_t>(0xA),
	};
}

