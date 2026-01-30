#pragma once
namespace Assembly_CSharp::BestHTTP::SecureProtocol::Org::BouncyCastle::Asn1::IsisMtt::Ocsp
{
	enum struct RequestedCertificate_Choice : int32_t
	{
		Certificate = static_cast<int32_t>(0xFFFFFFFF),
		PublicKeyCertificate = static_cast<int32_t>(0x0),
		AttributeCertificate = static_cast<int32_t>(0x1),
	};
}

