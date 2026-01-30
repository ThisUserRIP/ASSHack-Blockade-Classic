#pragma once
namespace Assembly_CSharp::BestHTTP::SignalR
{
	enum struct TransportStates : int32_t
	{
		Initial = static_cast<int32_t>(0x0),
		Connecting = static_cast<int32_t>(0x1),
		Reconnecting = static_cast<int32_t>(0x2),
		Starting = static_cast<int32_t>(0x3),
		Started = static_cast<int32_t>(0x4),
		Closing = static_cast<int32_t>(0x5),
		Closed = static_cast<int32_t>(0x6),
	};
}

