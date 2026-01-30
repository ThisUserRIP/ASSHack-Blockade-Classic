#pragma once
namespace mscorlib::System::Globalization
{
	enum struct NumberStyles : int32_t
	{
		None = static_cast<int32_t>(0x0),
		AllowLeadingWhite = static_cast<int32_t>(0x1),
		AllowTrailingWhite = static_cast<int32_t>(0x2),
		AllowLeadingSign = static_cast<int32_t>(0x4),
		AllowTrailingSign = static_cast<int32_t>(0x8),
		AllowParentheses = static_cast<int32_t>(0x10),
		AllowDecimalPoint = static_cast<int32_t>(0x20),
		AllowThousands = static_cast<int32_t>(0x40),
		AllowExponent = static_cast<int32_t>(0x80),
		AllowCurrencySymbol = static_cast<int32_t>(0x100),
		AllowHexSpecifier = static_cast<int32_t>(0x200),
		Integer = static_cast<int32_t>(0x7),
		HexNumber = static_cast<int32_t>(0x203),
		Number = static_cast<int32_t>(0x6F),
		Float = static_cast<int32_t>(0xA7),
		Currency = static_cast<int32_t>(0x17F),
		Any = static_cast<int32_t>(0x1FF),
	};
}

