#pragma once
namespace mscorlib::System
{
	enum struct DateTimeParse_DTT : int32_t
	{
		End = static_cast<int32_t>(0x0),
		NumEnd = static_cast<int32_t>(0x1),
		NumAmpm = static_cast<int32_t>(0x2),
		NumSpace = static_cast<int32_t>(0x3),
		NumDatesep = static_cast<int32_t>(0x4),
		NumTimesep = static_cast<int32_t>(0x5),
		MonthEnd = static_cast<int32_t>(0x6),
		MonthSpace = static_cast<int32_t>(0x7),
		MonthDatesep = static_cast<int32_t>(0x8),
		NumDatesuff = static_cast<int32_t>(0x9),
		NumTimesuff = static_cast<int32_t>(0xA),
		DayOfWeek = static_cast<int32_t>(0xB),
		YearSpace = static_cast<int32_t>(0xC),
		YearDateSep = static_cast<int32_t>(0xD),
		YearEnd = static_cast<int32_t>(0xE),
		TimeZone = static_cast<int32_t>(0xF),
		Era = static_cast<int32_t>(0x10),
		NumUTCTimeMark = static_cast<int32_t>(0x11),
		Unk = static_cast<int32_t>(0x12),
		NumLocalTimeMark = static_cast<int32_t>(0x13),
		Max = static_cast<int32_t>(0x14),
	};
}

