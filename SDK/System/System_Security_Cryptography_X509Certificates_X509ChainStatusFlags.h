#pragma once
namespace System::System::Security::Cryptography::X509Certificates
{
	enum struct X509ChainStatusFlags : int32_t
	{
		NoError = static_cast<int32_t>(0x0),
		NotTimeValid = static_cast<int32_t>(0x1),
		NotTimeNested = static_cast<int32_t>(0x2),
		Revoked = static_cast<int32_t>(0x4),
		NotSignatureValid = static_cast<int32_t>(0x8),
		NotValidForUsage = static_cast<int32_t>(0x10),
		UntrustedRoot = static_cast<int32_t>(0x20),
		RevocationStatusUnknown = static_cast<int32_t>(0x40),
		Cyclic = static_cast<int32_t>(0x80),
		InvalidExtension = static_cast<int32_t>(0x100),
		InvalidPolicyConstraints = static_cast<int32_t>(0x200),
		InvalidBasicConstraints = static_cast<int32_t>(0x400),
		InvalidNameConstraints = static_cast<int32_t>(0x800),
		HasNotSupportedNameConstraint = static_cast<int32_t>(0x1000),
		HasNotDefinedNameConstraint = static_cast<int32_t>(0x2000),
		HasNotPermittedNameConstraint = static_cast<int32_t>(0x4000),
		HasExcludedNameConstraint = static_cast<int32_t>(0x8000),
		PartialChain = static_cast<int32_t>(0x10000),
		CtlNotTimeValid = static_cast<int32_t>(0x20000),
		CtlNotSignatureValid = static_cast<int32_t>(0x40000),
		CtlNotValidForUsage = static_cast<int32_t>(0x80000),
		OfflineRevocation = static_cast<int32_t>(0x1000000),
		NoIssuanceChainPolicy = static_cast<int32_t>(0x2000000),
		ExplicitDistrust = static_cast<int32_t>(0x4000000),
		HasNotSupportedCriticalExtension = static_cast<int32_t>(0x8000000),
		HasWeakSignature = static_cast<int32_t>(0x100000),
	};
}

