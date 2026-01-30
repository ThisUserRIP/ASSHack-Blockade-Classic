#pragma once
namespace Assembly_CSharp::BestHTTP
{
	enum struct SOCKSReplies : uint8_t
	{
		Succeeded = static_cast<uint8_t>(0x0),
		GeneralSOCKSServerFailure = static_cast<uint8_t>(0x1),
		ConnectionNotAllowedByRuleset = static_cast<uint8_t>(0x2),
		NetworkUnreachable = static_cast<uint8_t>(0x3),
		HostUnreachable = static_cast<uint8_t>(0x4),
		ConnectionRefused = static_cast<uint8_t>(0x5),
		TTLExpired = static_cast<uint8_t>(0x6),
		CommandNotSupported = static_cast<uint8_t>(0x7),
		AddressTypeNotSupported = static_cast<uint8_t>(0x8),
	};
}

