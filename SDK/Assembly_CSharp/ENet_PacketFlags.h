#pragma once
namespace Assembly_CSharp::ENet
{
	enum struct PacketFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Reliable = static_cast<int32_t>(0x1),
		Unsequenced = static_cast<int32_t>(0x2),
		NoAllocate = static_cast<int32_t>(0x4),
		UnreliableFragmented = static_cast<int32_t>(0x8),
		Instant = static_cast<int32_t>(0x10),
		Unthrottled = static_cast<int32_t>(0x20),
		Sent = static_cast<int32_t>(0x100),
	};
}

