#pragma once
namespace Assembly_CSharp::Rewired::Demos
{
	enum struct ControlRemappingDemo1_QueueEntry_State : int32_t
	{
		Waiting = static_cast<int32_t>(0x0),
		Confirmed = static_cast<int32_t>(0x1),
		Canceled = static_cast<int32_t>(0x2),
	};
}

