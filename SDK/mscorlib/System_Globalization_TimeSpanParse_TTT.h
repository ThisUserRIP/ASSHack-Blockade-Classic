#pragma once
namespace mscorlib::System::Globalization
{
	enum struct TimeSpanParse_TTT : int32_t
	{
		None = static_cast<int32_t>(0x0),
		End = static_cast<int32_t>(0x1),
		Num = static_cast<int32_t>(0x2),
		Sep = static_cast<int32_t>(0x3),
		NumOverflow = static_cast<int32_t>(0x4),
	};
}

