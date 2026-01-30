#pragma once
namespace Assembly_CSharp::BestHTTP::SocketIO
{
	enum struct SocketIOErrors : int32_t
	{
		UnknownTransport = static_cast<int32_t>(0x0),
		UnknownSid = static_cast<int32_t>(0x1),
		BadHandshakeMethod = static_cast<int32_t>(0x2),
		BadRequest = static_cast<int32_t>(0x3),
		Internal = static_cast<int32_t>(0x4),
		User = static_cast<int32_t>(0x5),
		Custom = static_cast<int32_t>(0x6),
	};
}

