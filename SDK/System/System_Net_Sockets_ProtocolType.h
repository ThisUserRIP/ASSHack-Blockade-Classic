#pragma once
namespace System::System::Net::Sockets
{
	enum struct ProtocolType : int32_t
	{
		IP = static_cast<int32_t>(0x0),
		IPv6HopByHopOptions = static_cast<int32_t>(0x0),
		Icmp = static_cast<int32_t>(0x1),
		Igmp = static_cast<int32_t>(0x2),
		Ggp = static_cast<int32_t>(0x3),
		IPv4 = static_cast<int32_t>(0x4),
		Tcp = static_cast<int32_t>(0x6),
		Pup = static_cast<int32_t>(0xC),
		Udp = static_cast<int32_t>(0x11),
		Idp = static_cast<int32_t>(0x16),
		IPv6 = static_cast<int32_t>(0x29),
		IPv6RoutingHeader = static_cast<int32_t>(0x2B),
		IPv6FragmentHeader = static_cast<int32_t>(0x2C),
		IPSecEncapsulatingSecurityPayload = static_cast<int32_t>(0x32),
		IPSecAuthenticationHeader = static_cast<int32_t>(0x33),
		IcmpV6 = static_cast<int32_t>(0x3A),
		IPv6NoNextHeader = static_cast<int32_t>(0x3B),
		IPv6DestinationOptions = static_cast<int32_t>(0x3C),
		ND = static_cast<int32_t>(0x4D),
		Raw = static_cast<int32_t>(0xFF),
		Unspecified = static_cast<int32_t>(0x0),
		Ipx = static_cast<int32_t>(0x3E8),
		Spx = static_cast<int32_t>(0x4E8),
		SpxII = static_cast<int32_t>(0x4E9),
		Unknown = static_cast<int32_t>(0xFFFFFFFF),
	};
}

