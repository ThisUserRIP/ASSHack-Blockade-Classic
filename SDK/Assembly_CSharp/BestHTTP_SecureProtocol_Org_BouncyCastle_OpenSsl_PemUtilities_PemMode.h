#pragma once
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::OpenSsl
{
	enum struct PemUtilities_PemMode : int32_t
	{
		CBC = static_cast<int32_t>(0x0),
		CFB = static_cast<int32_t>(0x1),
		ECB = static_cast<int32_t>(0x2),
		OFB = static_cast<int32_t>(0x3),
	};
}

