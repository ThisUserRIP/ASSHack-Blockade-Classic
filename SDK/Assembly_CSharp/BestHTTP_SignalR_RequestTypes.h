#pragma once
namespace Assembly_CSharp::BestHTTP::SignalR
{
	enum struct RequestTypes : int32_t
	{
		Negotiate = static_cast<int32_t>(0x0),
		Connect = static_cast<int32_t>(0x1),
		Start = static_cast<int32_t>(0x2),
		Poll = static_cast<int32_t>(0x3),
		Send = static_cast<int32_t>(0x4),
		Reconnect = static_cast<int32_t>(0x5),
		Abort = static_cast<int32_t>(0x6),
		Ping = static_cast<int32_t>(0x7),
	};
}

