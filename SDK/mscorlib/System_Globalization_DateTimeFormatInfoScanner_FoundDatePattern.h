#pragma once
namespace mscorlib::System::Globalization
{
	enum struct DateTimeFormatInfoScanner_FoundDatePattern : int32_t
	{
		None = static_cast<int32_t>(0x0),
		FoundYearPatternFlag = static_cast<int32_t>(0x1),
		FoundMonthPatternFlag = static_cast<int32_t>(0x2),
		FoundDayPatternFlag = static_cast<int32_t>(0x4),
		FoundYMDPatternFlag = static_cast<int32_t>(0x7),
	};
}

