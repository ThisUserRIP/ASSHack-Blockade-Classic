#pragma once
namespace Mono_Security::Mono::Security::Interface
{
	enum struct TlsProtocols : int32_t
	{
		Zero = static_cast<int32_t>(0x0),
		Tls10Client = static_cast<int32_t>(0x80),
		Tls10Server = static_cast<int32_t>(0x40),
		Tls10 = static_cast<int32_t>(0xC0),
		Tls11Client = static_cast<int32_t>(0x200),
		Tls11Server = static_cast<int32_t>(0x100),
		Tls11 = static_cast<int32_t>(0x300),
		Tls12Client = static_cast<int32_t>(0x800),
		Tls12Server = static_cast<int32_t>(0x400),
		Tls12 = static_cast<int32_t>(0xC00),
		ClientMask = static_cast<int32_t>(0xA80),
		ServerMask = static_cast<int32_t>(0x540),
	};
}

