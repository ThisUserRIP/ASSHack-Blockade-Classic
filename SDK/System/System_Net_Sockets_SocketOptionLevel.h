#pragma once
namespace System::System::Net::Sockets
{
	enum struct SocketOptionLevel : int32_t
	{
		Socket = static_cast<int32_t>(0xFFFF),
		IP = static_cast<int32_t>(0x0),
		IPv6 = static_cast<int32_t>(0x29),
		Tcp = static_cast<int32_t>(0x6),
		Udp = static_cast<int32_t>(0x11),
	};
}

