#pragma once
namespace System::System::Security::Cryptography::X509Certificates
{
	enum struct X509RevocationFlag : int32_t
	{
		EndCertificateOnly = static_cast<int32_t>(0x0),
		EntireChain = static_cast<int32_t>(0x1),
		ExcludeRoot = static_cast<int32_t>(0x2),
	};
}

