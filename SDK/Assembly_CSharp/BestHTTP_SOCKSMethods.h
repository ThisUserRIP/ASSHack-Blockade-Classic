#pragma once
namespace Assembly_CSharp::BestHTTP
{
	enum struct SOCKSMethods : uint8_t
	{
		NoAuthenticationRequired = static_cast<uint8_t>(0x0),
		GSSAPI = static_cast<uint8_t>(0x1),
		UsernameAndPassword = static_cast<uint8_t>(0x2),
		NoAcceptableMethods = static_cast<uint8_t>(0xFF),
	};
}

