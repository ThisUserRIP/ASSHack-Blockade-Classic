#pragma once
namespace Assembly_CSharp::BestHTTP
{
	enum struct RetryCauses : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Reconnect = static_cast<int32_t>(0x1),
		Authenticate = static_cast<int32_t>(0x2),
		ProxyAuthenticate = static_cast<int32_t>(0x3),
	};
}

