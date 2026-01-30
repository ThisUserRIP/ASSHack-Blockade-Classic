#pragma once
namespace Assembly_CSharp::BestHTTP
{
	enum struct SOCKSAddressTypes : int32_t
	{
		IPV4 = static_cast<int32_t>(0x0),
		DomainName = static_cast<int32_t>(0x3),
		IPv6 = static_cast<int32_t>(0x4),
	};
}

