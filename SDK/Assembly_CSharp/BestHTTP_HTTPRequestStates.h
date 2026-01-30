#pragma once
namespace Assembly_CSharp::BestHTTP
{
	enum struct HTTPRequestStates : int32_t
	{
		Initial = static_cast<int32_t>(0x0),
		Queued = static_cast<int32_t>(0x1),
		Processing = static_cast<int32_t>(0x2),
		Finished = static_cast<int32_t>(0x3),
		Error = static_cast<int32_t>(0x4),
		Aborted = static_cast<int32_t>(0x5),
		ConnectionTimedOut = static_cast<int32_t>(0x6),
		TimedOut = static_cast<int32_t>(0x7),
	};
}

