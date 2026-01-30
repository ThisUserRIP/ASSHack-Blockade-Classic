#pragma once
namespace Assembly_CSharp::ENet
{
	enum struct EventType : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Connect = static_cast<int32_t>(0x1),
		Disconnect = static_cast<int32_t>(0x2),
		Receive = static_cast<int32_t>(0x3),
		Timeout = static_cast<int32_t>(0x4),
	};
}

