#pragma once
namespace mscorlib::System::Security::Cryptography::X509Certificates
{
	enum struct X509KeyStorageFlags : int32_t
	{
		DefaultKeySet = static_cast<int32_t>(0x0),
		UserKeySet = static_cast<int32_t>(0x1),
		MachineKeySet = static_cast<int32_t>(0x2),
		Exportable = static_cast<int32_t>(0x4),
		UserProtected = static_cast<int32_t>(0x8),
		PersistKeySet = static_cast<int32_t>(0x10),
		EphemeralKeySet = static_cast<int32_t>(0x20),
	};
}

