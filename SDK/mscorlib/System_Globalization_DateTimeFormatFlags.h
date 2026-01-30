#pragma once
namespace mscorlib::System::Globalization
{
	enum struct DateTimeFormatFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		UseGenitiveMonth = static_cast<int32_t>(0x1),
		UseLeapYearMonth = static_cast<int32_t>(0x2),
		UseSpacesInMonthNames = static_cast<int32_t>(0x4),
		UseHebrewRule = static_cast<int32_t>(0x8),
		UseSpacesInDayNames = static_cast<int32_t>(0x10),
		UseDigitPrefixInTokens = static_cast<int32_t>(0x20),
		NotInitialized = static_cast<int32_t>(0xFFFFFFFF),
	};
}

