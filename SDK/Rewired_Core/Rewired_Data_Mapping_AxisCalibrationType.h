#pragma once
namespace Rewired_Core::Rewired::Data::Mapping
{
	enum struct AxisCalibrationType : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		Uncalibrated = static_cast<int32_t>(0x1),
		Custom = static_cast<int32_t>(0x2),
	};
}

