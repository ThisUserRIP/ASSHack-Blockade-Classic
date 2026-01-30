#pragma once
namespace mscorlib::System::Security::Cryptography::X509Certificates
{
	enum struct OidGroup : int32_t
	{
		AllGroups = static_cast<int32_t>(0x0),
		HashAlgorithm = static_cast<int32_t>(0x1),
		EncryptionAlgorithm = static_cast<int32_t>(0x2),
		PublicKeyAlgorithm = static_cast<int32_t>(0x3),
		SignatureAlgorithm = static_cast<int32_t>(0x4),
		Attribute = static_cast<int32_t>(0x5),
		ExtensionOrAttribute = static_cast<int32_t>(0x6),
		EnhancedKeyUsage = static_cast<int32_t>(0x7),
		Policy = static_cast<int32_t>(0x8),
		Template = static_cast<int32_t>(0x9),
		KeyDerivationFunction = static_cast<int32_t>(0xA),
		DisableSearchDS = static_cast<int32_t>(0x80000000),
	};
}

