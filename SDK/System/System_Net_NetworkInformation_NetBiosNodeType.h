#pragma once
namespace System::System::Net::NetworkInformation
{
	enum struct NetBiosNodeType : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		Broadcast = static_cast<int32_t>(0x1),
		Peer2Peer = static_cast<int32_t>(0x2),
		Mixed = static_cast<int32_t>(0x4),
		Hybrid = static_cast<int32_t>(0x8),
	};
}

