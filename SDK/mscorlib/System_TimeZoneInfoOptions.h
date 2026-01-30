#pragma once
namespace mscorlib::System
{
	enum struct TimeZoneInfoOptions : int32_t
	{
		None = static_cast<int32_t>(0x1),
		NoThrowOnInvalidTime = static_cast<int32_t>(0x2),
	};
}

