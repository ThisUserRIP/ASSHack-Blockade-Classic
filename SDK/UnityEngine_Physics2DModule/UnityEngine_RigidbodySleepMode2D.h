#pragma once
namespace UnityEngine_Physics2DModule::UnityEngine
{
	enum struct RigidbodySleepMode2D : int32_t
	{
		NeverSleep = static_cast<int32_t>(0x0),
		StartAwake = static_cast<int32_t>(0x1),
		StartAsleep = static_cast<int32_t>(0x2),
	};
}

