#pragma once
namespace Assembly_CSharp::ENet
{
	enum struct PeerState : int32_t
	{
		Uninitialized = static_cast<int32_t>(0xFFFFFFFF),
		Disconnected = static_cast<int32_t>(0x0),
		Connecting = static_cast<int32_t>(0x1),
		AcknowledgingConnect = static_cast<int32_t>(0x2),
		ConnectionPending = static_cast<int32_t>(0x3),
		ConnectionSucceeded = static_cast<int32_t>(0x4),
		Connected = static_cast<int32_t>(0x5),
		DisconnectLater = static_cast<int32_t>(0x6),
		Disconnecting = static_cast<int32_t>(0x7),
		AcknowledgingDisconnect = static_cast<int32_t>(0x8),
		Zombie = static_cast<int32_t>(0x9),
	};
}

