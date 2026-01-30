#pragma once
namespace Assembly_CSharp::BestHTTP::SocketIO::Transports
{
	enum struct PollingTransport_PayloadTypes : uint8_t
	{
		Text = static_cast<uint8_t>(0x0),
		Binary = static_cast<uint8_t>(0x1),
	};
}

