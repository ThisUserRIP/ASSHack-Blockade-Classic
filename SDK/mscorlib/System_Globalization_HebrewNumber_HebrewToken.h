#pragma once
namespace mscorlib::System::Globalization
{
	enum struct HebrewNumber_HebrewToken : int32_t
	{
		Invalid = static_cast<int32_t>(0xFFFFFFFF),
		Digit400 = static_cast<int32_t>(0x0),
		Digit200_300 = static_cast<int32_t>(0x1),
		Digit100 = static_cast<int32_t>(0x2),
		Digit10 = static_cast<int32_t>(0x3),
		Digit1 = static_cast<int32_t>(0x4),
		Digit6_7 = static_cast<int32_t>(0x5),
		Digit7 = static_cast<int32_t>(0x6),
		Digit9 = static_cast<int32_t>(0x7),
		SingleQuote = static_cast<int32_t>(0x8),
		DoubleQuote = static_cast<int32_t>(0x9),
	};
}

