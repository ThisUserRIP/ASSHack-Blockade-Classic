#pragma once
namespace Assembly_CSharp
{
	enum struct MissileTurretAIController_State : int32_t
	{
		INACTIVE = static_cast<int32_t>(0x0),
		IDLE = static_cast<int32_t>(0x1),
		AIM = static_cast<int32_t>(0x2),
		FIRE = static_cast<int32_t>(0x3),
		COOLDOWN = static_cast<int32_t>(0x4),
	};
}

