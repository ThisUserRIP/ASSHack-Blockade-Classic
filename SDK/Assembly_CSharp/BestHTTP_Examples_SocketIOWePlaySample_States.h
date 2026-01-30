#pragma once
namespace Assembly_CSharp::BestHTTP::Examples
{
	enum struct SocketIOWePlaySample_States : int32_t
	{
		Connecting = static_cast<int32_t>(0x0),
		WaitForNick = static_cast<int32_t>(0x1),
		Joined = static_cast<int32_t>(0x2),
	};
}

