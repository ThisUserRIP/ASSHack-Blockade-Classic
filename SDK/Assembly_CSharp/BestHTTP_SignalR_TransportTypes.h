#pragma once
namespace Assembly_CSharp::BestHTTP::SignalR
{
	enum struct TransportTypes : int32_t
	{
		WebSocket = static_cast<int32_t>(0x0),
		ServerSentEvents = static_cast<int32_t>(0x1),
		LongPoll = static_cast<int32_t>(0x2),
	};
}

