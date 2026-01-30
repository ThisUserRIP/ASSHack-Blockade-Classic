#pragma once
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::Cmp
{
	enum struct PkiStatus : int32_t
	{
		Granted = static_cast<int32_t>(0x0),
		GrantedWithMods = static_cast<int32_t>(0x1),
		Rejection = static_cast<int32_t>(0x2),
		Waiting = static_cast<int32_t>(0x3),
		RevocationWarning = static_cast<int32_t>(0x4),
		RevocationNotification = static_cast<int32_t>(0x5),
		KeyUpdateWarning = static_cast<int32_t>(0x6),
	};
}

