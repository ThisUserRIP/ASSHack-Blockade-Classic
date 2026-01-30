#pragma once
namespace Assembly_CSharp::BestHTTP::SocketIO
{
	enum struct SocketManager_States : int32_t
	{
		Initial = static_cast<int32_t>(0x0),
		Closed = static_cast<int32_t>(0x1),
		Opening = static_cast<int32_t>(0x2),
		Open = static_cast<int32_t>(0x3),
		Paused = static_cast<int32_t>(0x4),
		Reconnecting = static_cast<int32_t>(0x5),
	};
}

