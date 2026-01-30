#pragma once
namespace UnityEngine_XRModule::UnityEngine::XR
{
	enum struct AvailableTrackingData : int32_t
	{
		None = static_cast<int32_t>(0x0),
		PositionAvailable = static_cast<int32_t>(0x1),
		RotationAvailable = static_cast<int32_t>(0x2),
		VelocityAvailable = static_cast<int32_t>(0x4),
		AngularVelocityAvailable = static_cast<int32_t>(0x8),
		AccelerationAvailable = static_cast<int32_t>(0x10),
		AngularAccelerationAvailable = static_cast<int32_t>(0x20),
	};
}

