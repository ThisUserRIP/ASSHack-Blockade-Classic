#pragma once
namespace mscorlib::Mono::Globalization::Unicode
{
	enum struct SimpleCollator_ExtenderType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Simple = static_cast<int32_t>(0x1),
		Voiced = static_cast<int32_t>(0x2),
		Conditional = static_cast<int32_t>(0x3),
		Buggy = static_cast<int32_t>(0x4),
	};
}

