#pragma once
namespace UnityEngine_PhysicsModule::UnityEngine
{
	enum struct CollisionFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Sides = static_cast<int32_t>(0x1),
		Above = static_cast<int32_t>(0x2),
		Below = static_cast<int32_t>(0x4),
		CollidedSides = static_cast<int32_t>(0x1),
		CollidedAbove = static_cast<int32_t>(0x2),
		CollidedBelow = static_cast<int32_t>(0x4),
	};
}

