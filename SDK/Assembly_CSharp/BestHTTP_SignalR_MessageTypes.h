#pragma once
namespace Assembly_CSharp::BestHTTP::SignalR
{
	enum struct MessageTypes : int32_t
	{
		KeepAlive = static_cast<int32_t>(0x0),
		Data = static_cast<int32_t>(0x1),
		Multiple = static_cast<int32_t>(0x2),
		Result = static_cast<int32_t>(0x3),
		Failure = static_cast<int32_t>(0x4),
		MethodCall = static_cast<int32_t>(0x5),
		Progress = static_cast<int32_t>(0x6),
	};
}

