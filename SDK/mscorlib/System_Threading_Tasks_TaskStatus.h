#pragma once
namespace mscorlib::System::Threading::Tasks
{
	enum struct TaskStatus : int32_t
	{
		Created = static_cast<int32_t>(0x0),
		WaitingForActivation = static_cast<int32_t>(0x1),
		WaitingToRun = static_cast<int32_t>(0x2),
		Running = static_cast<int32_t>(0x3),
		WaitingForChildrenToComplete = static_cast<int32_t>(0x4),
		RanToCompletion = static_cast<int32_t>(0x5),
		Canceled = static_cast<int32_t>(0x6),
		Faulted = static_cast<int32_t>(0x7),
	};
}

