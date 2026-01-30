#pragma once
namespace System::System::Net::Security
{
	enum struct EncryptionPolicy : int32_t
	{
		RequireEncryption = static_cast<int32_t>(0x0),
		AllowNoEncryption = static_cast<int32_t>(0x1),
		NoEncryption = static_cast<int32_t>(0x2),
	};
}

