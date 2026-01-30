#pragma once
namespace System::System::Net::Sockets
{
	enum struct SocketType : int32_t
	{
		Stream = static_cast<int32_t>(0x1),
		Dgram = static_cast<int32_t>(0x2),
		Raw = static_cast<int32_t>(0x3),
		Rdm = static_cast<int32_t>(0x4),
		Seqpacket = static_cast<int32_t>(0x5),
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
	};
}

