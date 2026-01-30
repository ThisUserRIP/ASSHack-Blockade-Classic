#pragma once
namespace mscorlib::System
{
	enum struct TokenType : int32_t
	{
		NumberToken = static_cast<int32_t>(0x1),
		YearNumberToken = static_cast<int32_t>(0x2),
		Am = static_cast<int32_t>(0x3),
		Pm = static_cast<int32_t>(0x4),
		MonthToken = static_cast<int32_t>(0x5),
		EndOfString = static_cast<int32_t>(0x6),
		DayOfWeekToken = static_cast<int32_t>(0x7),
		TimeZoneToken = static_cast<int32_t>(0x8),
		EraToken = static_cast<int32_t>(0x9),
		DateWordToken = static_cast<int32_t>(0xA),
		UnknownToken = static_cast<int32_t>(0xB),
		HebrewNumber = static_cast<int32_t>(0xC),
		JapaneseEraToken = static_cast<int32_t>(0xD),
		TEraToken = static_cast<int32_t>(0xE),
		IgnorableSymbol = static_cast<int32_t>(0xF),
		SEP_Unk = static_cast<int32_t>(0x100),
		SEP_End = static_cast<int32_t>(0x200),
		SEP_Space = static_cast<int32_t>(0x300),
		SEP_Am = static_cast<int32_t>(0x400),
		SEP_Pm = static_cast<int32_t>(0x500),
		SEP_Date = static_cast<int32_t>(0x600),
		SEP_Time = static_cast<int32_t>(0x700),
		SEP_YearSuff = static_cast<int32_t>(0x800),
		SEP_MonthSuff = static_cast<int32_t>(0x900),
		SEP_DaySuff = static_cast<int32_t>(0xA00),
		SEP_HourSuff = static_cast<int32_t>(0xB00),
		SEP_MinuteSuff = static_cast<int32_t>(0xC00),
		SEP_SecondSuff = static_cast<int32_t>(0xD00),
		SEP_LocalTimeMark = static_cast<int32_t>(0xE00),
		SEP_DateOrOffset = static_cast<int32_t>(0xF00),
		RegularTokenMask = static_cast<int32_t>(0xFF),
		SeparatorTokenMask = static_cast<int32_t>(0xFF00),
	};
}

