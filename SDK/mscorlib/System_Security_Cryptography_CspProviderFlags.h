#pragma once
namespace mscorlib::System::Security::Cryptography
{
	enum struct CspProviderFlags : int32_t
	{
		NoFlags = static_cast<int32_t>(0x0),
		UseMachineKeyStore = static_cast<int32_t>(0x1),
		UseDefaultKeyContainer = static_cast<int32_t>(0x2),
		UseNonExportableKey = static_cast<int32_t>(0x4),
		UseExistingKey = static_cast<int32_t>(0x8),
		UseArchivableKey = static_cast<int32_t>(0x10),
		UseUserProtectedKey = static_cast<int32_t>(0x20),
		NoPrompt = static_cast<int32_t>(0x40),
		CreateEphemeralKey = static_cast<int32_t>(0x80),
	};
}

