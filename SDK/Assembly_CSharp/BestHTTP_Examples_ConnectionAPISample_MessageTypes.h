#pragma once
namespace Assembly_CSharp::BestHTTP::Examples
{
	enum struct ConnectionAPISample_MessageTypes : int32_t
	{
		Send = static_cast<int32_t>(0x0),
		Broadcast = static_cast<int32_t>(0x1),
		Join = static_cast<int32_t>(0x2),
		PrivateMessage = static_cast<int32_t>(0x3),
		AddToGroup = static_cast<int32_t>(0x4),
		RemoveFromGroup = static_cast<int32_t>(0x5),
		SendToGroup = static_cast<int32_t>(0x6),
		BroadcastExceptMe = static_cast<int32_t>(0x7),
	};
}

