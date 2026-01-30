#pragma once
namespace Assembly_CSharp::BestHTTP::SocketIO
{
	enum struct Packet_PayloadTypes : uint8_t
	{
		Textual = static_cast<uint8_t>(0x0),
		Binary = static_cast<uint8_t>(0x1),
	};
}

