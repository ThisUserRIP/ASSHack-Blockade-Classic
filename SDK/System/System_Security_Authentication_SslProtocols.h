#pragma once
namespace System::System::Security::Authentication
{
	enum struct SslProtocols : int32_t
	{
		None = static_cast<int32_t>(0x0),
		Ssl2 = static_cast<int32_t>(0xC),
		Ssl3 = static_cast<int32_t>(0x30),
		Tls = static_cast<int32_t>(0xC0),
		Tls11 = static_cast<int32_t>(0x300),
		Tls12 = static_cast<int32_t>(0xC00),
		Default = static_cast<int32_t>(0xF0),
	};
}

