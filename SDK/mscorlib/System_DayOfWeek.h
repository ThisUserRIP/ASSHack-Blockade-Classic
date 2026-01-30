#pragma once
namespace mscorlib::System
{
	enum struct DayOfWeek : int32_t
	{
		Sunday = static_cast<int32_t>(0x0),
		Monday = static_cast<int32_t>(0x1),
		Tuesday = static_cast<int32_t>(0x2),
		Wednesday = static_cast<int32_t>(0x3),
		Thursday = static_cast<int32_t>(0x4),
		Friday = static_cast<int32_t>(0x5),
		Saturday = static_cast<int32_t>(0x6),
	};
}

