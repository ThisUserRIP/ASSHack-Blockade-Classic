#pragma once
namespace System::System::Net::Sockets
{
	enum struct SocketShutdown : int32_t
	{
		Receive = static_cast<int32_t>(0x0),
		Send = static_cast<int32_t>(0x1),
		Both = static_cast<int32_t>(0x2),
	};
}

