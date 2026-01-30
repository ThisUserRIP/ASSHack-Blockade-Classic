#pragma once
namespace Assembly_CSharp::BestHTTP
{
	enum struct HTTPConnectionStates : int32_t
	{
		Initial = static_cast<int32_t>(0x0),
		Processing = static_cast<int32_t>(0x1),
		Redirected = static_cast<int32_t>(0x2),
		Upgraded = static_cast<int32_t>(0x3),
		WaitForProtocolShutdown = static_cast<int32_t>(0x4),
		WaitForRecycle = static_cast<int32_t>(0x5),
		Free = static_cast<int32_t>(0x6),
		AbortRequested = static_cast<int32_t>(0x7),
		TimedOut = static_cast<int32_t>(0x8),
		Closed = static_cast<int32_t>(0x9),
	};
}

