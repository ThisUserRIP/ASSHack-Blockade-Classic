#pragma once
namespace Rewired_Core::Rewired
{
	enum struct PlayerController_Element_Type : int32_t
	{
		Button = static_cast<int32_t>(0x0),
		Axis = static_cast<int32_t>(0x1),
		MouseAxis = static_cast<int32_t>(0x2),
		MouseWheelAxis = static_cast<int32_t>(0x3),
		Axis2D = static_cast<int32_t>(0x64),
		MouseAxis2D = static_cast<int32_t>(0x65),
		MouseWheel = static_cast<int32_t>(0x66),
	};
}

