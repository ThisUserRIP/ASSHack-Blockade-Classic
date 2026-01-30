#pragma once
namespace UnityEngine_Physics2DModule::UnityEngine
{
	enum struct CollisionDetectionMode2D : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Discrete = static_cast<int32_t>(0x0),
		Continuous = static_cast<int32_t>(0x1),
	};
}

