#pragma once
namespace mscorlib::System::Globalization
{
	enum struct TimeSpanParse_TimeSpanStandardStyles : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Invariant = static_cast<int32_t>(0x1),
		Localized = static_cast<int32_t>(0x2),
		RequireFull = static_cast<int32_t>(0x4),
		Any = static_cast<int32_t>(0x3),
	};
}

