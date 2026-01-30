#pragma once
namespace System::System::Net::Sockets
{
	enum struct IPProtectionLevel : int32_t
	{
		Unspecified = static_cast<int32_t>(0xFFFFFFFF),
		Unrestricted = static_cast<int32_t>(0xA),
		EdgeRestricted = static_cast<int32_t>(0x14),
		Restricted = static_cast<int32_t>(0x1E),
	};
}

