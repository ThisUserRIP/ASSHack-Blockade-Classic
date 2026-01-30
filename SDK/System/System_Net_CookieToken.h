#pragma once
namespace System::System::Net
{
	enum struct CookieToken : int32_t
	{
		Nothing = static_cast<int32_t>(0x0),
		NameValuePair = static_cast<int32_t>(0x1),
		Attribute = static_cast<int32_t>(0x2),
		EndToken = static_cast<int32_t>(0x3),
		EndCookie = static_cast<int32_t>(0x4),
		End = static_cast<int32_t>(0x5),
		Equals = static_cast<int32_t>(0x6),
		Comment = static_cast<int32_t>(0x7),
		CommentUrl = static_cast<int32_t>(0x8),
		CookieName = static_cast<int32_t>(0x9),
		Discard = static_cast<int32_t>(0xA),
		Domain = static_cast<int32_t>(0xB),
		Expires = static_cast<int32_t>(0xC),
		MaxAge = static_cast<int32_t>(0xD),
		Path = static_cast<int32_t>(0xE),
		Port = static_cast<int32_t>(0xF),
		Secure = static_cast<int32_t>(0x10),
		HttpOnly = static_cast<int32_t>(0x11),
		Unknown = static_cast<int32_t>(0x12),
		Version = static_cast<int32_t>(0x13),
	};
}

