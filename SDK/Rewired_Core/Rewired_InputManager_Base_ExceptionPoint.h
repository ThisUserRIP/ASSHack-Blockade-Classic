#pragma once
namespace Rewired_Core::Rewired
{
	enum struct InputManager_Base_ExceptionPoint : int32_t
	{
		Initialization = static_cast<int32_t>(0x0),
		Update = static_cast<int32_t>(0x1),
		Destroy = static_cast<int32_t>(0x2),
	};
}

