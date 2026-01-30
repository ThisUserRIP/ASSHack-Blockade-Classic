#pragma once
namespace Rewired_Core::Rewired
{
	enum struct AxisSensitivityType : int32_t
	{
		Multiplier = static_cast<int32_t>(0x0),
		Power = static_cast<int32_t>(0x1),
		Curve = static_cast<int32_t>(0x2),
	};
}

