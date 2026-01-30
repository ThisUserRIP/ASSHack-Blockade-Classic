#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct RawInputAxis : int32_t
	{
		None = static_cast<int32_t>(0x0),
		X = static_cast<int32_t>(0x1),
		Y = static_cast<int32_t>(0x2),
		Z = static_cast<int32_t>(0x3),
		RotationX = static_cast<int32_t>(0x4),
		RotationY = static_cast<int32_t>(0x5),
		RotationZ = static_cast<int32_t>(0x6),
		Slider0 = static_cast<int32_t>(0x7),
		Slider1 = static_cast<int32_t>(0x8),
		VelocityX = static_cast<int32_t>(0x9),
		VelocityY = static_cast<int32_t>(0xA),
		VelocityZ = static_cast<int32_t>(0xB),
		Other = static_cast<int32_t>(0x3E8),
	};
}

