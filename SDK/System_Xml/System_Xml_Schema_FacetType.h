#pragma once
namespace System_Xml::System::Xml::Schema
{
	enum struct FacetType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Length = static_cast<int32_t>(0x1),
		MinLength = static_cast<int32_t>(0x2),
		MaxLength = static_cast<int32_t>(0x3),
		Pattern = static_cast<int32_t>(0x4),
		Whitespace = static_cast<int32_t>(0x5),
		Enumeration = static_cast<int32_t>(0x6),
		MinExclusive = static_cast<int32_t>(0x7),
		MinInclusive = static_cast<int32_t>(0x8),
		MaxExclusive = static_cast<int32_t>(0x9),
		MaxInclusive = static_cast<int32_t>(0xA),
		TotalDigits = static_cast<int32_t>(0xB),
		FractionDigits = static_cast<int32_t>(0xC),
	};
}

