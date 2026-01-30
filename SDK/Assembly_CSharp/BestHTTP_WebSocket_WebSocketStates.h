#pragma once
namespace Assembly_CSharp::BestHTTP::WebSocket
{
	enum struct WebSocketStates : uint8_t
	{
		Connecting = static_cast<uint8_t>(0x0),
		Open = static_cast<uint8_t>(0x1),
		Closing = static_cast<uint8_t>(0x2),
		Closed = static_cast<uint8_t>(0x3),
		Unknown = static_cast<uint8_t>(0x4),
	};
}

