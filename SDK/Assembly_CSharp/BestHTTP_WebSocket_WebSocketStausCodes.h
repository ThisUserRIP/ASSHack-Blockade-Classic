#pragma once
namespace Assembly_CSharp::BestHTTP::WebSocket
{
	enum struct WebSocketStausCodes : uint16_t
	{
		NormalClosure = static_cast<uint16_t>(0x3E8),
		GoingAway = static_cast<uint16_t>(0x3E9),
		ProtocolError = static_cast<uint16_t>(0x3EA),
		WrongDataType = static_cast<uint16_t>(0x3EB),
		Reserved = static_cast<uint16_t>(0x3EC),
		NoStatusCode = static_cast<uint16_t>(0x3ED),
		ClosedAbnormally = static_cast<uint16_t>(0x3EE),
		DataError = static_cast<uint16_t>(0x3EF),
		PolicyError = static_cast<uint16_t>(0x3F0),
		TooBigMessage = static_cast<uint16_t>(0x3F1),
		ExtensionExpected = static_cast<uint16_t>(0x3F2),
		WrongRequest = static_cast<uint16_t>(0x3F3),
		TLSHandshakeError = static_cast<uint16_t>(0x3F7),
	};
}

