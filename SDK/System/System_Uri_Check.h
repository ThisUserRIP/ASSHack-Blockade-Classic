#pragma once
namespace System::System
{
	enum struct Uri_Check : int32_t
	{
		None = static_cast<int32_t>(0x0),
		EscapedCanonical = static_cast<int32_t>(0x1),
		DisplayCanonical = static_cast<int32_t>(0x2),
		DotSlashAttn = static_cast<int32_t>(0x4),
		DotSlashEscaped = static_cast<int32_t>(0x80),
		BackslashInPath = static_cast<int32_t>(0x10),
		ReservedFound = static_cast<int32_t>(0x20),
		NotIriCanonical = static_cast<int32_t>(0x40),
		FoundNonAscii = static_cast<int32_t>(0x8),
	};
}

