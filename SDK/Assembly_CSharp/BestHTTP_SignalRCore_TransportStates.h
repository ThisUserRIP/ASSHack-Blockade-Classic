#pragma once
namespace Assembly_CSharp::BestHTTP::SignalRCore
{
	enum struct TransportStates : int32_t
	{
		Initial = static_cast<int32_t>(0x0),
		Connecting = static_cast<int32_t>(0x1),
		Connected = static_cast<int32_t>(0x2),
		Closing = static_cast<int32_t>(0x3),
		Failed = static_cast<int32_t>(0x4),
		Closed = static_cast<int32_t>(0x5),
	};
}

