#pragma once
namespace mscorlib::System
{
	enum struct ParseFailureKind : int32_t
	{
		None = static_cast<int32_t>(0x0),
		ArgumentNull = static_cast<int32_t>(0x1),
		Format = static_cast<int32_t>(0x2),
		FormatWithParameter = static_cast<int32_t>(0x3),
		FormatBadDateTimeCalendar = static_cast<int32_t>(0x4),
	};
}

