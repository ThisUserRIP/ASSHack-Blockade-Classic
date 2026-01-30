#pragma once
namespace System::System
{
	enum struct UnescapeMode : int32_t
	{
		CopyOnly = static_cast<int32_t>(0x0),
		Escape = static_cast<int32_t>(0x1),
		Unescape = static_cast<int32_t>(0x2),
		EscapeUnescape = static_cast<int32_t>(0x3),
		V1ToStringFlag = static_cast<int32_t>(0x4),
		UnescapeAll = static_cast<int32_t>(0x8),
		UnescapeAllOrThrow = static_cast<int32_t>(0x18),
	};
}

