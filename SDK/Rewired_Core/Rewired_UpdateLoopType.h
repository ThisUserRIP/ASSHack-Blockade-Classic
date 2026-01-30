#pragma once
namespace Rewired_Core::Rewired
{
	enum struct UpdateLoopType : int32_t
	{
		Update = static_cast<int32_t>(0x0),
		FixedUpdate = static_cast<int32_t>(0x1),
		OnGUI = static_cast<int32_t>(0x2),
	};
}

