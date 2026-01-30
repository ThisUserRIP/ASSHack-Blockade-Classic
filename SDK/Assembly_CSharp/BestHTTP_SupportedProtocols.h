#pragma once
namespace Assembly_CSharp::BestHTTP
{
	enum struct SupportedProtocols : int32_t
	{
		Unknown = static_cast<int32_t>(0x0),
		HTTP = static_cast<int32_t>(0x1),
		WebSocket = static_cast<int32_t>(0x2),
		ServerSentEvents = static_cast<int32_t>(0x3),
	};
}

