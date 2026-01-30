#pragma once
namespace Mono_Security::Mono::Security::Interface
{
	enum struct AlertDescription : uint8_t
	{
		CloseNotify = static_cast<uint8_t>(0x0),
		UnexpectedMessage = static_cast<uint8_t>(0xA),
		BadRecordMAC = static_cast<uint8_t>(0x14),
		DecryptionFailed_RESERVED = static_cast<uint8_t>(0x15),
		RecordOverflow = static_cast<uint8_t>(0x16),
		DecompressionFailure = static_cast<uint8_t>(0x1E),
		HandshakeFailure = static_cast<uint8_t>(0x28),
		NoCertificate_RESERVED = static_cast<uint8_t>(0x29),
		BadCertificate = static_cast<uint8_t>(0x2A),
		UnsupportedCertificate = static_cast<uint8_t>(0x2B),
		CertificateRevoked = static_cast<uint8_t>(0x2C),
		CertificateExpired = static_cast<uint8_t>(0x2D),
		CertificateUnknown = static_cast<uint8_t>(0x2E),
		IlegalParameter = static_cast<uint8_t>(0x2F),
		UnknownCA = static_cast<uint8_t>(0x30),
		AccessDenied = static_cast<uint8_t>(0x31),
		DecodeError = static_cast<uint8_t>(0x32),
		DecryptError = static_cast<uint8_t>(0x33),
		ExportRestriction = static_cast<uint8_t>(0x3C),
		ProtocolVersion = static_cast<uint8_t>(0x46),
		InsuficientSecurity = static_cast<uint8_t>(0x47),
		InternalError = static_cast<uint8_t>(0x50),
		UserCancelled = static_cast<uint8_t>(0x5A),
		NoRenegotiation = static_cast<uint8_t>(0x64),
		UnsupportedExtension = static_cast<uint8_t>(0x6E),
	};
}

