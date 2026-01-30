#pragma once
namespace System::System::Net::Sockets
{
	enum struct SocketFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		OutOfBand = static_cast<int32_t>(0x1),
		Peek = static_cast<int32_t>(0x2),
		DontRoute = static_cast<int32_t>(0x4),
		MaxIOVectorLength = static_cast<int32_t>(0x10),
		Truncated = static_cast<int32_t>(0x100),
		ControlDataTruncated = static_cast<int32_t>(0x200),
		Broadcast = static_cast<int32_t>(0x400),
		Multicast = static_cast<int32_t>(0x800),
		Partial = static_cast<int32_t>(0x8000),
	};
}

