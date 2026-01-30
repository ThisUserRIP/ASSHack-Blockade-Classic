#pragma once
namespace UnityEngine_PhysicsModule::UnityEngine
{
	enum struct RigidbodyConstraints : int32_t
	{
		None = static_cast<int32_t>(0x0),
		FreezePositionX = static_cast<int32_t>(0x2),
		FreezePositionY = static_cast<int32_t>(0x4),
		FreezePositionZ = static_cast<int32_t>(0x8),
		FreezeRotationX = static_cast<int32_t>(0x10),
		FreezeRotationY = static_cast<int32_t>(0x20),
		FreezeRotationZ = static_cast<int32_t>(0x40),
		FreezePosition = static_cast<int32_t>(0xE),
		FreezeRotation = static_cast<int32_t>(0x70),
		FreezeAll = static_cast<int32_t>(0x7E),
	};
}

