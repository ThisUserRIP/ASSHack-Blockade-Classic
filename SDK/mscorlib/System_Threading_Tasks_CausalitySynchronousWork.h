#pragma once
namespace mscorlib::System::Threading::Tasks
{
	enum struct CausalitySynchronousWork : int32_t
	{
		CompletionNotification = static_cast<int32_t>(0x0),
		ProgressNotification = static_cast<int32_t>(0x1),
		Execution = static_cast<int32_t>(0x2),
	};
}

