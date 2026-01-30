#pragma once
namespace Assembly_CSharp::BestHTTP::SignalR
{
	enum struct ConnectionStates : int32_t
	{
		Initial = static_cast<int32_t>(0x0),
		Authenticating = static_cast<int32_t>(0x1),
		Negotiating = static_cast<int32_t>(0x2),
		Connecting = static_cast<int32_t>(0x3),
		Connected = static_cast<int32_t>(0x4),
		Reconnecting = static_cast<int32_t>(0x5),
		Closed = static_cast<int32_t>(0x6),
	};
}

