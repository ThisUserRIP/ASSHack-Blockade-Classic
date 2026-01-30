#pragma once
namespace mscorlib::System::Diagnostics::Tracing
{
	enum struct EventLevel : int32_t
	{
		LogAlways = static_cast<int32_t>(0x0),
		Critical = static_cast<int32_t>(0x1),
		Error = static_cast<int32_t>(0x2),
		Warning = static_cast<int32_t>(0x3),
		Informational = static_cast<int32_t>(0x4),
		Verbose = static_cast<int32_t>(0x5),
	};
}

