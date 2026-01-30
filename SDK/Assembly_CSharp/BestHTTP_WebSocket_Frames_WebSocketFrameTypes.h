#pragma once
namespace Assembly_CSharp::BestHTTP::WebSocket::Frames
{
	enum struct WebSocketFrameTypes : uint8_t
	{
		Continuation = static_cast<uint8_t>(0x0),
		Text = static_cast<uint8_t>(0x1),
		Binary = static_cast<uint8_t>(0x2),
		ConnectionClose = static_cast<uint8_t>(0x8),
		Ping = static_cast<uint8_t>(0x9),
		Pong = static_cast<uint8_t>(0xA),
	};
}

