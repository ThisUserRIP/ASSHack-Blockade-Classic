#pragma once
namespace mscorlib::System::Threading
{
	enum struct ExecutionContext_CaptureOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		IgnoreSyncCtx = static_cast<int32_t>(0x1),
		OptimizeDefaultCase = static_cast<int32_t>(0x2),
	};
}

