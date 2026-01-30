#pragma once
namespace mscorlib::System
{
	enum struct ParseFlags : int32_t
	{
		HaveYear = static_cast<int32_t>(0x1),
		HaveMonth = static_cast<int32_t>(0x2),
		HaveDay = static_cast<int32_t>(0x4),
		HaveHour = static_cast<int32_t>(0x8),
		HaveMinute = static_cast<int32_t>(0x10),
		HaveSecond = static_cast<int32_t>(0x20),
		HaveTime = static_cast<int32_t>(0x40),
		HaveDate = static_cast<int32_t>(0x80),
		TimeZoneUsed = static_cast<int32_t>(0x100),
		TimeZoneUtc = static_cast<int32_t>(0x200),
		ParsedMonthName = static_cast<int32_t>(0x400),
		CaptureOffset = static_cast<int32_t>(0x800),
		YearDefault = static_cast<int32_t>(0x1000),
		Rfc1123Pattern = static_cast<int32_t>(0x2000),
		UtcSortPattern = static_cast<int32_t>(0x4000),
	};
}

