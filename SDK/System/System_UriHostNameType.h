#pragma once
namespace System::System
{
	enum struct UriHostNameType : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Basic = static_cast<int32_t>(0x1),
		Dns = static_cast<int32_t>(0x2),
		IPv4 = static_cast<int32_t>(0x3),
		IPv6 = static_cast<int32_t>(0x4),
	};
}

