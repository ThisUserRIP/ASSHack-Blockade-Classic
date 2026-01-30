#pragma once
namespace Unity_TextMeshPro::TMPro
{
	enum struct FontStyles : int32_t
	{
		Normal = static_cast<int32_t>(0x0),
		Bold = static_cast<int32_t>(0x1),
		Italic = static_cast<int32_t>(0x2),
		Underline = static_cast<int32_t>(0x4),
		LowerCase = static_cast<int32_t>(0x8),
		UpperCase = static_cast<int32_t>(0x10),
		SmallCaps = static_cast<int32_t>(0x20),
		Strikethrough = static_cast<int32_t>(0x40),
		Superscript = static_cast<int32_t>(0x80),
		Subscript = static_cast<int32_t>(0x100),
		Highlight = static_cast<int32_t>(0x200),
	};
}

