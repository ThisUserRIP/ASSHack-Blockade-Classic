#pragma once
namespace Assembly_CSharp::BestHTTP::SignalRCore::Messages
{
	enum struct MessageTypes : int32_t
	{
		Handshake = static_cast<int32_t>(0x0),
		Invocation = static_cast<int32_t>(0x1),
		StreamItem = static_cast<int32_t>(0x2),
		Completion = static_cast<int32_t>(0x3),
		StreamInvocation = static_cast<int32_t>(0x4),
		CancelInvocation = static_cast<int32_t>(0x5),
		Ping = static_cast<int32_t>(0x6),
		Close = static_cast<int32_t>(0x7),
	};
}

