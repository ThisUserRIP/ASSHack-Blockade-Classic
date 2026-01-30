#pragma once
namespace mscorlib::System::Globalization
{
	enum struct DateTimeStyles : int32_t
	{
		None = static_cast<int32_t>(0x0),
		AllowLeadingWhite = static_cast<int32_t>(0x1),
		AllowTrailingWhite = static_cast<int32_t>(0x2),
		AllowInnerWhite = static_cast<int32_t>(0x4),
		AllowWhiteSpaces = static_cast<int32_t>(0x7),
		NoCurrentDateDefault = static_cast<int32_t>(0x8),
		AdjustToUniversal = static_cast<int32_t>(0x10),
		AssumeLocal = static_cast<int32_t>(0x20),
		AssumeUniversal = static_cast<int32_t>(0x40),
		RoundtripKind = static_cast<int32_t>(0x80),
	};
}

