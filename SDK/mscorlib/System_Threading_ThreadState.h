#pragma once
namespace mscorlib::System::Threading
{
	enum struct ThreadState : int32_t
	{
		Running = static_cast<int32_t>(0x0),
		StopRequested = static_cast<int32_t>(0x1),
		SuspendRequested = static_cast<int32_t>(0x2),
		Background = static_cast<int32_t>(0x4),
		Unstarted = static_cast<int32_t>(0x8),
		Stopped = static_cast<int32_t>(0x10),
		WaitSleepJoin = static_cast<int32_t>(0x20),
		Suspended = static_cast<int32_t>(0x40),
		AbortRequested = static_cast<int32_t>(0x80),
		Aborted = static_cast<int32_t>(0x100),
	};
}

