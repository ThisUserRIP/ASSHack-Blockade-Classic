#pragma once
namespace UnityEngine_PhysicsModule::UnityEngine
{
	enum struct QueryTriggerInteraction : int32_t
	{
		UseGlobal = static_cast<int32_t>(0x0),
		Ignore = static_cast<int32_t>(0x1),
		Collide = static_cast<int32_t>(0x2),
	};
}

