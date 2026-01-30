#pragma once
namespace Rewired_Core::Rewired::Config
{
	enum struct ThrottleCalibrationMode : int32_t
	{
		ZeroToOne = static_cast<int32_t>(0x0),
		NegativeOneToOne = static_cast<int32_t>(0x1),
	};
}

