#pragma once
namespace Assembly_CSharp::BestHTTP::SignalR
{
	enum struct ProtocolVersions : uint8_t
	{
		Protocol_2_0 = static_cast<uint8_t>(0x0),
		Protocol_2_1 = static_cast<uint8_t>(0x1),
		Protocol_2_2 = static_cast<uint8_t>(0x2),
	};
}

