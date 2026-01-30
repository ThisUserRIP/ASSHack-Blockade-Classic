#pragma once
namespace Mono_Security::Mono::Security::Interface
{
	enum struct MonoSslPolicyErrors : int32_t
	{
		None = static_cast<int32_t>(0x0),
		RemoteCertificateNotAvailable = static_cast<int32_t>(0x1),
		RemoteCertificateNameMismatch = static_cast<int32_t>(0x2),
		RemoteCertificateChainErrors = static_cast<int32_t>(0x4),
	};
}

