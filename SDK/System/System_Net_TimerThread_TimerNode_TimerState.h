#pragma once
namespace System::System::Net
{
	enum struct TimerThread_TimerNode_TimerState : int32_t
	{
		Ready = static_cast<int32_t>(0x0),
		Fired = static_cast<int32_t>(0x1),
		Cancelled = static_cast<int32_t>(0x2),
		Sentinel = static_cast<int32_t>(0x3),
	};
}

