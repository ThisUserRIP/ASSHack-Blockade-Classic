#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct RestrictionFlags : int32_t
	{
		Length = static_cast<int32_t>(0x1),
		MinLength = static_cast<int32_t>(0x2),
		MaxLength = static_cast<int32_t>(0x4),
		Pattern = static_cast<int32_t>(0x8),
		Enumeration = static_cast<int32_t>(0x10),
		WhiteSpace = static_cast<int32_t>(0x20),
		MaxInclusive = static_cast<int32_t>(0x40),
		MaxExclusive = static_cast<int32_t>(0x80),
		MinInclusive = static_cast<int32_t>(0x100),
		MinExclusive = static_cast<int32_t>(0x200),
		TotalDigits = static_cast<int32_t>(0x400),
		FractionDigits = static_cast<int32_t>(0x800),
	};
}

