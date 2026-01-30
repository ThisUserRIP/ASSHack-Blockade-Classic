#pragma once
namespace System::System::Net::NetworkInformation
{
	enum struct NetworkInterfaceComponent : int32_t
	{
		IPv4 = static_cast<int32_t>(0x0),
		IPv6 = static_cast<int32_t>(0x1),
	};
}

