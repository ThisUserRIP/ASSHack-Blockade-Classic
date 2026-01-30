#pragma once
namespace System::System::Security::Cryptography::X509Certificates
{
	enum struct StoreLocation : int32_t
	{
		CurrentUser = static_cast<int32_t>(0x1),
		LocalMachine = static_cast<int32_t>(0x2),
	};
}

