#pragma once
namespace System::System::Security::Cryptography::X509Certificates
{
	enum struct X509RevocationMode : int32_t
	{
		NoCheck = static_cast<int32_t>(0x0),
		Online = static_cast<int32_t>(0x1),
		Offline = static_cast<int32_t>(0x2),
	};
}

