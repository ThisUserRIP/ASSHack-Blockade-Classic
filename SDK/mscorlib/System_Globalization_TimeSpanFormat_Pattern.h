#pragma once
namespace mscorlib::System::Globalization
{
	enum struct TimeSpanFormat_Pattern : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Minimum = static_cast<int32_t>(0x1),
		Full = static_cast<int32_t>(0x2),
	};
}

