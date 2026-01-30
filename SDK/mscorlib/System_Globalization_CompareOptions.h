#pragma once
namespace mscorlib::System::Globalization
{
	enum struct CompareOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		IgnoreCase = static_cast<int32_t>(0x1),
		IgnoreNonSpace = static_cast<int32_t>(0x2),
		IgnoreSymbols = static_cast<int32_t>(0x4),
		IgnoreKanaType = static_cast<int32_t>(0x8),
		IgnoreWidth = static_cast<int32_t>(0x10),
		OrdinalIgnoreCase = static_cast<int32_t>(0x10000000),
		StringSort = static_cast<int32_t>(0x20000000),
		Ordinal = static_cast<int32_t>(0x40000000),
	};
}

