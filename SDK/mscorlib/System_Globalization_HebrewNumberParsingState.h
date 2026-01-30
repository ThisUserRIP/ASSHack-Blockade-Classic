#pragma once
namespace mscorlib::System::Globalization
{
	enum struct HebrewNumberParsingState : int32_t
	{
		InvalidHebrewNumber = static_cast<int32_t>(0x0),
		NotHebrewDigit = static_cast<int32_t>(0x1),
		FoundEndOfHebrewNumber = static_cast<int32_t>(0x2),
		ContinueParsing = static_cast<int32_t>(0x3),
	};
}

