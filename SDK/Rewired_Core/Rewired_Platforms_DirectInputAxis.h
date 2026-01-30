#pragma once
namespace Rewired_Core::Rewired::Platforms
{
	enum struct DirectInputAxis : int32_t
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
		AngularVelocityX = static_cast<int32_t>(0xC),
		AngularVelocityY = static_cast<int32_t>(0xD),
		AngularVelocityZ = static_cast<int32_t>(0xE),
		VelocitySlider0 = static_cast<int32_t>(0xF),
		VelocitySlider1 = static_cast<int32_t>(0x10),
		AccelerationX = static_cast<int32_t>(0x11),
		AccelerationY = static_cast<int32_t>(0x12),
		AccelerationZ = static_cast<int32_t>(0x13),
		AngularAccelerationX = static_cast<int32_t>(0x14),
		AngularAccelerationY = static_cast<int32_t>(0x15),
		AngularAccelerationZ = static_cast<int32_t>(0x16),
		AccelerationSlider0 = static_cast<int32_t>(0x17),
		AccelerationSlider1 = static_cast<int32_t>(0x18),
		ForceX = static_cast<int32_t>(0x19),
		ForceY = static_cast<int32_t>(0x1A),
		ForceZ = static_cast<int32_t>(0x1B),
		TorqueX = static_cast<int32_t>(0x1C),
		TorqueY = static_cast<int32_t>(0x1D),
		TorqueZ = static_cast<int32_t>(0x1E),
		ForceSlider0 = static_cast<int32_t>(0x1F),
		ForceSlider1 = static_cast<int32_t>(0x20),
	};
}

