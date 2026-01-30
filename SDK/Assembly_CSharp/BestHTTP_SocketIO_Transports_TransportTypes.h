#pragma once
namespace Assembly_CSharp::BestHTTP::SocketIO::Transports
{
	enum struct TransportTypes : int32_t
	{
		Polling = static_cast<int32_t>(0x0),
		WebSocket = static_cast<int32_t>(0x1),
	};
}

