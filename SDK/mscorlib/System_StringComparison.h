#pragma once
namespace mscorlib::System
{
	enum struct StringComparison : int32_t
	{
		CurrentCulture = static_cast<int32_t>(0x0),
		CurrentCultureIgnoreCase = static_cast<int32_t>(0x1),
		InvariantCulture = static_cast<int32_t>(0x2),
		InvariantCultureIgnoreCase = static_cast<int32_t>(0x3),
		Ordinal = static_cast<int32_t>(0x4),
		OrdinalIgnoreCase = static_cast<int32_t>(0x5),
	};
}

