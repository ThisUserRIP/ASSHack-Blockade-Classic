#pragma once
namespace Rewired_Core::Rewired
{
	enum struct ControllerTemplateElementType : int32_t
	{
		Axis = static_cast<int32_t>(0x0),
		Button = static_cast<int32_t>(0x1),
		ThumbStick = static_cast<int32_t>(0x2),
		DPad = static_cast<int32_t>(0x4),
		Stick = static_cast<int32_t>(0x5),
		Throttle = static_cast<int32_t>(0x6),
		Hat = static_cast<int32_t>(0x7),
		Yoke = static_cast<int32_t>(0x8),
		Stick6D = static_cast<int32_t>(0x9),
	};
}

