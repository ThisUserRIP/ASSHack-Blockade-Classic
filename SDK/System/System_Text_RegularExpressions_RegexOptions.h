#pragma once
namespace System::System::Text::RegularExpressions
{
	enum struct RegexOptions : int32_t
	{
		None = static_cast<int32_t>(0x0),
		IgnoreCase = static_cast<int32_t>(0x1),
		Multiline = static_cast<int32_t>(0x2),
		ExplicitCapture = static_cast<int32_t>(0x4),
		Compiled = static_cast<int32_t>(0x8),
		Singleline = static_cast<int32_t>(0x10),
		IgnorePatternWhitespace = static_cast<int32_t>(0x20),
		RightToLeft = static_cast<int32_t>(0x40),
		ECMAScript = static_cast<int32_t>(0x100),
		CultureInvariant = static_cast<int32_t>(0x200),
	};
}

