#pragma once
namespace System_Xml::MS::Internal::Xml::XPath
{
	enum struct XPathScanner_LexKind : int32_t
	{
		Comma = static_cast<int32_t>(0x2C),
		Slash = static_cast<int32_t>(0x2F),
		At = static_cast<int32_t>(0x40),
		Dot = static_cast<int32_t>(0x2E),
		LParens = static_cast<int32_t>(0x28),
		RParens = static_cast<int32_t>(0x29),
		LBracket = static_cast<int32_t>(0x5B),
		RBracket = static_cast<int32_t>(0x5D),
		Star = static_cast<int32_t>(0x2A),
		Plus = static_cast<int32_t>(0x2B),
		Minus = static_cast<int32_t>(0x2D),
		Eq = static_cast<int32_t>(0x3D),
		Lt = static_cast<int32_t>(0x3C),
		Gt = static_cast<int32_t>(0x3E),
		Bang = static_cast<int32_t>(0x21),
		Dollar = static_cast<int32_t>(0x24),
		Apos = static_cast<int32_t>(0x27),
		Quote = static_cast<int32_t>(0x22),
		Union = static_cast<int32_t>(0x7C),
		Ne = static_cast<int32_t>(0x4E),
		Le = static_cast<int32_t>(0x4C),
		Ge = static_cast<int32_t>(0x47),
		And = static_cast<int32_t>(0x41),
		Or = static_cast<int32_t>(0x4F),
		DotDot = static_cast<int32_t>(0x44),
		SlashSlash = static_cast<int32_t>(0x53),
		Name = static_cast<int32_t>(0x6E),
		String = static_cast<int32_t>(0x73),
		Number = static_cast<int32_t>(0x64),
		Axe = static_cast<int32_t>(0x61),
		Eof = static_cast<int32_t>(0x45),
	};
}

