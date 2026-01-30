#pragma once
namespace System::System::Diagnostics
{
	enum struct TraceLevel : int32_t
	{
		Off = static_cast<int32_t>(0x0),
		Error = static_cast<int32_t>(0x1),
		Warning = static_cast<int32_t>(0x2),
		Info = static_cast<int32_t>(0x3),
		Verbose = static_cast<int32_t>(0x4),
	};
}

