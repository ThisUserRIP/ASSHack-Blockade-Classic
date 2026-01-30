#pragma once
namespace System::System::Security::Cryptography::X509Certificates
{
	enum struct X509VerificationFlags : int32_t
	{
		NoFlag = static_cast<int32_t>(0x0),
		IgnoreNotTimeValid = static_cast<int32_t>(0x1),
		IgnoreCtlNotTimeValid = static_cast<int32_t>(0x2),
		IgnoreNotTimeNested = static_cast<int32_t>(0x4),
		IgnoreInvalidBasicConstraints = static_cast<int32_t>(0x8),
		AllowUnknownCertificateAuthority = static_cast<int32_t>(0x10),
		IgnoreWrongUsage = static_cast<int32_t>(0x20),
		IgnoreInvalidName = static_cast<int32_t>(0x40),
		IgnoreInvalidPolicy = static_cast<int32_t>(0x80),
		IgnoreEndRevocationUnknown = static_cast<int32_t>(0x100),
		IgnoreCtlSignerRevocationUnknown = static_cast<int32_t>(0x200),
		IgnoreCertificateAuthorityRevocationUnknown = static_cast<int32_t>(0x400),
		IgnoreRootRevocationUnknown = static_cast<int32_t>(0x800),
		AllFlags = static_cast<int32_t>(0xFFF),
	};
}

