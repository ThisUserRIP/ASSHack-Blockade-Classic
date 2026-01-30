#pragma once
namespace mscorlib::System::Threading
{
	enum struct ExecutionContext_Flags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		IsNewCapture = static_cast<int32_t>(0x1),
		IsFlowSuppressed = static_cast<int32_t>(0x2),
		IsPreAllocatedDefault = static_cast<int32_t>(0x4),
	};
}

