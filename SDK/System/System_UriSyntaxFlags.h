#pragma once
namespace System::System
{
	enum struct UriSyntaxFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		MustHaveAuthority = static_cast<int32_t>(0x1),
		OptionalAuthority = static_cast<int32_t>(0x2),
		MayHaveUserInfo = static_cast<int32_t>(0x4),
		MayHavePort = static_cast<int32_t>(0x8),
		MayHavePath = static_cast<int32_t>(0x10),
		MayHaveQuery = static_cast<int32_t>(0x20),
		MayHaveFragment = static_cast<int32_t>(0x40),
		AllowEmptyHost = static_cast<int32_t>(0x80),
		AllowUncHost = static_cast<int32_t>(0x100),
		AllowDnsHost = static_cast<int32_t>(0x200),
		AllowIPv4Host = static_cast<int32_t>(0x400),
		AllowIPv6Host = static_cast<int32_t>(0x800),
		AllowAnInternetHost = static_cast<int32_t>(0xE00),
		AllowAnyOtherHost = static_cast<int32_t>(0x1000),
		FileLikeUri = static_cast<int32_t>(0x2000),
		MailToLikeUri = static_cast<int32_t>(0x4000),
		V1_UnknownUri = static_cast<int32_t>(0x10000),
		SimpleUserSyntax = static_cast<int32_t>(0x20000),
		BuiltInSyntax = static_cast<int32_t>(0x40000),
		ParserSchemeOnly = static_cast<int32_t>(0x80000),
		AllowDOSPath = static_cast<int32_t>(0x100000),
		PathIsRooted = static_cast<int32_t>(0x200000),
		ConvertPathSlashes = static_cast<int32_t>(0x400000),
		CompressPath = static_cast<int32_t>(0x800000),
		CanonicalizeAsFilePath = static_cast<int32_t>(0x1000000),
		UnEscapeDotsAndSlashes = static_cast<int32_t>(0x2000000),
		AllowIdn = static_cast<int32_t>(0x4000000),
		AllowIriParsing = static_cast<int32_t>(0x10000000),
	};
}

