#pragma once
namespace System::System::Net::Sockets
{
	enum struct SocketOperation : int32_t
	{
		Accept = static_cast<int32_t>(0x0),
		Connect = static_cast<int32_t>(0x1),
		Receive = static_cast<int32_t>(0x2),
		ReceiveFrom = static_cast<int32_t>(0x3),
		Send = static_cast<int32_t>(0x4),
		SendTo = static_cast<int32_t>(0x5),
		RecvJustCallback = static_cast<int32_t>(0x6),
		SendJustCallback = static_cast<int32_t>(0x7),
		Disconnect = static_cast<int32_t>(0x8),
		AcceptReceive = static_cast<int32_t>(0x9),
		ReceiveGeneric = static_cast<int32_t>(0xA),
		SendGeneric = static_cast<int32_t>(0xB),
	};
}

