#pragma once
namespace Rewired_Core::Rewired
{
	enum struct InputMapper_Status : int32_t
	{
		Idle = static_cast<int32_t>(0x0),
		Listening = static_cast<int32_t>(0x1),
		AwaitingResponse = static_cast<int32_t>(0x2),
	};
}

