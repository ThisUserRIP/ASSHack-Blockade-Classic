#pragma once
namespace UnityEngine_PhysicsModule::UnityEngine
{
	enum struct ForceMode : int32_t
	{
		Force = static_cast<int32_t>(0x0),
		Acceleration = static_cast<int32_t>(0x5),
		Impulse = static_cast<int32_t>(0x1),
		VelocityChange = static_cast<int32_t>(0x2),
	};
}

