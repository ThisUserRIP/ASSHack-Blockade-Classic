#pragma once
namespace mscorlib::System::Threading::Tasks
{
	enum struct TaskContinuationOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		PreferFairness = static_cast<int32_t>(0x1),
		LongRunning = static_cast<int32_t>(0x2),
		AttachedToParent = static_cast<int32_t>(0x4),
		DenyChildAttach = static_cast<int32_t>(0x8),
		HideScheduler = static_cast<int32_t>(0x10),
		LazyCancellation = static_cast<int32_t>(0x20),
		RunContinuationsAsynchronously = static_cast<int32_t>(0x40),
		NotOnRanToCompletion = static_cast<int32_t>(0x10000),
		NotOnFaulted = static_cast<int32_t>(0x20000),
		NotOnCanceled = static_cast<int32_t>(0x40000),
		OnlyOnRanToCompletion = static_cast<int32_t>(0x60000),
		OnlyOnFaulted = static_cast<int32_t>(0x50000),
		OnlyOnCanceled = static_cast<int32_t>(0x30000),
		ExecuteSynchronously = static_cast<int32_t>(0x80000),
	};
}

