#pragma once
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Security
{
	enum struct CipherUtilities_CipherMode : int32_t
	{
		ECB = static_cast<int32_t>(0x0),
		NONE = static_cast<int32_t>(0x1),
		CBC = static_cast<int32_t>(0x2),
		CCM = static_cast<int32_t>(0x3),
		CFB = static_cast<int32_t>(0x4),
		CTR = static_cast<int32_t>(0x5),
		CTS = static_cast<int32_t>(0x6),
		EAX = static_cast<int32_t>(0x7),
		GCM = static_cast<int32_t>(0x8),
		GOFB = static_cast<int32_t>(0x9),
		OCB = static_cast<int32_t>(0xA),
		OFB = static_cast<int32_t>(0xB),
		OPENPGPCFB = static_cast<int32_t>(0xC),
		SIC = static_cast<int32_t>(0xD),
	};
}

