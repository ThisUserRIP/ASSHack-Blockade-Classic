#pragma once
namespace Rewired_Core::Rewired::Config
{
	enum struct UpdateLoopSetting : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Update = static_cast<int32_t>(0x1),
		FixedUpdate = static_cast<int32_t>(0x2),
		OnGUI = static_cast<int32_t>(0x4),
	};
}

