#pragma once
namespace System::System::Security::Cryptography::X509Certificates
{
	enum struct X509KeyUsageFlags : int32_t
	{
		None = static_cast<int32_t>(0x0),
		EncipherOnly = static_cast<int32_t>(0x1),
		CrlSign = static_cast<int32_t>(0x2),
		KeyCertSign = static_cast<int32_t>(0x4),
		KeyAgreement = static_cast<int32_t>(0x8),
		DataEncipherment = static_cast<int32_t>(0x10),
		KeyEncipherment = static_cast<int32_t>(0x20),
		NonRepudiation = static_cast<int32_t>(0x40),
		DigitalSignature = static_cast<int32_t>(0x80),
		DecipherOnly = static_cast<int32_t>(0x8000),
	};
}

