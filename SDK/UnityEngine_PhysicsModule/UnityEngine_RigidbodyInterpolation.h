#pragma once
namespace UnityEngine_PhysicsModule::UnityEngine
{
	enum struct RigidbodyInterpolation : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Interpolate = static_cast<int32_t>(0x1),
		Extrapolate = static_cast<int32_t>(0x2),
	};
}

