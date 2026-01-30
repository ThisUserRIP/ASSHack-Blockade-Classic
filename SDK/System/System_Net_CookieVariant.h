#pragma once
namespace System::System::Net
{
	enum struct CookieVariant : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Plain = static_cast<int32_t>(0x1),
		Rfc2109 = static_cast<int32_t>(0x2),
		Rfc2965 = static_cast<int32_t>(0x3),
		Default = static_cast<int32_t>(0x2),
	};
}

