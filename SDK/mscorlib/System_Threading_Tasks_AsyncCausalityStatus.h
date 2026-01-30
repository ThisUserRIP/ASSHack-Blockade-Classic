#pragma once
namespace mscorlib::System::Threading::Tasks
{
	enum struct AsyncCausalityStatus : int32_t
	{
		Started = static_cast<int32_t>(0x0),
		Completed = static_cast<int32_t>(0x1),
		Canceled = static_cast<int32_t>(0x2),
		Error = static_cast<int32_t>(0x3),
	};
}

