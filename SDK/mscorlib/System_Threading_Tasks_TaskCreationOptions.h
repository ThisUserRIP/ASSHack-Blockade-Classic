#pragma once
namespace mscorlib::System::Threading::Tasks
{
	enum struct TaskCreationOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		PreferFairness = static_cast<int32_t>(0x1),
		LongRunning = static_cast<int32_t>(0x2),
		AttachedToParent = static_cast<int32_t>(0x4),
		DenyChildAttach = static_cast<int32_t>(0x8),
		HideScheduler = static_cast<int32_t>(0x10),
		RunContinuationsAsynchronously = static_cast<int32_t>(0x40),
	};
}

