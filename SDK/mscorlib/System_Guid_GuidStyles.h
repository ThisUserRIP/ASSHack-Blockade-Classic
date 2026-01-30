#pragma once
namespace mscorlib::System
{
	enum struct Guid_GuidStyles : int32_t
	{
		None = static_cast<int32_t>(0x0),
		AllowParenthesis = static_cast<int32_t>(0x1),
		AllowBraces = static_cast<int32_t>(0x2),
		AllowDashes = static_cast<int32_t>(0x4),
		AllowHexPrefix = static_cast<int32_t>(0x8),
		RequireParenthesis = static_cast<int32_t>(0x10),
		RequireBraces = static_cast<int32_t>(0x20),
		RequireDashes = static_cast<int32_t>(0x40),
		RequireHexPrefix = static_cast<int32_t>(0x80),
		HexFormat = static_cast<int32_t>(0xA0),
		NumberFormat = static_cast<int32_t>(0x0),
		DigitFormat = static_cast<int32_t>(0x40),
		BraceFormat = static_cast<int32_t>(0x60),
		ParenthesisFormat = static_cast<int32_t>(0x50),
		Any = static_cast<int32_t>(0xF),
	};
}

