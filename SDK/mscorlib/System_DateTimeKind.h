#pragma once
namespace mscorlib::System
{
	enum struct DateTimeKind : int32_t
	{
		Unspecified = static_cast<int32_t>(0x0),
		Utc = static_cast<int32_t>(0x1),
		Local = static_cast<int32_t>(0x2),
	};
}

