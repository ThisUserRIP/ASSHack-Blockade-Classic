#pragma once
namespace Assembly_CSharp
{
	enum struct HelicopterAIController_State : int32_t
	{
		INACTIVE = static_cast<int32_t>(0x0),
		IDLE = static_cast<int32_t>(0x1),
		AIM = static_cast<int32_t>(0x2),
		FIRE = static_cast<int32_t>(0x3),
		COOLDOWN = static_cast<int32_t>(0x4),
		MOVING = static_cast<int32_t>(0x5),
		LIFTOFF = static_cast<int32_t>(0x6),
	};
}

