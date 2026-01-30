#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct EventActivityOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Disable = static_cast<int32_t>(0x2),
		Recursive = static_cast<int32_t>(0x4),
		Detachable = static_cast<int32_t>(0x8),
	};
}

