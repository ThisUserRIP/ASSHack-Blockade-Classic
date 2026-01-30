#pragma once
namespace Assembly_CSharp::BestHTTP::SocketIO
{
	enum struct TransportEventTypes : int32_t
	{
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
		Open = static_cast<int32_t>(0x0),
		Close = static_cast<int32_t>(0x1),
		Ping = static_cast<int32_t>(0x2),
		Pong = static_cast<int32_t>(0x3),
		Message = static_cast<int32_t>(0x4),
		Upgrade = static_cast<int32_t>(0x5),
		Noop = static_cast<int32_t>(0x6),
	};
}

