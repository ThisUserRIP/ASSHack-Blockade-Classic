#pragma once
namespace System::System
{
	enum struct GenericUriParserOptions : int32_t
	{
		Default = static_cast<int32_t>(0x0),
		GenericAuthority = static_cast<int32_t>(0x1),
		AllowEmptyAuthority = static_cast<int32_t>(0x2),
		NoUserInfo = static_cast<int32_t>(0x4),
		NoPort = static_cast<int32_t>(0x8),
		NoQuery = static_cast<int32_t>(0x10),
		NoFragment = static_cast<int32_t>(0x20),
		DontConvertPathBackslashes = static_cast<int32_t>(0x40),
		DontCompressPath = static_cast<int32_t>(0x80),
		DontUnescapePathDotsAndSlashes = static_cast<int32_t>(0x100),
		Idn = static_cast<int32_t>(0x200),
		IriParsing = static_cast<int32_t>(0x400),
	};
}

