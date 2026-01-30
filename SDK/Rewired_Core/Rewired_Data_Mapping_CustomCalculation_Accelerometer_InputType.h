#pragma once
namespace Rewired_Core::Rewired::Data::Mapping
{
	enum struct CustomCalculation_Accelerometer_InputType : int32_t
	{
		Acceleration = static_cast<int32_t>(0x0),
		UserAcceleration = static_cast<int32_t>(0x1),
		Gravity = static_cast<int32_t>(0x2),
	};
}

