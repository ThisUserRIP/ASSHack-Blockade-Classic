#pragma once
namespace System::System::Net
{
	enum struct WebCompletionSource_State : int32_t
	{
		Running = static_cast<int32_t>(0x0),
		Completed = static_cast<int32_t>(0x1),
		Canceled = static_cast<int32_t>(0x2),
		Faulted = static_cast<int32_t>(0x3),
	};
}

