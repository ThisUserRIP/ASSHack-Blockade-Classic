#pragma once
namespace System::System
{
	enum struct ParsingError : int32_t
	{
		None = static_cast<int32_t>(0x0),
		BadFormat = static_cast<int32_t>(0x1),
		BadScheme = static_cast<int32_t>(0x2),
		BadAuthority = static_cast<int32_t>(0x3),
		EmptyUriString = static_cast<int32_t>(0x4),
		LastRelativeUriOkErrIndex = static_cast<int32_t>(0x4),
		SchemeLimit = static_cast<int32_t>(0x5),
		SizeLimit = static_cast<int32_t>(0x6),
		MustRootedPath = static_cast<int32_t>(0x7),
		BadHostName = static_cast<int32_t>(0x8),
		NonEmptyHost = static_cast<int32_t>(0x9),
		BadPort = static_cast<int32_t>(0xA),
		BadAuthorityTerminator = static_cast<int32_t>(0xB),
		CannotCreateRelative = static_cast<int32_t>(0xC),
	};
}

