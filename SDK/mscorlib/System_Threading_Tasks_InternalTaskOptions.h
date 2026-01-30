#pragma once
namespace mscorlib::System::Threading::Tasks
{
	enum struct InternalTaskOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		InternalOptionsMask = static_cast<int32_t>(0xFF00),
		ChildReplica = static_cast<int32_t>(0x100),
		ContinuationTask = static_cast<int32_t>(0x200),
		PromiseTask = static_cast<int32_t>(0x400),
		SelfReplicating = static_cast<int32_t>(0x800),
		LazyCancellation = static_cast<int32_t>(0x1000),
		QueuedByRuntime = static_cast<int32_t>(0x2000),
		DoNotDispose = static_cast<int32_t>(0x4000),
	};
}

