#pragma once
namespace System::Mono::Unity
{
	enum struct UnityTls_unitytls_protocol : uint32_t
	{
		UNITYTLS_PROTOCOL_TLS_1_0 = static_cast<uint32_t>(0x0),
		UNITYTLS_PROTOCOL_TLS_1_1 = static_cast<uint32_t>(0x1),
		UNITYTLS_PROTOCOL_TLS_1_2 = static_cast<uint32_t>(0x2),
		UNITYTLS_PROTOCOL_INVALID = static_cast<uint32_t>(0x3),
	};
}

