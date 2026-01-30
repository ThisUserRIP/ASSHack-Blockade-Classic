#pragma once
namespace Assembly_CSharp::BestHTTP::SocketIO::Transports
{
	enum struct TransportStates : int32_t
	{
		Connecting = static_cast<int32_t>(0x0),
		Opening = static_cast<int32_t>(0x1),
		Open = static_cast<int32_t>(0x2),
		Closed = static_cast<int32_t>(0x3),
		Paused = static_cast<int32_t>(0x4),
	};
}

