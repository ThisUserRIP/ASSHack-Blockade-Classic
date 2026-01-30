#pragma once
namespace Assembly_CSharp::BestHTTP::ServerSentEvents
{
	enum struct States : int32_t
	{
		Initial = static_cast<int32_t>(0x0),
		Connecting = static_cast<int32_t>(0x1),
		Open = static_cast<int32_t>(0x2),
		Retrying = static_cast<int32_t>(0x3),
		Closing = static_cast<int32_t>(0x4),
		Closed = static_cast<int32_t>(0x5),
	};
}

