#pragma once
namespace mscorlib::System::Globalization
{
	enum struct MonthNameStyles : int32_t
	{
		Regular = static_cast<int32_t>(0x0),
		Genitive = static_cast<int32_t>(0x1),
		LeapYear = static_cast<int32_t>(0x2),
	};
}

