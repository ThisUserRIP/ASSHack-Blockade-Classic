#pragma once
namespace Assembly_CSharp::BestHTTP::SocketIO
{
	enum struct SocketIOEventTypes : int32_t
	{
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
		Connect = static_cast<int32_t>(0x0),
		Disconnect = static_cast<int32_t>(0x1),
		Event = static_cast<int32_t>(0x2),
		Ack = static_cast<int32_t>(0x3),
		Error = static_cast<int32_t>(0x4),
		BinaryEvent = static_cast<int32_t>(0x5),
		BinaryAck = static_cast<int32_t>(0x6),
	};
}

